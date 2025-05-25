/*
    @author Marko Trajanovski
    @date 22.11.2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    float Gewicht, Groesse, Alter;
    float bmi;

    printf ("Geben Sie Ihre Gewicht ein: ");  
    scanf ("%f", &Gewicht);
    printf ("Geben Sie Ihre Groesse ein: ");  
    scanf("%f", &Groesse); 
    printf ("Geben Sie Ihre Alter ein: ");  
    scanf ("%f", &Alter);
    Groesse = Groesse / 100;
    printf ("Ihr BMI ist: %f \n", bmi = Gewicht / (Groesse * Groesse));

    if (bmi < 18.5) {  
        printf ("Sie sind untergewichtig! :(");  
    } else if (bmi >= 18.5 && bmi < 25) {
        printf ("Sie sind normalgewichtig! :)");  
    } else if (bmi >= 25 && bmi < 30) {
        printf ("Sie sind uebergewichtig! :(");  
    } else if (bmi >= 30 && bmi < 35) {
        printf ("Sie haben Adipositas I! :(");  
    } else if (bmi >= 35 && bmi < 40) {
        printf ("Sie haben Adipositas II! :(");  
    } else {
        printf ("Sie haben Adipositas III! :(");  
    }

    return 0; 
}