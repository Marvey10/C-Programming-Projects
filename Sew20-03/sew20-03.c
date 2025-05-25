/*
    @author Marko Trajanovski
    @date 20.03.2024
*/

#include <stdio.h>
#include <stdlib.h>

#define true 1

int main() {
    
    FILE *foo;
    foo = fopen("meineText.txt", "w+");
    fprintf(foo, "Das ist ein Text");
    fclose(foo);

    foo = fopen("meineText.txt", "a");
    fprintf(foo, ", zusatz Text");
    fclose(foo);

    foo = fopen("meineText.txt", "r");
    char c;
    while(true) {
        c = fgetc(foo);
        if(feof(foo)) break;
        printf("%c", c);
    }

    fclose(foo);

}