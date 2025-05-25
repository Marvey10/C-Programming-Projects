/*
    @autor Marko Trajanovski
    @datum 10.04.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int stringcmp(char text[], char text2[]);

int stringcpy(char text[], char text2[]);

int main() {

    char text[] = "Hallo";
    char text2[] = "Hallo";

    int c = strcmp(text, text2);

}

int stringcmp(char text[], char text2[]) {

    if (strlen(text) == strlen(text2)) {
        for (int i = 0; text[i] != '\0'; i++) {
            if (text[i] != text2[i]) {
                return -1;
            }
        }
    } else {
        return -1;
    }

    return 1;

}

int stringcpy(char text[], char text2[]) {

    int len = strlen(text);

    for (int i = 0; i < len+1; i++) {
        text[i] = text2[i];
    }

    return 0;

}