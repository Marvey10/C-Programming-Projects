# Tic-Tac-Toe

## Flussdiagramm:

```mermaid
flowchart TD
    A(Start) -->|Modus wählen| B{Zwei Spieler?}
    B -->|Ja| C[Spielfeld initialisieren]
    B -->|Nein| D[Spielfeld initialisieren]
    C --> E{Spieler X am Zug?}
    E -->|Ja| F[Spieler X Zug]
    E -->|Nein| G[Spieler O Zug]
    F --> H[Gewinner überprüfen]
    G --> H
    H -->|Gewinner vorhanden| I[Gewinn anzeigen]
    H -->|Kein Gewinner| J[Unentschieden überprüfen]
    J -->|Unentschieden| I
    J -->|Kein Unentschieden| E
    I --> K[Spiel wiederholen?]
    K -->|Ja| B
    K -->|Nein| L(Ende)
    D --> G