#include <stdio.h>

int main() {

    int wertA;

    printf("Geben sie ine Zahl zwischen 1 und 5 ein:");
    scanf("%i", &wertA);

    switch (wertA) {
    case 1:
        printf("Ihre Note ist ein SEHR GUT");
        break;
    case 2:
        printf("Ihre Note ist ein GUT");
        break;
    case 3:
        printf("Ihre Note ist ein BEFRIEDIGEND");
        break;
    case 4:
        printf("Ihre Note ist ein GENUEGEND");
        break;
    case 5:
        printf("Ihre Note ist ein NICHT GENUEGEND");
        break;   
    default:
        printf("Keine gueltige Note eingegeben");
        break;
    }
}