#!/bin/bash
sed -i 's/sess->notifUri/sess->energy_ee_subsc->notif_uri/g' src/eif/neif-handler.c
