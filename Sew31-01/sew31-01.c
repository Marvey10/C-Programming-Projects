/*
    @author Marko Trajanovski
    @date 31.01.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 10

int main() {

    setlocale(LC_ALL, "DE_de.UTF-8");
    printf("\33c");

    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++); {
                printf("X");
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for(int j = N; j > i; j--); {
                printf("X");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;

}