#include <stdio.h>

int main() {

    printf(" %d %d \n", 10, 9); // %d ist Platzhalter und steht für Ganzzahlen
    printf("%.5f \n", 1.234567);
    printf("%c \n", 'A');
    printf("%c = %10d = %#x \n", 'A', 'A', 'A');
    printf("%d \n%09d \n", 123456789, 9);
    printf("%o \n", 'A');
    printf("%s \n", "Der Text");
    printf("%d \n%0*d \n", 123456789, 9, 9);
    return 0;
}