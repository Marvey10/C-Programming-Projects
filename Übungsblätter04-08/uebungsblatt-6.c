#include <stdio.h>
#include <stdlib.h>

int main(){
	system("CHCP 65001");
	system("CLS");
	
	// Übung 1
	// (a)
	int a;
	// (b)
	short b;
	b = 1;
	// (c)
	short c = 2;
	// (d)
	int d, e;
	// (e)
	short f, g;
	f = 3, g = 4;
	// (f)
	short h = 5, i = 6;
	
	// Übung 2
	// (e), (h), (k) sind nicht zulässig da sie alle Sonderzeichen enthalten.
	
	// Übung 3
	// (a), da es den MAX Wert eines short-Datentyps überschreitet.
	// (c) kann Sinn ergeben aber es ist besser 200 in einem short-Datentyp zu speichern.
	// (d), da 0.001 keine Ganzzahl ist.
	// (f) da 20 keine Gleitkommazahl ist.
	
	// (b) ergibt Sinn, da es d ausgeben kann.
	
	// Übung 4
	float c4 = 299792.458;
	printf("%.2f\n", c4);
	printf("%.4e", c4);
	return EXIT_SUCCESS;
}

