/**
 * @file    sew12-06.c
 * @brief   Foo
 * @author  Marko Trajanovski
 * @date    2024-06-12
 *
 * powershell: cls; gcc sew12-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
    char* vorname;
    char* nachname;
    int alter;
}personen;

void zalter(personen* foo);

int main() {
    
    personen* foo = NULL;

    foo = malloc(1*sizeof(personen));

    foo->vorname = malloc(15*sizeof(char));

    strcpy(foo->vorname, "Manfred");

    foo->nachname = malloc(15*sizeof(char));

    strcpy(foo->nachname, "Mueller");

    printf("Vorname: %s, Nachname: %s", foo->vorname, foo->nachname);

    foo = realloc(foo, 2*sizeof(personen));

    foo[1].vorname = malloc(10*sizeof(char));

    strcpy(foo[1].vorname, "Hugo");

    foo[1].nachname = malloc(10*sizeof(char));
    
    strcpy(foo[1].nachname, "Hugo");

    // printf("\nVorname: %s, Nachname: %s", foo[1].vorname, foo[1].nachname);

    printf("\nVorname: %s, Nachname: %s", foo->vorname, foo->nachname);

    zalter(foo);

    printf("\n Alter: ", foo->alter);

    free(foo);

    return EXIT_SUCCESS;
}

void zalter(personen*foo) {

    foo->alter = 10;
}