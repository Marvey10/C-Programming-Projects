#include <stdio.h>

int main() {

    int verfuegernummer, pin;

    printf("Bitte Verfuegernummer: ");
    scanf("%i", &verfuegernummer);
    printf("Bitte PIN eingeben: ");
    scanf("%i", &pin);

    switch (verfuegernummer) {
    case 123456:
        if (verfuegernummer == 123456) {
            printf("Login erfolgreich!");
        } else {
            printf("Verfuegernummer oder PIN nicht richtig!");
        }
        break;
    }
    switch (pin) {
    case 9876:
        if (pin == 9876) {
            printf("");
        } else {
            printf("Verfuegernummer oder PIN nicht richtig!");
        }
        break;
    default:
        printf("Verfuegernummer oder PIN nicht richtig!");
        break;
    }
}