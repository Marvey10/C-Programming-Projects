/**
 * @file    aufgabe.c
 * @brief   Struct Aufgabe
 * @author  Marko Trajanovski
 * @date    2024-05-29
 *
 * powershell: cls; gcc aufgabe.c -o run.exe; .\run.exe
 */

#include <stdio.h>

typedef struct schueler {
    char Name[50];
    char Geschlecht;
    int Note;
}schuelerdaten;

int main() {
    schuelerdaten schueler[10];

    for (int i = 0; i < 10; i++) {
        printf("Geben Sie die %i. Name ein: ", i + 1);
        scanf("%s", schueler[i].Name);
        printf("Geben Sie das %i. Geschlecht ein (M/W): ", i + 1);
        scanf(" %c", &schueler[i].Geschlecht);
        printf("Geben Sie die %i. Durchschnittsnote ein: ", i + 1);
        scanf("%i", &schueler[i].Note);
    }

    printf("\nEingegebene Schuelerdaten:\n");
    for (int i = 0; i < 10; i++) {
        printf("Schueler %d:\n", i + 1);
        printf("Name: %s\n", schueler[i].Name);
        printf("Geschlecht: %c\n", schueler[i].Geschlecht);
        printf("Durchschnittsnote: %d\n", schueler[i].Note);
        printf("\n");
    }

    return 0;
}