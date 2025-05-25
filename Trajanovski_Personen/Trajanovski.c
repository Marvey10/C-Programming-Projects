/**
 * @file    sew19-06.c
 * @brief   Struct
 * @author  Marko Trajanovski
 * @date    2024-06-19
 *
 * powershell: cls; gcc sew19-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50  // Maximale Länge für Vorname und Nachname

// Struktur für eine Person
typedef struct {
    char vorname[MAX_LENGTH];
    char nachname[MAX_LENGTH];
    char geschlecht;  // 'm' für männlich, 'w' für weiblich
} Person;

// Funktionen zur Verwaltung der Personen
Person* personenEinlesen(const char* dateiname, int* anzahlPersonen);
void personenAusgeben(Person* personen, int anzahlPersonen);
void frauenAusgeben(Person* personen, int anzahlPersonen);
void maennerAusgeben(Person* personen, int anzahlPersonen);
void personSuchen(Person* personen, int anzahlPersonen, const char* gesuchterName);
void personenSpeicherFreigeben(Person* personen, int anzahlPersonen);

int main() {
    Person* allePersonen = NULL;
    int anzahlPersonen = 0;
    char wahl;
    char suchName[MAX_LENGTH];

    // Einlesen der Personen aus der CSV-Datei
    allePersonen = personenEinlesen("personen.csv", &anzahlPersonen);
    if (allePersonen == NULL) {
        printf("Fehler beim Einlesen der Datei.\n");
        return 1;
    }

    // Hauptmenü
    do {
        printf("\nWaehlen Sie eine Option:\n");
        printf("1. Ausgabe aller Personen\n");
        printf("2. Ausgabe aller Frauen\n");
        printf("3. Ausgabe aller Maenner\n");
        printf("4. Suche nach einem bestimmten Namen\n");
        printf("5. Beenden\n");
        printf("Ihre Wahl: ");
        scanf(" %c", &wahl);

        switch (wahl) {
            case '1':
                personenAusgeben(allePersonen, anzahlPersonen);
                break;
            case '2':
                frauenAusgeben(allePersonen, anzahlPersonen);
                break;
            case '3':
                maennerAusgeben(allePersonen, anzahlPersonen);
                break;
            case '4':
                printf("Geben Sie den gesuchten Namen ein: ");
                scanf(" %s", suchName);
                personSuchen(allePersonen, anzahlPersonen, suchName);
                break;
            case '5':
                printf("Programm wird beendet.\n");
                break;
            default:
                printf("Ungueltige Option. Bitte waehlen Sie erneut.\n");
        }
    } while (wahl != '5');

    // Speicher freigeben
    personenSpeicherFreigeben(allePersonen, anzahlPersonen);

    return 0;
}

// Funktion zum Einlesen der Personen aus der CSV-Datei
Person* personenEinlesen(const char* dateiname, int* anzahlPersonen) {
    FILE* datei = fopen(dateiname, "r");
    if (!datei) {
        perror("Fehler beim Öffnen der Datei");
        return NULL;
    }

    // Annahme: Anzahl der Personen wird dynamisch bestimmt
    Person* personen = NULL;
    int kapazitaet = 0;
    *anzahlPersonen = 0;

    // Zeilenweises Einlesen der CSV-Daten
    char zeile[MAX_LENGTH * 3 + 4];  // Platz für Vorname, Nachname, Geschlecht und Komma

    while (fgets(zeile, sizeof(zeile), datei)) {
        // Überprüfen, ob genügend Platz in personen-Array
        if (*anzahlPersonen >= kapazitaet) {
            kapazitaet = (kapazitaet == 0) ? 10 : kapazitaet * 2;  // Kapazität verdoppeln
            Person* temp = realloc(personen, kapazitaet * sizeof(Person));
            if (!temp) {
                perror("Speicher konnte nicht allokiert werden");
                fclose(datei);
                free(personen);
                return NULL;
            }
            personen = temp;
        }

        // Einlesen der Daten aus der Zeile
        if (sscanf(zeile, "%49[^,],%49[^,],%c\n", personen[*anzahlPersonen].vorname, personen[*anzahlPersonen].nachname, &personen[*anzahlPersonen].geschlecht) == 3) {
            (*anzahlPersonen)++;
        } else {
            fprintf(stderr, "Fehler beim Einlesen der Zeile: %s\n", zeile);
        }
    }

    fclose(datei);
    return personen;
}

// Funktion zur Ausgabe aller Personen
void personenAusgeben(Person* personen, int anzahlPersonen) {
    printf("\nAlle Personen:\n");
    for (int i = 0; i < anzahlPersonen; ++i) {
        printf("%s %s (%c)\n", personen[i].vorname, personen[i].nachname, personen[i].geschlecht);
    }
}

// Funktion zur Ausgabe aller Frauen
void frauenAusgeben(Person* personen, int anzahlPersonen) {
    printf("\nAlle Frauen:\n");
    for (int i = 0; i < anzahlPersonen; ++i) {
        if (personen[i].geschlecht == 'w') {
            printf("%s %s\n", personen[i].vorname, personen[i].nachname);
        }
    }
}

// Funktion zur Ausgabe aller Männer
void maennerAusgeben(Person* personen, int anzahlPersonen) {
    printf("\nAlle Maenner:\n");
    for (int i = 0; i < anzahlPersonen; ++i) {
        if (personen[i].geschlecht == 'm') {
            printf("%s %s\n", personen[i].vorname, personen[i].nachname);
        }
    }
}

// Funktion zur Suche nach einem bestimmten Namen
void personSuchen(Person* personen, int anzahlPersonen, const char* gesuchterName) {
    printf("\nSuche nach \"%s\":\n", gesuchterName);
    int gefunden = 0;
    for (int i = 0; i < anzahlPersonen; ++i) {
        if (strcmp(personen[i].vorname, gesuchterName) == 0 || strcmp(personen[i].nachname, gesuchterName) == 0) {
            printf("%s %s (%c)\n", personen[i].vorname, personen[i].nachname, personen[i].geschlecht);
            gefunden = 1;
        }
    }
    if (!gefunden) {
        printf("Keine Person mit dem Namen \"%s\" gefunden.\n", gesuchterName);
    }
}

// Funktion zum Freigeben des allokierten Speichers für die Personen
void personenSpeicherFreigeben(Person* personen, int anzahlPersonen) {
    free(personen);
}
