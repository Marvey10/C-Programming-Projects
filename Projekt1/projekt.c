#include <stdio.h>
#include <stdlib.h>

int main() {

    int wertA;
    int wertB;

    int wertC = 10;

    int wertD = 10 + 10;

    wertD = wertC;

    float wertF = 2.0;

    wertD = wertD + 10;

    wertD += 10;

    wertD = 100 % 9; // Modulo = Der rest wird in die Variable geschrieben.

    char Buchstabe1 = 65;
    char Buchstabe2 = 'A';

    printf("%c = %c\n", Buchstabe1, Buchstabe2);

    Buchstabe1 = Buchstabe1 + 1;

    printf("%c != %c\n", Buchstabe1, Buchstabe2);

    system("CLS");
    // printf("Bitte gib einen Buchstaben ein:");
    // scanf("%c", &Buchstabe1);
    // printf("\n%c != %c\n", Buchstabe1, Buchstabe2);

    // printf("Aditionsrechner, Zahl 1 bitte:");
    // float zahl1;
    // scanf("%f", &zahl1);
    // printf("Zahl 2 bitte:");
    // float zahl2;
    // scanf("%f", &zahl2);
    // float zahl3 = zahl1 + zahl2;
    // printf("Das Ergebnis von Zahl 1 + Zahl 2 = %f",zahl3);

    // int i = 0;
    // i = i + 1;
    // i += 1;
    // i++;
    // printf("\nDie Ausgabe von i ist= %d ", i);
    // i = i - 1;
    // i -= 1;
    // i--;
    // printf("\nDie Ausgabe von i ist= %d ", i);
    short i = 200, j = 300;
    short k = j*i;
    printf("i*j = %d\n", i*j);
    printf("i*j = %d\n", k);
    printf("Max Short = %d", __SHRT_MAX__);

    return 0;
}