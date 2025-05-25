/*
    @author Marko Trajanovski
    @date 20.12.2023
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    int j;
    int r;
    
    printf("Bitte Zahl raten: ");
    scanf("%i", &r);
    
    for(i=0; j=20; i<=r && r<=j) {
        if(r==10) {
            printf("Richtig geraten!");
            break;
        }
        else if(r<10) {
            printf("Die gesuchte Nummer ist kleiner\n");
            printf("Bitte Zahl raten: ");
            scanf("%i", &r);
        }
        else if(r>10) {
            printf("Die gesuchte Nummer ist groesser\n");
            printf("Bitte Zahl raten: ");
            scanf("%i", &r);
        }
    }
}
