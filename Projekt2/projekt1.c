#include <stdio.h>

int main() {  
    char opt;  
    float n1, n2;   
    float res;

    printf (" Waehlen Sie einen Operator (+, -, *, /), um eine Operation im C-Rechner durchzufuehren: \n ");  
    scanf ("%c", &opt);
    printf (" Geben Sie die erste Zahl ein: ");  
    scanf("%f", &n1); 
    printf (" Geben Sie die zweite Zahl ein: ");  
    scanf ("%f", &n2);
      
    if (opt == '+') {  
        res = n1 + n2;
        printf (" Die Addition von %.2f und %.2f ist: %.2f", n1, n2, res);  
    } else if (opt == '-') {  
        res = n1 - n2;
        printf (" Die Subtraktion von %.2f und %.2f ist: %.2f", n1, n2, res);  
    } else if (opt == '*') {  
        res = n1 * n2;
        printf (" Die Multiplikation von %.2f und %.2f ist: %.2f", n1, n2, res);  
    } else if (opt == '/') {  
        if (n2 == 0) {  
            printf (" \n Der Divisor kann nicht Null sein. Bitte geben Sie einen anderen Wert ein: ");  
            scanf ("%d", &n2);        
        }  
        res = n1 / n2; 
        printf (" Die Division von %.2f und %.2f ist: %.2f", n1, n2, res);  
    } else {  
        printf(" \n Sie haben falsche Eingaben gegeben ");  
    }

    return 0;  
}