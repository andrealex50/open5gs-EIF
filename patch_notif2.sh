#!/bin/bash
sed -i 's/if (!sess->energy_ee_subsc->notif_uri)/if (!sess->energy_ee_subsc || !sess->energy_ee_subsc->notif_uri)/' src/eif/neif-handler.c
