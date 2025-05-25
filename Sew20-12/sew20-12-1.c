/*
    @author Marko Trajanovski
    @date 20.12.2023
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    int j = 10;
    printf("Gib eine Zahl ein:");
    scanf("%i", &j);

    for(i = 0; i<=j; i++) {
            printf("%i\n", i);
    }
}