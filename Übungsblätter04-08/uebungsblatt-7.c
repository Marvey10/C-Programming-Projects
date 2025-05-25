#include <stdio.h>
#include <stdlib.h>

#define M_IN_KM 	1/1000
#define SEK_IN_H 	1/3600

int main(){
	system("CHCP 65001");
	system("CLS");
	
	// Übung 1
	printf("--Nummer 1--\n\n");
	printf("ASCII-Zeichenkodierung\n");
	printf("----------------------\n");
	int x;
	printf("Zeichen: ");
	scanf("%c", &x);
	printf("----------------------\n");
	printf("Dez: %i\n", x);
	printf("Hex: %x\n\n", x);
	
	// Übung 2
	printf("--Nummer 2--\n");
	float r1, r2, r3;
	printf("Widerstandsberechnung:\n");
	printf("---------------------\n");
	printf("R1 [Ohm] = ");
	scanf("%f", &r1);
	printf("R2 [Ohm] = ");
	scanf("%f", &r2);
	printf("R3 [Ohm] = ");
	scanf("%f", &r3);
	printf("---------------------\n");
	float rs = r1+r2+r3;
	float rp = 1 / (1/r1 + 1/r2 + 1/r3);
	printf("Rs [Ohm] = %.0f\n", rs);
	printf("Rp [Ohm] = %.1f\n\n", rp);
	
	// Übung 3
	printf("--Nummer 3--\n");
	float a, b, c;
	printf("a = ");
	scanf("%f", &a);
	printf("f = ");
	scanf("%f", &b);
	c = a*b;
	printf("c = a*b= %f\n", c);
	
	// Übung 4 START:
	//	Dieses Programm berechnet die Fallzeit und Fallgeschwindigkeit wenn die höhe h angegeben ist.
	
	// Übung 5
	printf("--Nummer 4--\n");
	float t, v;
	printf("Geben sie die Zeit des Läufers in Sekunden ein: ");
	scanf("%f", &t);
	v = (100.0 * M_IN_KM) / (t * SEK_IN_H);
	printf("Seine Durchschnittsgeschwindigkeit: %.2f km/h\n", v);	
	
	/* Übung 6
	Das Programm gibt folgendes aus:
	
		-------------------------
		Process exited after x seconds with return value 0
		Drücken Sie eine beliebige Taste . . .
	*/
	return EXIT_SUCCESS;
}

