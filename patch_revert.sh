#!/bin/bash
sed -i 's/    EnergyEeEvent:/    EnergyEeEvent:\n      anyOf:\n        - type: string/' lib/sbi/support/r17-20230301-openapitools-6.4.0/modified/TS29566_Neif_EventExposure.yaml
sed -i 's/^      enum:/          enum:/' lib/sbi/support/r17-20230301-openapitools-6.4.0/modified/TS29566_Neif_EventExposure.yaml
sed -i 's/^        - UE_ENERGY/            - UE_ENERGY/' lib/sbi/support/r17-20230301-openapitools-6.4.0/modified/TS29566_Neif_EventExposure.yaml
sed -i 's/^        - PDU_SESSION_ENERGY/            - PDU_SESSION_ENERGY/' lib/sbi/support/r17-20230301-openapitools-6.4.0/modified/TS29566_Neif_EventExposure.yaml
sed -i 's/^        - SERVICE_FLOW_ENERGY/            - SERVICE_FLOW_ENERGY/' lib/sbi/support/r17-20230301-openapitools-6.4.0/modified/TS29566_Neif_EventExposure.yaml
sed -i 's/^        - UE_SNSSAI_ENERGY/            - UE_SNSSAI_ENERGY/' lib/sbi/support/r17-20230301-openapitools-6.4.0/modified/TS29566_Neif_EventExposure.yaml
