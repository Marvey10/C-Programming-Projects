#include <stdio.h>

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

// Funktionsimplementationen

/**
 * Setzt Insertion sort um
 * @param arr[] das zu soritierende Array
 * @param n     die Größe des zu sortierenden Arrays
 * @return      Erfolg oder Misserfolg
*/
int insertionsort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Verschiebe Elemente von arr[0..i-1], die größer als key sind,
           um eine Position nach rechts */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return 0; // Erfolg
}

/**
 * Gibt ein Ganzzahlenarray aus
 * @param arr[] das auszugebende Array
 * @param n     die Größe des auszugebenden Arrays
 * @return      Erfolg oder Misserfolg
*/
int printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; // Erfolg
}

#endif