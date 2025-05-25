/*
    @author Marko Trajanovski
    @date 20.12.2023
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    int j;
    printf("Geben Sie eine Zahl ein, bis zu der Sie alle geraden Ganzzahlen wissen wollen: ");
    scanf("%i", &j);

    for(i = 2; i <= j; i += 2) {
        printf("%i\n", i);
    }
}