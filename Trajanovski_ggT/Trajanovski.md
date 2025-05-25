# Größten gemeinsamen Teiler zweier natürlicher Zahlen a, b

## Selbst ausgedachten Pseudocode

1. Natürliche Zahlen a und b eingeben.
2. Wenn a ist gleich 0 oder b ist gleich 0, dann der größte gemeinsame Teiler ist b (falls a = 0) oder a (falls b = 0).
3. Sonst wiederhole solange b nicht gleich 0 ist.
4. Wenn a größer als b ist, dann setze a gleich a modulo b.
5. Sonst setze b gleich b modulo a.
6. Gib a aus, da es der größte gemeinsame Teiler ist.

## Pseudocode von ChatGPT

Funktion ggT(a, b):
    Solange b nicht gleich 0:
        temp ist gleich b
        b ist gleich a modulo b
        a ist gleich temp
    Gib a aus

## Flussdiagramm

```mermaid
flowchart TD
    A(Start) --> B[ggT = 1]
    B --> C[Teiler = 1]
    C --> D[Solange Teiler <= min - a, b]
    D --> E{Überprüfe: Teiler <= min - a, b}
    E --> |Ja| F[Wenn a modulo Teiler = 0 und b modulo Teiler = 0]
    F --> G[Aktualisiere ggT auf Teiler]
    G --> H[Inkrementiere Teiler]
    H --> D
    E --> |Nein| I[Ausgabe ggT]
    I --> J(Ende)