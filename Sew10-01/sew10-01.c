/*
    @author Marko Trajanovski
    @date 10.01.2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x[3];

    x[0] = 1;
    x[1] = 2;
    x[2] = 3;

    int y[] = {1, 2, 3};

    printf("Ausgabe = %i", x[y[0]]);

}