#include <stdio.h>
#include <stdlib.h>

void minsort (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        int temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
}

void maxsort (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_idx]) {
                max_idx = j;
            }
        }
        int temp = a[max_idx];
        a[max_idx] = a[i];
        a[i] = temp;
    }
}

void selectionsort (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        int temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
}

void bubblesort (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void insertionsort (int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main() {
    int a[] = {2, 5, 7, 3, 1, 4, 6, 8, 10, 9};
    int n = 10;

    insertionsort(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

}