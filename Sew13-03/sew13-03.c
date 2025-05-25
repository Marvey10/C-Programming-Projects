/*
    @author Marko Trajanovski
    @date 13.03.2024
*/

#include <stdio.h>

void add(int zahlen[]) {
    zahlen[0] = zahlen[1] + zahlen[2];
}

int main() {

    int zahlen[3][3];
    printf("Gib eine Zahl ein:");
    scanf("%d", &zahlen[1]);
    printf("Gib eine weitere Zahl ein zum addieren:");
    scanf("%d", &zahlen[2]);
    add(zahlen);
    printf("Das Ergebnis von %d + %d = %d", zahlen[2], zahlen[1], zahlen[0]);

}