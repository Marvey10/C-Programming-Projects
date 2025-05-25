/*
    @author Marko Trajanovski
    @date 21.02.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

char spielfeld[3][3];
int zugzaehler = 0;

void initialisieren();
void anzeigen();
char gewinner_pruefen();
void spieler_zug(char spieler);
void computer_zug(char spieler);


int main() {
    int modus;
    char wiederholen;
    srand(time(NULL));

    printf("-----------\n");
    printf("Tic Tac Toe\n");
    printf("-----------\n");
    printf("Welchen Modus waehlen Sie:\n");
    printf("[1] Zwei Spieler\n");
    printf("[2] Computer\n");
    printf("Modus = ");
    scanf("%d", &modus);

    do {
        initialisieren();
        zugzaehler = 0;
        char aktueller_spieler = 'X';
        bool spiel_beendet = false;

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
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            spielfeld[i][j] = ' ';
        }
    }
}

void anzeigen() {
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", spielfeld[i][0], spielfeld[i][1], spielfeld[i][2]);
        if (i < 2)
            printf("---|---|---\n");
    }
}

char gewinner_pruefen() {
    for(int i = 0; i < 3; i++) {
        if(spielfeld[i][0] == spielfeld[i][1] && spielfeld[i][1] == spielfeld[i][2] && spielfeld[i][0] != ' ')
            return spielfeld[i][0];
    }

    for(int i = 0; i < 3; i++) {
        if(spielfeld[0][i] == spielfeld[1][i] && spielfeld[1][i] == spielfeld[2][i] && spielfeld[0][i] != ' ')
            return spielfeld[0][i];
    }

    if(spielfeld[0][0] == spielfeld[1][1] && spielfeld[1][1] == spielfeld[2][2] && spielfeld[0][0] != ' ')
        return spielfeld[0][0];
    if(spielfeld[0][2] == spielfeld[1][1] && spielfeld[1][1] == spielfeld[2][0] && spielfeld[0][2] != ' ')
        return spielfeld[0][2];

    if(zugzaehler == 9)
        return 'D';

    return ' ';
}

void spieler_zug(char spieler) {
    int zeile, spalte;
    do {
        printf("%c: ", spieler);
        scanf("%d, %d", &zeile, &spalte);
        zeile--; spalte--;
    } while (zeile < 0 || zeile >= 3 || spalte < 0 || spalte >= 3 || spielfeld[zeile][spalte] != ' ');
    spielfeld[zeile][spalte] = spieler;
}

void computer_zug(char spieler) {
    int zeile, spalte;
    do {
        zeile = rand() % 3;
        spalte = rand() % 3;
    } while (spielfeld[zeile][spalte] != ' ');
    spielfeld[zeile][spalte] = spieler;
}