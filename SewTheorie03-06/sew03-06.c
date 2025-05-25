/**
 * @file    sew03-06.c
 * @brief   Testen von Software (Funktionen)
 * @author  Marko Trajanovski
 * @date    2024-06-03
 *
 * powershell: cls; gcc sew03-06.c -o run.exe; .\run.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult (int a, int b);
int test_mult1();
int test_mult2();
int test_mult3();
void print_test();

int main() {

    print_test(test_mult1());
    test_mult2();
    test_mult3();

    return EXIT_SUCCESS;
}

int mult(int a, int b) {
    return a*b;
}

int test_mult1() {
    if (mult(2, 3) == 6) {
        return 1;
    } else {
        return 0;
    }
}

int test_mult2() {
    if (mult(1, 3) == 6) {
        return 1;
    } else {
        return 0;
    }
}

int test_mult() {
    if (mult(0, 3) == 6) {
        return 1;
    } else {
        return 0;
    }
}

void print_test(int result) {
    if (result == 1) {
        printf("Der Test war erfolgreich!\n");
    } else {
        printf("Der Test war NICHT erfolgreich!\n");
    }
}