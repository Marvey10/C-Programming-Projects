/*
    @author Marko Trajanovski
    @date 31.01.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ROW 3
#define COL 4

int main() {

    setlocale(LC_ALL, "DE_de.UTF-8");
    printf("\33c");

    char bild[ROW][COL] = {
        { 'X', 'X', 'X', 'X' },
        { 'X', ' ', ' ', 'X' },
        { 'X', 'X', 'X', 'X' } 
    };

    for (int row = 0; row < ROW; row++) {
        for(int col = 0; col < COL; col++) {
            printf("%c", bild[row][col]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;

}