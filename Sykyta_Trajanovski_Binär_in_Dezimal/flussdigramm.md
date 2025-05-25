# Umrechnen einer Binärzahl in eine Dezimalzahl

## Flussdiagramm:

```mermaid
flowchart TD
    A[Start] --> B{Weitere Bits?}
    B -->|Ja| C[Bit lesen]
    C --> D[Dezimalzahl aktualisieren]
    D --> E{Letztes Bit?}
    E -->|Nein| B
    E -->|Ja| F[Ergebnis ausgeben]
    F --> G[Ende]