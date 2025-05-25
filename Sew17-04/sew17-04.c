/*
    @autor Marko Trajanovski
    @datum 10.04.2024
*/

#include <stdio.h>
/*
void selectionsort(int array[], int n) {

    int index = 0;
    int temp;

    for(int j = 0; j < n; j++) {
        index = j;
        for(int i = j + 1; i < n; i++) {
            if (array[index] > array[i]) {
                index = i;
            }
        }

        temp = array[j];
        array[j] = array[index];
        array[index] = temp;

    }

    printf("Index %d kleinste Zahl: %d\n", index, array[index]);

}
*/
void bubblesort(int array[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {

    int array[] = {3, 5, 4, 1, 6, 2, 9, 8};
    int n = sizeof(array)/sizeof(array[0]);

    bubblesort(array, n);

    for (int i = 0; i < n; ++i) {
        printf("%d\n", array[i]);
    }

}