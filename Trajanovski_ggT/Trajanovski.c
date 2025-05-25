/*
    @author Marko Trajanovski
    @date 17.03.2024
*/

#include <stdio.h>

int berechne_ggT(int a, int b) {

    while (b != 0) {

        int temp = b;
        b = a % b;
        a = temp;

    }

    return a;
}

int main() {
    int a, b;
    
    printf("Geben Sie zwei natürliche Zahlen ein: ");
    scanf("%d %d", &a, &b);

    int ggT = berechne_ggT(a, b);

    printf("Der größte gemeinsame Teiler von %d und %d ist: %d\n", a, b, ggT);
    
    return 0;
}
