import socket
import h2.connection
import h2.config
import h2.events
import json

def h2_server():
    sock = socket.socket()
    sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    sock.bind(('127.0.0.1', 8081))
    sock.listen(5)
    print("Servidor Python HTTP/2 à escuta na porta 8081...")

    while True:
        conn, addr = sock.accept()
        config = h2.config.H2Configuration(client_side=False)
        h2_conn = h2.connection.H2Connection(config=config)
        h2_conn.initiate_connection()
        conn.sendall(h2_conn.data_to_send())

        payloads = {}
        try:
            while True:
                data = conn.recv(65535)
                if not data: break
                
                events = h2_conn.receive_data(data)
                for event in events:
                    if isinstance(event, h2.events.DataReceived):
                        stream_id = event.stream_id
                        payloads[stream_id] = payloads.get(stream_id, b'') + event.data

                    elif isinstance(event, h2.events.StreamEnded):
                        stream_id = event.stream_id
                        body = payloads.get(stream_id, b'').decode('utf-8')
                        print("\n" + "="*40)
                        print("NOTIFICATION RECEIVED!")
                        print("="*40)
                        try:
                            parsed = json.loads(body)
                            print(json.dumps(parsed, indent=2))
                        except Exception:
                            print(body)
                        
                        # Responder ao Open5GS que recebemos com SUCESSO (204 No Content)
                        h2_conn.send_headers(stream_id, [(':status', '204')], end_stream=True)
                
                # Enviar qualquer resposta que esteja pendente
                out_data = h2_conn.data_to_send()
                if out_data:
                    conn.sendall(out_data)
        except Exception as e:
            print(f"Erro no cliente: {e}")
        finally:
            conn.close()

if __name__ == '__main__':
    h2_server()