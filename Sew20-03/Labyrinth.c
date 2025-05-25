/*
    @autor Marko Trajanovski
    @datum 20.03.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_ROWS 20
#define MAX_COLS 20
#define ESC      27
#define RET      13
#define IND     -32
#define UP       72
#define DOWN     80
#define LEFT     75
#define RIGHT    77

// Spielfeld als 2D-Array
char labyrinth[MAX_ROWS][MAX_COLS];
int rows, cols; // Dimensionen des Labyrinths

// Position der Spielfigur
int spielerZeile, spielerSpalte;

// Funktionen für die Labyrinthoperationen

// Labyrinth aus Datei laden
void labyrinthLaden(const char *dateiname) {
    FILE *datei = fopen(dateiname, "r");
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        exit(1);
    }

    fscanf(datei, "%d %d\n", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        fgets(labyrinth[i], MAX_COLS, datei);
    }

    fclose(datei);
}

// Spielfeld anzeigen
void labyrinthAnzeigen() {
    system("cls"); // Bildschirm löschen (für Windows)

    printf("\n---------\nLabyrinth\n---------\n");
    for (int i = 0; i < rows; i++) {
        printf("%s", labyrinth[i]);
    }
    printf("\n");
}

// Spiel initialisieren
void spielInitialisieren() {
    labyrinthLaden("labyrinth.txt"); // Dateiname des Labyrinths anpassen

    // Startposition der Spielfigur finden
    int gefunden = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (labyrinth[i][j] == 'X') {
                spielerZeile = i;
                spielerSpalte = j;
                gefunden = 1;
                break;
            }
        }
        if (gefunden)
            break;
    }

    if (!gefunden) {
        // Fehlermeldung, wenn keine Startposition gefunden wurde
        printf("Keine Startposition des Spielers gefunden!\n");
        exit(1);
    }
}

// Spiellogik für die Bewegung der Spielfigur
void spielerBewegen(int zeilenVersatz, int spaltenVersatz) {
    int neueZeile = spielerZeile + zeilenVersatz;
    int neueSpalte = spielerSpalte + spaltenVersatz;

    // Gültigkeit der neuen Position prüfen
    if (neueZeile >= 0 && neueZeile < rows && neueSpalte >= 0 && neueSpalte < cols && labyrinth[neueZeile][neueSpalte] != '#') {
        // Alte Position des Spielers freigeben
        labyrinth[spielerZeile][spielerSpalte] = ' ';

        // Spielerfigur an die neue Position verschieben
        spielerZeile = neueZeile;
        spielerSpalte = neueSpalte;

        // Neue Position des Spielers markieren
        labyrinth[spielerZeile][spielerSpalte] = 'X';
    }
}

// Hauptfunktion
int main() {
    char auswahl;

    do {
        spielInitialisieren();

        while (1) {
            labyrinthAnzeigen();

            // Benutzereingabe für Bewegung
            char bewegung = _getch();
            switch (bewegung) {
                case UP:
                    spielerBewegen(-1, 0);
                    break;
                case DOWN:
                    spielerBewegen(1, 0);
                    break;
                case LEFT:
                    spielerBewegen(0, -1);
                    break;
                case RIGHT:
                    spielerBewegen(0, 1);
                    break;
            }

            // Spiel beenden, wenn der Ausgang erreicht ist
            if (labyrinth[spielerZeile][spielerSpalte] == 'E') {
                printf("\nHerzlichen Gl\x81""ckwunsch! Sie haben den Ausgang erreicht!\n");
                break;
            }
        }

        printf("\nWollen Sie noch einmal spielen? [J/N]: ");
        scanf(" %c", &auswahl);
        getchar(); // Leerzeichen im Puffer verbrauchen
    } while (auswahl == 'j' || auswahl == 'J');

    return 0;
}