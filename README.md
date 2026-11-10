<p align="center"><a href="https://open5gs.org" target="_blank" rel="noopener noreferrer"><img width="100" src="https://open5gs.org/assets/img/open5gs-logo-only.png" alt="Open5GS logo"></a></p>

## Getting Started

Please follow the [documentation](https://open5gs.org/open5gs/docs/) at [open5gs.org](https://open5gs.org/)!

## Sponsors

If you find Open5GS useful for work, please consider supporting this Open Source project by [Becoming a sponsor](https://github.com/sponsors/acetcom). To manage the funding transactions transparently, you can donate through [OpenCollective](https://opencollective.com/open5gs).

<p align="center">
  <a target="_blank" href="https://open5gs.org/#sponsors">
      <img alt="sponsors" src="https://open5gs.org/assets/img/sponsors.svg">
  </a>
</p>

## Community

- Problem with Open5GS can be filed as [issues](https://github.com/open5gs/open5gs/issues) in this repository.
- Other topics related to this project are happening on the [discussions](https://github.com/open5gs/open5gs/discussions).
- Voice and text chat are available in Open5GS's [Discord](https://discordapp.com/) workspace. Use [this link](https://discord.gg/GreNkuc) to get started.

## Contributing

If you're contributing through a pull request to Open5GS project on GitHub, please read the [Contributor License Agreement](https://open5gs.org/open5gs/cla/) in advance.

## License

- Open5GS Open Source files are made available under the terms of the GNU Affero General Public License ([GNU AGPL v3.0](https://www.gnu.org/licenses/agpl-3.0.html)).
- [Commercial licenses](https://open5gs.org/open5gs/support/) are also available from [NewPlane](https://newplane.io/) at [sales@newplane.io](mailto:sales@newplane.io).

## Acknowledgements

EIF-related extensions in this fork were developed at [Instituto de Telecomunicacoes](https://www.it.pt/)
in the context of the EXIGENCE project, funded by the European Union's Horizon
Europe research and innovation programme under grant agreement No. 101139120.

Copyright (c) 2026 Instituto de Telecomunicacoes and contributors.

## Support

Technical support and customized services for Open5GS are provided by [NewPlane](https://newplane.io/) at [support@newplane.io](mailto:support@newplane.io).

## EIF Release 20 energy exposure

The EIF implements the TS 29.566 v20.1.0 OpenAPI data model
(`1.1.0-alpha.2`) at `/neif-ee/v1`. Release 19 subscription payloads
remain supported. Clients request the optional `Energy_2` feature using
`"suppFeat": "1"`. The subscription response contains the negotiated
feature bitmap.

The subscription sets accept `enePerBitInd`, `energyCatInd` and
`appRankingInd`, each set to `true` when present. Ranking applies to
UE or PDU session energy subscriptions received from a NEF over N111.
Optional `appIds` limits the applications included in that ranking.

The existing Energy Collector receives these indicators as query parameters
and each requested application as a repeated `appIds` parameter. It must
return the requested companion objects alongside `energyInfo`:

```json
{
  "energyInfo": {"energy": 12},
  "enePerBitInfo": {"enePerBit": 0.002},
  "energyCat": {"enCat": "low"},
  "appRankingInfo": {"rankedAppIds": ["video", "audio"]}
}
```

Energy is expressed in joules. The collector supplies energy per bit, the
operator-defined category, and application identifiers already ranked in
descending order of contribution. The EIF emits the companion objects
requested by the subscription and skips a report if requested data is
missing or invalid. Existing collectors returning only `energyInfo` serve
Release 19 requests.

Originating NF type is read from the TS 29.500 `User-Agent` header
(`NEF` or `NEF-...` for ranking), following the existing SCP convention.
Deploy this endpoint behind the operator's SBI authentication and access
controls so the originating NF identity is trusted.

The regression suite is registered in the normal unit-test target:

```sh
meson test -C build unit --print-errorlogs
```
