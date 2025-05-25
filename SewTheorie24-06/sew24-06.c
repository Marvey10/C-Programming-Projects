/**
 * @file    sew24-06.c
 * @brief   STack- und Heap-Speicher im Detail
 * @author  Marko Trajanovski
 * @date    2024-06-24
 *
 * powershell: cls; gcc sew24-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct person {
    char* name;
    int alter;
};

typedef struct person person_t;

int main(int argc, char* argv[]) {
    /*
    // argc argument count
    // argv argument value
    if (argc > 1) {
        for (int i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }
    */
    
    setlocale(LC_ALL, "DE_de.UTF-8");
    printf("\33c");

    // Variablen im Stack anlegen
    int a;
    int b;
    char c[5] = {'H', 'a', 'l', 'l', 'o'};

    // Adressen der Variablen anzeigen
    printf("a:    %p\n", &a);
    printf("b:    %p\n", &b);
    for (int i = 4; i >= 0; i--) {
        printf("c[%i]: %p\n", i, &c[i]);
    }

    // Größe der Datenstruktur ausgeben
    printf("sizeof(person_t) = %i\n", sizeof(person_t));
    // Speicher für eine Person allokieren
    person_t* p1 = malloc(sizeof(person_t));
    if (NULL == p1) {
        printf("Fehler bei der Speicherallokierung!\n");
        return EXIT_FAILURE;
    }
    printf("sizeof(p1) = %i\n", sizeof(p1));
    p1->alter = 16;
    printf("sizeof(p1) = %i\n", sizeof(p1));
    // Speicher für den Namen allokieren
    p1->name = malloc(sizeof("Meier"));
    if (NULL == p1->name) {
        printf("Fehler bei der Speicherallokierung!\n");
        return EXIT_FAILURE;
    }

    strcpy(p1->name, "Meier");
    printf("sizeof(p1) = %i\n", sizeof(p1));

    // Adressen im Heap-Speicher ausgeben
    printf("p1:        %p\n", p1);
    printf("p1->alter: %p\n", &(p1->alter));
    printf("p1->name:  %p\n", &(p1->name));
    printf("p1-name:   %p\n", p1->name);

    return EXIT_SUCCESS;
}