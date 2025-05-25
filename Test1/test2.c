#include <stdio.h>

int main() {

    printf("%.2f \n", 1.25);
    printf("%02d.%02d.%02d\n", 1, 1, 1990);
    printf("%*s \n", 8, "Text");
    printf("%*s %06.2f\n", 6, 3.99);
    printf("%.1f + %.1f = %.1f\n", 5.25, 4.65, 9.9);
    printf("%d%d%d%d\n", 'E', 'n', 'd', 'e');
    return 0;
}