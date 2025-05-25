#include <stdio.h>
#include <math.h>

int binaer_in_dezimal(int binaer) {
    int dezimal = 0, exponent = 0;

    while (binaer != 0) {
        int rest = binaer % 10;
        dezimal += rest * pow(2, exponent);
        exponent++;
        binaer /= 10;
    }

    return dezimal;
}

int main() {

    int binaer;
    printf("Geben Sie eine Binärzahl ein: ");
    scanf("%d", &binaer);

    int dezimal = binary_to_decimal(binaer);
    printf("Die Dezimalzahl ist: %d\n", dezimal);

    return 0;
}