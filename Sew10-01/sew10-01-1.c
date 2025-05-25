/*
    @author Marko Trajanovski
    @date 10.01.2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[20];

    a[0] = 1;
    a[1] = 1;

    for(int i = 0; i < 18; i++) {
        a[i+2] = a[i+1] + a[i];
    }

    for(int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    return EXIT_SUCCESS;
    
}