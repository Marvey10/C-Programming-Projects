/**
 * @file    sew05-06.c
 * @brief   Foo
 * @author  Marko Trajanovski
 * @date    2024-06-05
 *
 * powershell: cls; gcc sew05-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int zahl1;
    int zahl2;
    int erg;
}zahlen;

int add(int zahl1, int zahl2, int* ergebnis);
void addieren(zahlen* Zahl1);

int main() {

    zahlen* Zahl;

    Zahl1 = (zahlen*)malloc(sizeof(zahlen));

    Zahl1 -> zahl1 = 5;
    Zahl1 -> zahl2 = 2;

    addieren(Zahl1);

    printf("%i und %i ist %i", Zahl1 -> zahl1, Zahl2 -> zahl2, Zahl1 -> erg);

    /*
    int foo = 5;

    int *foo2;

    foo2 = (int*)malloc(10*sizeof(int));

    if(NULL == foo2) {
        printf("\n Kein Speicher zugewiesen");
        return EXIT_FAILURE;
    }

    for(int i = 0; i < 10; i++) {
        foo2[i] = i;
    }

    for(int i = 0; i < 10; i++) {
        printf("\n %i", *(foo2 + i));
    }    

    foo2 = (int*)realloc(foo2, 15*sizeof(int));

    if(NULL == foo2) {
        printf("\n Kein Speicher zugewiesen");
        return EXIT_FAILURE;
    }

    for(int i = 10; i < 15; i++) {
        foo2[i] = i;
    }

    for(int i = 0; i < 15; i++) {
        printf("\n %i", *(foo2 + i));
    }    

    free(foo2);
    
    int ergebnis = 0;
    int Zahl1 = 2;
    int Zahl2 = 3;

    add(Zahl1, Zahl2, &ergebnis);
    */

    return EXIT_SUCCESS;

}

int add(int zahl1, int zahl2, int* ergebnis) {
    *ergebnis = zahl1 + zahl2;
    return 1;
}

void addieren(zahlen* Zahl1) {
    Zahl1 -> erg = Zahl1 -> zahl1 + Zahl2 -> zahl2;
}
