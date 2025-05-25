/**
 *
 */

#include <stdio.h>
#include "insertionsort.h"

#ifndef INSERTIONSORT_TEST_H
#define INSERTIONSORT_TEST_H

int test1() {
    int arr[] = {1, 4, 2, 3};
    insertionsort(arr, 4);
    if (arr[0] != 1) {
        printf("Erstes Element falsch!\n");
        return 0;
    } else
    if (arr[1] != 2) {
        printf("Zweites Element falsch!\n");
        return 0;
    } else
    if (arr[2] != 3) {
        printf("Drittes Element falsch!\n");
        return 0;
    } else
    if (arr[3] != 4) {
        printf("Viertes Element falsch!\n");
        return 0;
    }
    return 1;
}

#endif