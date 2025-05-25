/*
    @author Marko Trajanovski
    @date 06.12.2023
*/

#include <stdio.h>
#include "test.h"
#include "colors.h"

int main(void) {
    
    int wertA;
    int wertB;
    printf("Additionsrechner\n");
    printf("Bitte geben Sie eine Zahl ein:");
    scanf("%i", &wertA);
    printf("\nBitte geben Sie eine Zahl ein:");
    scanf("%i", &wertB);
    printf("%i+%i=%i", wertA, wertB, rechner(wertA, wertB));

    srand (time(NULL));

    return 0;
}