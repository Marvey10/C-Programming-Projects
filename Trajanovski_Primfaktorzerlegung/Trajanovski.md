# Primfaktorzerlegung einer natürlichen Zahl x größer 1

## Selbst ausgedachten Pseudocode

1. Starte mit einer leeren Liste "Primfaktoren".
2. Beginne mit dem kleinsten möglichen Teiler, der 2 ist.
3. Teile die Zahl durch den Teiler.
4. Wenn die Zahl durch den Teiler teilbar ist, füge den Teiler zur Liste der Primfaktoren hinzu.
5. Erhöhe den Teiler um 1 und wiederhole Schritt 3 bis 5, bis die Zahl 1 erreicht ist.

## Pseudocode von ChatGPT

Funktion primfaktorzerlegung(x):
    primfaktoren = []
    aktueller_teiler = 2
    
    Solange x > 1:
        Wenn x durch aktuellen_teiler teilbar ist:
            primfaktoren.hinzufügen(aktueller_teiler)
            x = x / aktuellen_teiler
        Sonst:
            aktuellen_teiler erhöhen
    
    Rückgabe primfaktoren

## Flussdiagramm

```mermaid
flowchart TD
    A(Start) --> B[Initialisiere primfaktoren als leere Liste]
    B --> C[Setze teiler auf 2]
    C --> D[Solange teiler <= Wurzel von x]
    D --> E[Solange x modulo teiler = 0]
    E --> F[Füge teiler zu primfaktoren hinzu]
    F --> G[Aktualisiere x durch Division durch teiler]
    G --> H[Inkrementiere teiler]
    H --> D
    E --> H
    D --> I[Falls x größer als 1]
    I --> J[Füge x zu primfaktoren hinzu]
    J --> K[Gebe primfaktoren zurück]
    K --> L(Ende)