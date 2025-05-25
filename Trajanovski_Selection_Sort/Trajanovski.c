/*
    @autor Marko Trajanovski
    @datum 22.04.2024
*/

#include <stdio.h>
#include <stdlib.h>

void minsort(int list[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (list[j] < list[min_idx]) {
                min_idx = j;
            }
        }
        int temp = list[min_idx];
        list[min_idx] = list[i];
        list[i] = temp;
    }
}

void maxsort(int list[], int n) {
    int i, j, max_idx;
    for (i = 0; i < n - 1; i++) {
        max_idx = i;
        for (j = i + 1; j < n; j++) {
            if (list[j] > list[max_idx]) {
                max_idx = j;
            }
        }
        int temp = list[max_idx];
        list[max_idx] = list[i];
        list[i] = temp;
    }
}

int main() {
    printf("\nSortieren von Zahlen:\n");
    int list[5] = { 5, 3, 1, 4, 2 };
    int n = sizeof(list) / sizeof(list[0]);
    
    printf("Liste der Zahlen vor dem Sortieren: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    minsort(list, n);

    printf("Liste der Zahlen nach dem Sortieren: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
