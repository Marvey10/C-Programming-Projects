#include <stdio.h>

int main() {

    int wertA = 2;
    printf("Geben Sie Ihre Lotteriezahl ein:");
    scanf("%d", &wertA);
    
    if (wertA == 2) {
        printf("Sie haben gewonnen!");
    } else if (wertA == 3) {
        printf("Sie haben gewonnen!");
    } else if (wertA == 5) {
        printf("Sie haben gewonnen!");
    } else if (wertA == 7) {
        printf("Sie haben gewonnen!");
    } else if (wertA == 9) {
        printf("Sie haben gewonnen!");
    } else {
        printf("Sie haben leider nicht gewonnen.");
    }
    return 0;
}