# Vier Gewinnt

## Flussdiagramm:

```mermaid
flowchart TD
    A(Start) --> B{Modus wählen}
    B -->|Zwei Spieler| C[Spielfeld initialisieren]
    B -->|Computer| D[Spielfeld initialisieren]
    C --> E{Spieler X am Zug?}
    E -->|Ja| F[Spieler X Zug]
    E -->|Nein| G[Spieler O Zug]
    F --> H{Gewinner überprüfen}
    G --> H
    H -->|Gewinner vorhanden| I[Gewinner anzeigen]
    H -->|Kein Gewinner| J{Unentschieden überprüfen}
    J -->|Unentschieden| M[Unentschieden anzeigen]
    M --> K
    J -->|Kein Unentschieden| E
    I --> K[Spiel wiederholen?]
    K -->|Ja| B
    K -->|Nein| L(Ende)
    D --> E