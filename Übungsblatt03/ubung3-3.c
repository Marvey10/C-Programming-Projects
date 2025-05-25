#include <stdio.h>
#include <stdlib.h>

int main() {

    system("CLS");
    printf("Umlaute und Sonderzeichen:\n");
    printf("Zeichen\tDezimal\tHexadezimal\n");
    printf("\x84\t%d\tx%x\n", 132, 132);
    printf("\x94\t%d\tx%x\n", 148, 148);
    printf("\x81\t%d\tx%x\n", 129, 129);
    printf("\x8e\t%d\tx%x\n", 142, 142);
    printf("\x99\t%d\tx%x\n", 153, 153);
    printf("\x9a\t%d\tx%x\n", 154, 154);
    printf("\xe1\t%d\tx%x\n", 225, 225);
    return 0;
}