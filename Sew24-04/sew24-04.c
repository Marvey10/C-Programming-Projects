/**
 * @file    sew24-04.c
 * @brief   Bubble Sort
 * @author  Marko Trajanovski
 * @date    2024-04-24
 *
 * powershell: cls; gcc sew24-04.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int randi(int a, int b);
int randa(int a[], int n, int min, int b);
int minsort(int a[], int n);
int bubblesort(int a[], int n);

int main() {

    // 1. Zufallsgenerator seeden
    // 2. randi programmieren, erzeugt Zufallszahlen von a bis b
    // 3. Mit Hilfe von randi die Funktion randa programmieren, erzeugt ein Zufallszahlenarray der Größe n
    // 4. Die Funktion bubblesort programmieren, sortiert das Zufallszahlenarray nach dem Bubblesort Algorithmus
    // 5. Die Funktion minsort hineinkopieren
    // 6. Alles in eine Bibliothek sorting.h auslagern.
    // 7. Zukunft: Zeitnehmun der Algorithmen und Bewertung

    srand(time(NULL)); // Initialisiere den Zufallsgenerator mit der aktuellen Zeit

    int n = 10; // Größe des Arrays
    int arr[n]; // Array initialisieren

    randa(arr, n, 1, 100); // Array mit Zufallszahlen füllen
    printf("Urspruengliches Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubblesort(arr, n); // Array sortieren
    printf("Sortiertes Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;

}

// Funktion zur Generierung einer Zufallszahl im Bereich von a bis b
int randi(int a, int b) {
    return rand() % (b - a + 1) + a;
}

// Funktion zum Befüllen eines Arrays mit Zufallszahlen
int randa(int a[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        a[i] = randi(min, max);
    }
    return 0; // Rückgabe 0 bei Erfolg
}

// Funktion zum Sortieren eines Arrays mit dem Bubblesort-Algorithmus
int bubblesort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Vertausche a[j] und a[j+1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0; // Rückgabe 0 bei Erfolg
}