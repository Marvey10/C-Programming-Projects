/**
 * @file    test.c
 * @brief   Test Bubble Sort
 * @author  Marko Trajanovski
 * @date    2024-05-06
 *
 * powershell: cls; gcc test.c -o run.exe; .\run.exe
 **/

#include "sorting.h"
#define N 100
int main() {
   // bubblesort 
   int a[N];
   randa(a, N, 1, 10);
   printa(a, N);
   bubblesort(a, N);
   printa(a, N);
   // minsort
   int b[N]; 
   randa(b, N, 1, 10);
   printa(b, N);
   minsort(b, N);
   printa(b, N);
   return EXIT_SUCCESS;
}