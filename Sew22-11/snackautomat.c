/*
    @author Marko Trajanovski
    @date 29.11.2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayMenu() {
    printf("Snack Automat\n");
    printf("1. Snickers - 1.00 Euro\n");
    printf("2. Mars - 1.00 Euro\n");
    printf("3. M&Ms - 1.50 Euro\n");
    printf("4. Oreo - 1.70 Euro\n");
    printf("5. KitKat - 1.20 Euro\n");
    printf("6. Twix - 1.30 Euro\n");
    printf("7. Verlassen\n");
}

int main() {
    float preise[] = {0.00, 1.00, 1.00, 1.50, 1.70, 1.20, 1.30};
    float geldeingefuegt = 0.0;
    int wahl = 0;

    displayMenu();
    printf("Geben Sie Ihre Wahl ein (1-7): ");
    scanf("%d", &wahl);

    if (wahl >= 1 && wahl <= 6) {
        printf("Sie haben Snack %c gewaehlt. ", '1' + wahl - 1);
        while (geldeingefuegt < preise[wahl]) {
            printf("Nicht genug Geld. Mehr einfuegen (in Euro, aktuell: %.2f Euro): ", geldeingefuegt);
            scanf("%f", &geldeingefuegt);
        }
        geldeingefuegt -= preise[wahl];
        printf("Geniessen Sie Ihren Snack! Restgeld: %.2f Euro\n", geldeingefuegt);
    } else if (wahl == 7) {
        printf("Verlassen. Bitte nehmen Sie Ihr Restgeld: %.2f Euro\n", geldeingefuegt);
    } else {
        printf("Ungueltige Auswahl. Bitte versuchen Sie es erneut.\n");
    }

    return 0;
}
