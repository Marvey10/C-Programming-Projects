#include <stdio.h>
#include <stdlib.h>

int main() {

    int wertA;
    int wertB;
    char wertC;

    printf("Geben Sie was ein: ");
    scanf("%i%c%i", &wertA, &wertB, &wertC);
    printf("Ausgabe: %i%c%i", wertA, wertB, wertC);

    printf("Geben Sie das Gewicht für den Koffer ein: ");
    scanf("%i", &wertA);
    
    if (wertA <= 8) {
        printf("Der Koffer ist Handgepaeck");
    } else if (wertA >= 9) {
        if (wertA <= 19) {
            printf("Ihr Koffer wird eingecheckt");
        } else if (wertA >= 20) {
            printf("Ihr Koffer ist Sondergepaeck");
        } else {
            printf("Koffer konnte zugeordnet werden");
        }
    }

    return 0;
}