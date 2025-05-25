/*
    @author Marko Trajanovski
    @date 10.03.2024
*/

#include <stdio.h>

void primfaktorzerlegung(int x) {
    printf("Primfaktoren von %d sind: ", x);
    
    int teiler = 2;

    while (x > 1) {

        if (x % teiler == 0) {
            printf("%d ", teiler);
            x = x / teiler;
        } else {
            teiler++;
        }
    }
    
    printf("\n");
}

int main() {
    int zahl;
    
    printf("Gib eine natuerliche Zahl ein: ");
    scanf("%d", &zahl);
    
    primfaktorzerlegung(zahl);
    
    return 0;
}
