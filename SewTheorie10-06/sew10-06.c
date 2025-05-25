/**
 * @file    sew10-06.c
 * @brief   Testen von Software (Funktionen)
 * @author  Marko Trajanovski
 * @date    2024-06-10
 *
 * powershell: cls; gcc sew10-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXLEN 10

struct point {
    int x;
    int y;
};


int main() {
    setlocale(LC_ALL, "UTF-8.DE.de");
    printf("\33c");
    
    int n; // Nimmt die Anzahl an Integerwerten auf
    printf("Bitte geben Sie die Anzahl der gewünschten Zahlen ein:\n");
    printf("n = ");
    scanf("%i", &n);

    // Allokieren eines Speicherbereichs für Integerwerte
    int* adresse_des_reservierten_speichers = NULL;
    adresse_des_reservierten_speichers = malloc(n*sizeof(int));
    if (NULL == adresse_des_reservierten_speichers) {
        printf("Konnte keinen Speicher allokieren!\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        *(adresse_des_reservierten_speichers+i) = i;
        printf("Adresse: %i: %p\n", i, adresse_des_reservierten_speichers+i);
    }

    // Deklarieren von 10 Punkten in einem Punktarray
    point_t punkte[MAXLEN];
    for (int i = 0; i < MAXLEN; i++) {
        punkte[i].x = i;
        punkte[i].y = i*2;
    }

    for (int i = 0; i < MAXLEN; i++) {
        printf("Adresse von Punkt %i: %p\n", i, &punkte[i]); // punkte+i
    }

    // Allokieren eines Speicherbereichs für Punkte
    point_t* adresse_der_punkte = NULL;
    adresse_der_punkte = realloc(adresse_der_punkte, n*sizeof(point_t));
    if (NULL ==  adresse_der_punkte) {
        printf("Konnte keinen Speicher allokieren!\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        (adresse_der_punkte+i)->x = i;
        (adresse_der_punkte+i)->y = i*2;
        printf("Adresse von Punkt %i: %p\n", i, adresse_der_punkte+i);
    }

    free(adresse_des_reservierten_speichers);
    realloc(adresse_der_punkte, 0);

    return EXIT_SUCCESS;
}