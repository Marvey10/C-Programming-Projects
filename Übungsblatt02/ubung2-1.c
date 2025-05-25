#include <stdio.h>

int main() {

    printf("4.907 = %.2f\n", 4.907);
    printf("86.51 = %09.3f\n", 86.51);
    printf("2015 = %010d\n", 2015);
    printf("65 = %c\n", 65);
    printf("65 = %c\n", 'A');
    printf("64 = %o\n", 64);
    printf("64 = %x\n", 64);
    printf("1024 = %#o = %#x\n", 1024, 1024);
    return 0;
}