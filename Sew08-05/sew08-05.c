/**
 * @file    sew08-05.c
 * @brief   Insertionsort
 * @author  Marko Trajanovski
 * @date    2024-05-08
 *
 * powershell: cls; gcc sew08-05.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include "insertionsort.h"
#include "insertionsort_test.h"

#define N 6
#define TESTIT 0

int main() {
    int arr[N] = {6, 8, 1, 7, 4, 2};

    // Einen der Tests ausführen
    if (TESTIT) {
        if (test1()) {
            printf("Test1: Erfolgreich\n");
        } else {
            printf("Test1: Nicht Erfolgreich\n");
        }
    }
    
    insertionsort(arr, N);
    printArray(arr, N);

    return EXIT_SUCCESS;
}