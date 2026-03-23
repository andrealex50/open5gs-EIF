from http.server import BaseHTTPRequestHandler, HTTPServer
import sys

class WebhookHandler(BaseHTTPRequestHandler):
    def do_POST(self):
        content_len = int(self.headers.get('Content-Length'))
        post_body = self.rfile.read(content_len)
        with open("mock_server.log", "a") as f:
            f.write(f"Received POST: {post_body.decode('utf-8')}\n")
        
        self.send_response(204)
        self.end_headers()

server = HTTPServer(('127.0.0.1', 8081), WebhookHandler)
server.serve_forever()
