/*
    @author Marko Trajanovski
    @date 31.01.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "DE_de.UTF-8");
    printf("\33c");

    printf("Bitte geben Sie eine positive Zahl ein:\n");
    int i = 1, x;

    do {

        printf("%i Versuch: x = ", i++);
        scanf("%i", &x);
    
    } while(x != 8);

    printf("Sie haben die gesuchte Zahl gefunden!\n");

    return EXIT_SUCCESS;

}