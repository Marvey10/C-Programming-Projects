#include <stdio.h>
#include <stdlib.h>

int main(){
	system("CHCP 65001");
	system("CLS");
	
		/* Beispiel a
		a/b = 10/5 = 2
		b/a = 5/10 = 0
		
		Da die ganzzahlige Division auf eine Ganze Zahl auf/abrundet, ist das Ergebnis von b/a 0. 
	*/
	
		/* Beispiel b

		a*b = 200*300 = 60000
		a*b = 200*300 = 60000
	
	Bei der ersten Ausgabe wird das ergebnis direkt im printf Befehl berechnet wobei in der zweiten
	eine dritte Variable c erstellt wurde die gleich a*b ist.
	*/
	
	// Beispiel c
	
	int a = 1280;
    int b = 15;

    printf("%d / %d = %d + %dR\n", a, b, a / b, a % b);
	
	/* Beispiel d

		Folgendes wird ausgegeben:
		18
		28
		
		Es wird mit dem postinkrement von a (3) und den prädekrement von b (6) multipliziert. (= 18)
		Es wird mit dem präinkrement von a (4) und den postdekrement von b (7) multipliziert. (=28)
	*/
	
	/* Beispiel e
		a = 3 und b = 7
		a = 7 und b = 3
		
		Ich diesen Algorithmus als "Swap-Algorithmus" bezeichnen, da hier a und b mithilfe c ihre Werte Swappen.
	*/
	return EXIT_SUCCESS;
}

