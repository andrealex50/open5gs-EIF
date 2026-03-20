#!/bin/bash
curl -X POST -H "Content-Type: application/json" -d '{
  "notifUri": "http://127.0.0.1:8081/callback",
  "eventsSubscSets": {
    "set1": {
      "subscSetId": "set1",
      "event": "UE_ENERGY"
    }
  }
}' http://127.0.0.21:7777/neif-ee/v1/subscriptions --http2-prior-knowledge -v
