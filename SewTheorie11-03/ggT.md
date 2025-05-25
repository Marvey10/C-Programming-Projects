# Größter gemeinsamer Teiler zweier Zahlen a, b
### Problemstellung:
Der ggT zweier natürlicher Zahlen ist die größte natürliche Zahl, die sowohl a als auch b vollständig teilt.

Der größte gemeinsame Teiler heißt im Englischen greatest common divisor (gcd)\
Das kleinste gemeinsame Vielfache heißt im Englischen lowest common multiple (lcm)

### Beispiel:
a = 48 = 2^4*3\
b = 36 = 2^2*3^2\
\
48 | 2 36 | 2\
24 | 2 18 | 2\
12 | 2  9 | 3\
 6 | 2  3 | 3\
 3 | 3  1 | 1\
 1 | 1

ggt(48, 36) = 2^2*3 = 12 

## Pseudocode
Lese die Zahlen a und b ein.\
Führe die Primfaktorzerlegung von a aus und speichere das Ergebnis im Array A ab.
(A = primfaktorzerlegung(a))
Führe die Primfaktorzerlegung von a aus und speichere das Ergebnis im Array B ab.
(A = primfaktorzerlegung(a))
Vergleiche die Arrays A und B und finde die gemeinsamen Faktoren mit der geringsten Potenz.\
Bereche den gemeinsamen Teiler aus diesen Faktoren.

## Flussdiagramm

## Umsetzung im C-Programm