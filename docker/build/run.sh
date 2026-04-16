#!/bin/sh

set -e

/root/setup.sh

# Seed EIF config on older named volumes that predate EIF support.
if [ ! -f /etc/open5gs/eif.yaml ] && [ -f /open5gs/build/configs/open5gs/eif.yaml ]; then
    cp /open5gs/build/configs/open5gs/eif.yaml /etc/open5gs/eif.yaml
fi

/usr/bin/open5gs-nrfd -D
exec /usr/bin/open5gs-eifd