/*
    @author Marko Trajanovski
    @date 17.01.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int n, m, sum;
    int randomNumbers[10];

    printf("---------------------------------\n");
    printf("Mittelwert und Standardabweichung\n");
    printf("---------------------------------\n");
    printf("Wie viele Zufallszahlen sollen erzeugt werden?\n");
    printf("n = ");
    scanf("%i", &n);
    printf("\n");
    printf("Die Zufallszahlen lauten:\n");
    for (int i = 0; i < n; ++i) {
        randomNumbers[i] = rand() % 99 + 1;
        printf(" %d ", randomNumbers[i]);
        sum += randomNumbers[i];
    }
 
    printf("\n");
    printf("\n");

    m = sum / n;
    printf("Mittelwert m = %.2f", m);
 
    printf("\n");

    int v =
    printf("Varianz v = ");

    printf("\n");

    int s =  
    printf("Standardabweichung s =");
 
    return 0;

}