/*
    @author Marko Trajanovski
    @date 10.03.2024

    Zwie mögliche Lösungswege:
    1. Globale Variablen
    2. Übergabe des Arrays
*/

#include <stdio.h>
#include <stdlib.h>

#define N 100

int primfaktoren[N] = { 0 };

void befuelle(int primzahlen[]);
void print1();

int main() {

    // Lösung mittels der globalen Variable primfaktoren.
    // Irgendwelche Werte in das Array schreiben:
    for (int i = N/2; i < N; i++) {
        primfaktoren[i] = i;
    }
    print1();

    // Lösung mittels einer lokalen Variable primzahlen.
    int primzahlen[N] = { 0 };
    befuelle(primzahlen);
    for (int i = 0; i < N; i++) {
        printf("%i ", primzahlen[i]);
    }

    return EXIT_SUCCESS;
}

void befuelle(int primzahlen[]) {
    for (int i = N/2; i < N; i++) {
        primzahlen[i] = i;
    }
}

void print1() {
    for (int i = 0; i < N; i++) {
        printf("%i ", primfaktoren[i]);
    }
}