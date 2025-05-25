/**
 * @file    sew17-06.c
 * @brief   Zeiger in structs
 * @author  Marko Trajanovski
 * @date    2024-06-17
 *
 * powershell: cls; gcc sew17-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXLEN 1024

struct auto1 {
    char hersteller[MAXLEN];
    int baujahr;
};

struct auto2 {
    char* hersteller;
    int baujahr;
};

typedef struct auto1 auto1_t;
typedef struct auto2 auto2_t;

int main() {
    setlocale(LC_ALL, "DE_de.UTF-8");
    printf("\33c");

    auto1_t car1; // Diese Variable ist im Stack zu Hause
    car1.baujahr = 2017;
    strncpy(car1.hersteller, "Toyota", MAXLEN-1); // Sichere Variante des Kopieren
    printf("Auti 1:\n");
    printf("Baujahr: %i\n", car1.baujahr);
    printf("Hersteller: %s\n", car1.hersteller);

    auto2_t car2;        // Diese Variable ist im Stack zu Hause
    car2.hersteller = 2009;
    char tmp[] = "Fiat"; // Diese Variable ist im Stack zu Hause
    int n = strlen(tmp) + 1; // Länge des Herstellernamens plus Terminierungssymbol
    car2.hersteller = malloc(n*sizeof(char)); // Diese Variable ist im Heap zu Hause
    if (NULL == car2.hersteller) {
        printf("Fehler bei der Speicherallokierung!\n");
        return EXIT_FAILURE;
    }
    strncpy(car2.hersteller, tmp, n); // Sichere Variante des Kopierens

    return EXIT_SUCCESS;
}