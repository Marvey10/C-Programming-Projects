/**
 * @file    sew03-06-1.c
 * @brief   Dynamischer Speicher
 * @author  Marko Trajanovski
 * @date    2024-06-03
 *
 * powershell: cls; gcc sew03-06-1.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 4

int main() {
    printf("\33c");
    // Variablen deklarieren
    int n = 2;
    // Ein Array der Größe MAXLEN deklarieren
    int a[MAXLEN];

    // Einige Werte in das Array schreiben
    a[0] = 1;
    a[1] = 2;
    a[2] = 4;
    a[3] = 8;
    a[MAXLEN-1] = 8;
    a[4] = 16;
    a[5] = 32;
    a[6] = 64;
    a[7] = 128;

    // Speicheradressen der Variablen mit dem Adressoperator & abfragen und mit %p ausgeben
    printf("n    hat die Adresse: %p\n", &n);
    printf("a[5] hat die Adresse: %p\n", &a[5]);
    printf("a[%i] hat die Adresse: %p\n", MAXLEN-1, &a[MAXLEN - 1]);
    printf("a    hat die Adresse: %p\n", a);
    printf("a[0] hat die Adresse: %p\n", &a[0]);

    printf("\nn = %i\n", n);

    return EXIT_SUCCESS;
} 