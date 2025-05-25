/*
    @author Marko Trajanovski
    @date 20.12.2023
*/

#include <stdio.h>
#include <stdlib.h>

int quadrieren(int x) {
    return x*x;
}

void ausgeben(int x, int q) {
    printf("Das Quadrat von %i ist %i", x, q);
}

int main() {
    int x = 6;
    int q = quadrieren(x);
    ausgeben(x, q);
    return EXIT_SUCCESS;
}