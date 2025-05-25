/**
 * @file    sorting.h
 * @brief   Sorting
 * @author  Marko Trajanovski
 * @date    2024-05-06
 **/

#ifndef SORTING_H
#define SORTING_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funktion zum Seed des Zufallsgenerators
void seed_random_generator() {
    srand(time(NULL)); // Seed basierend auf der aktuellen Zeit setzen
}

// Funktion randi: Erzeugt ganzzahlige Zufallszahlen von a bis b
int randi(int a, int b) {
    return rand() % (b - a + 1) + a; // Zufallszahl im Bereich [a, b] generieren
}

// Funktion randa: Erzeugt ein Zufallszahlenarray der Größe n mit ganzzahligen Zufallszahlen von a bis b
void randa(int *array, int n, int a, int b) {
    for (int i = 0; i < n; i++) {
        array[i] = randi(a, b); // Jedes Element des Arrays mit einer Zufallszahl initialisieren
    }
}

// Funktion printa: Gibt ganzzahlige Arrays der Größe n aus
void printa(int *array, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]); // Element ausgeben
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Funktion bubblesort: Sortiert das Zufallszahlenarray nach dem Bubblesort Algorithmus
void bubblesort(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) { // Wenn das aktuelle Element größer ist als das nächste
                // Tausche array[j] und array[j+1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Funktion minsort: Sortiert das Zufallszahlenarray nach dem Selectionsort Algorithmus
void minsort(int *array, int n) {
    int min_index;
    for (int i = 0; i < n - 1; i++) {
        min_index = i; // Annahme: das aktuelle Element ist das Minimum
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) { // Wenn ein kleineres Element gefunden wird
                min_index = j; // Index des kleineren Elements aktualisieren
            }
        }
        // Tausche array[i] und array[min_index]
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

#endif // SORTING_H