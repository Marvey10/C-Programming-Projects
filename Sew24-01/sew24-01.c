/*
    @author Marko Trajanovski
    @date 24.01.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    char antwort;
    int x;
    int v = 1;
    int n = 7;

    printf("-----------\n");
    printf("Zahlenraten\n");
    printf("-----------\n");
    printf("Bitte erraten Sie eine Zahl x von 1 bis 10\n");

    do {
        
        printf("%i. Versuch\n", v);
        printf("x = ");
        scanf("%i", &x);
        if (x != 7) {
            printf("Diese Zahl war falsch, bitte raten Sie erneut.\n");
            printf("\n");
            
        } else if(x == 7) {
            printf("Diese Zahl war richtig!\n");
            printf("Sie haben %i Versuche benoetigt.\n", v);
            break;
        }

        v++;
        switch (antwort)
        {
        case 'J':
            return main();
 
        default:
            break;
        }
        

    } while (antwort = 'N');

    return 0;

}