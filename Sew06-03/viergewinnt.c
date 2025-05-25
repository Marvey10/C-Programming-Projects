/*
    @author Marko Trajanovski
    @date 06.03.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

char spielfeld[6][7];
int zugzaehler = 0;

void initialisieren();
void anzeigen();
char gewinner_pruefen();
void spieler_zug(char spieler);
void computer_zug(char spieler);

int main() {
    char wiederholen;
    srand(time(NULL));

    printf("-----------\n");
    printf("Vier Gewinnt\n");
    printf("-----------\n");

    do {
        initialisieren();
        zugzaehler = 0;
        int modus;
        char aktueller_spieler = 'X';
        bool spiel_beendet = false;

        printf("Welchen Modus w\x84hlen Sie:\n");
        printf("[1] Zwei Spieler\n");
        printf("[2] Computer\n");
        printf("Modus = ");
        scanf("%d", &modus);

        while(modus != 1 && modus != 2) {
            printf("Ung\x81ltiger Modus. Bitte geben Sie 1 oder 2 ein: ");
            scanf("%d", &modus);
        }

        while(!spiel_beendet) {
            anzeigen();
            if(modus == 1 || aktueller_spieler == 'X') {
                spieler_zug(aktueller_spieler);
            } else {
                computer_zug(aktueller_spieler);
            }
            zugzaehler++;
            char gewinner = gewinner_pruefen();
            if(gewinner != ' ') {
                anzeigen();
                if(gewinner == 'D')
                    printf("Das Spiel endet unentschieden!\n");
                else
                    printf("Spieler %c hat gewonnen!\n", gewinner);
                spiel_beendet = true;
            } else {
                aktueller_spieler = (aktueller_spieler == 'X') ? 'O' : 'X';
            }
        }

        printf("Wollen Sie noch einmal spielen? [J/N] ");
        scanf(" %c", &wiederholen);
    } while(wiederholen == 'J' || wiederholen == 'j');

    return 0;
}

void initialisieren() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            spielfeld[i][j] = ' ';
        }
    }
}

void anzeigen() {
    printf("\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            printf("| %c ", spielfeld[i][j]);
        }
        printf("|\n");
    }
    printf("-----------------------------\n");
}

char gewinner_pruefen() {
    // Horizontale Überprüfung
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            if(spielfeld[i][j] == spielfeld[i][j+1] && 
               spielfeld[i][j+1] == spielfeld[i][j+2] && 
               spielfeld[i][j+2] == spielfeld[i][j+3] && 
               spielfeld[i][j] != ' ')
                return spielfeld[i][j];
        }
    }

    // Vertikale Überprüfung
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 7; j++) {
            if(spielfeld[i][j] == spielfeld[i+1][j] && 
               spielfeld[i+1][j] == spielfeld[i+2][j] && 
               spielfeld[i+2][j] == spielfeld[i+3][j] && 
               spielfeld[i][j] != ' ')
                return spielfeld[i][j];
        }
    }

    // Diagonale (von links oben nach rechts unten) Überprüfung
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(spielfeld[i][j] == spielfeld[i+1][j+1] && 
               spielfeld[i+1][j+1] == spielfeld[i+2][j+2] && 
               spielfeld[i+2][j+2] == spielfeld[i+3][j+3] && 
               spielfeld[i][j] != ' ')
                return spielfeld[i][j];
        }
    }

    // Diagonale (von rechts oben nach links unten) Überprüfung
    for(int i = 0; i < 3; i++) {
        for(int j = 3; j < 7; j++) {
            if(spielfeld[i][j] == spielfeld[i+1][j-1] && 
               spielfeld[i+1][j-1] == spielfeld[i+2][j-2] && 
               spielfeld[i+2][j-2] == spielfeld[i+3][j-3] && 
               spielfeld[i][j] != ' ')
                return spielfeld[i][j];
        }
    }

    if(zugzaehler == 42)
        return 'D';

    return ' ';
}

void spieler_zug(char spieler) {
    int spalte;
    do {
        printf("%c: In welche Spalte m\x94""chten Sie setzen? (1-7) ", spieler);
        scanf("%d", &spalte);
        spalte--;
    } while (spalte < 0 || spalte >= 7 || spielfeld[0][spalte] != ' ');
    
    // Finde die niedrigste leere Position in der Spalte
    int zeile = 5;
    while (spielfeld[zeile][spalte] != ' ' && zeile >= 0)
        zeile--;
    
    spielfeld[zeile][spalte] = spieler;
}

void computer_zug(char spieler) {
    // Zuerst prüfen, ob der Computer einen Zug machen kann, um zu gewinnen
    for(int spalte = 0; spalte < 7; spalte++) {
        int zeile = 5;
        while (spielfeld[zeile][spalte] != ' ' && zeile >= 0)
            zeile--;
        
        if (zeile >= 0) {
            spielfeld[zeile][spalte] = spieler;
            if (gewinner_pruefen() == spieler)
                return; // Wenn der Computer gewinnt, ist der Zug abgeschlossen
            spielfeld[zeile][spalte] = ' '; // Zurücksetzen für den nächsten Versuch
        }
    }

    // Dann prüfen, ob der Gegner im nächsten Zug gewinnen kann und hindere ihn daran
    char gegner = (spieler == 'X') ? 'O' : 'X';
    for(int spalte = 0; spalte < 7; spalte++) {
        int zeile = 5;
        while (spielfeld[zeile][spalte] != ' ' && zeile >= 0)
            zeile--;
        
        if (zeile >= 0) {
            spielfeld[zeile][spalte] = gegner;
            if (gewinner_pruefen() == gegner) {
                spielfeld[zeile][spalte] = spieler; // Hindere den Gegner daran zu gewinnen
                return; // Zug abgeschlossen
            }
            spielfeld[zeile][spalte] = ' '; // Zurücksetzen für den nächsten Versuch
        }
    }

    // Wenn weder der Computer noch der Gegner im nächsten Zug gewinnen können, mache einen zufälligen Zug
    int spalte;
    do {
        spalte = rand() % 7;
    } while (spielfeld[0][spalte] != ' ');

    int zeile = 5;
    while (spielfeld[zeile][spalte] != ' ' && zeile >= 0)
        zeile--;
    
    spielfeld[zeile][spalte] = spieler;
}