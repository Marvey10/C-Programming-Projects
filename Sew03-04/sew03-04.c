/*
    @author Marko Trajanovski
    @date 03.04.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ESC   27
#define RET   13
#define IND  -32
#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77

void drawImage(int x, int y);

int main() {
    
    system("CHCP 437"); 
    system("CLS");      

    int x = 2; // x Position der Spielfigur in der Spalte
    int y = 2; // y Poistion der Spielfigur in der Zeile

    char c;       // gedrückte Taste
    int quit = 0; // nicht aufhören

    while (!quit) {
        c = getch();
        switch (c) {
            case ESC:
                quit = 1;
                printf("\nDas Spiel wurde beendet!\n");
                break;    
            case IND:
                c = getch();
                switch (c) {
                    case UP:
                        y--;
                        break;
                    case DOWN:
                        y++;
                        break;
                    case LEFT:
                        x--;
                        break;
                    case RIGHT:
                        x++;
                        break;
                }

                break;
            default:
                break;       
        }

        drawImage(x,y);
    }

    return EXIT_SUCCESS;
}

void drawImage(int x, int y) {

    int row, col;

    system("CLS");
    printf("X = %i und Y = %i", x, y);

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            if ((row == y) && (col == x)) {
                printf("X");
            } else {
                printf("%i", 0);
            }
        }
    }
}