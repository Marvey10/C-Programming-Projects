#include <stdio.h>

int main() {

    float Gewicht;
    printf("Wie schwer ist der Koffer?\n");
    scanf("%f", &Gewicht);
    
    if (Gewicht <= 8) {
        printf("Der Koffer ist Handgepaeck");
    } else if (Gewicht >= 8 && Gewicht <= 20) {
        printf("Der Koffer muss eingecheckt werden");
    } else {
        printf("Der Koffer ist Sondergepaeck");
    }
    return 0;
}