#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    printf("Eingabe: ");
    scanf("%i", &x);

    if (x <= 1) {
        printf("Ungültige Zahl");
    } else {
        int ist_prime = 1; 
        for (int i = 2; i <= x / 2; i++) {
            if (x % i == 0) {
                ist_prime = 0; 
                break;
            }
        }
        if (ist_prime) {
            printf("%i ist eine Primzahl", x);
        } else {
            printf("%i ist keine Primzahl", x);
        }
    }

    return 0;
}
