/*
    @author Marko Trajanovski
    @date 06.12.2023
*/

#include <stdio.h>
#include <stdlib.h>
#include "rechner1.h"

int main(void) {

    float wertA;
    float wertB;
    float wertC;
    char opt;
    
    scanf("%f%c%f", &wertA, &opt, &wertB);
    
    switch (opt) {
    case '+':
        printf("Ergebnis der Addition: %.2f", rechner(wertA, wertB));
        break;
    case '-':
        printf("Ergebnis der Subtraktion: %.2f", rechner1(wertA, wertB));
        break;
    case '*':
        printf("Ergebnis der Multiplikation: %.2f", rechner2(wertA, wertB));
        break;
    case '/':
        printf("Ergebnis der Division: %.2f", rechner3(wertA, wertB));
        break;
    default:
        printf("Bitte Rechnung im Format Zahl Operator Zahl eingeben: ");
        scanf("%f%c%f", wertA, opt, wertB);
        printf("\nFehlerhafte Eingabe");
        break;
    }

}