/*
    @author Marko Trajanovski
    @date 21.02.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define WIDTH 20
#define HEIGHT 10

#define cls() printf("\33c")
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

int main() {

    setlocale(LC_ALL, "DE_de.UTF-8");
    cls();
    printf("Bitte geben Sie eine Zahl ein:\n");
    gotoxy(4, 3);
    printf("500");
    gotoxy(2, 5);
    printf("400");
    gotoxy(WIDTH, HEIGHT);

    return EXIT_SUCCESS;

}