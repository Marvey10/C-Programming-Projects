#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
	system("CHCP 65001");
	system("CLS");
	
	// Übung 1
	printf("--Nummer 1--\n");
	printf("Datentyp\%*s\n", 10, "Größe");
	printf("char\%*i Bytes\n", 10, sizeof(char));
	printf("short\%*i Bytes\n", 9, sizeof(short));
	printf("int\%*i Bytes\n", 11, sizeof(int));
	printf("float\%*i Bytes\n", 9, sizeof(float));
	printf("double\%*i Bytes\n\n", 8, sizeof(double));
	
	// Übung 2
	printf("--Nummer 2--\n");
	printf("Datentyp\%*s\%*s\%*s\n", 10, "Größe", 20, "Minimum", 20, "Maximum");
	printf("char\%*i Bytes %*i%*i\n", 10, sizeof(char), 14, CHAR_MIN, 19, CHAR_MAX);
	printf("short\%*i Bytes %*i%*i\n", 9, sizeof(short), 16, SHRT_MIN, 19, SHRT_MAX);
	printf("int\%*i Bytes %*i%*i\n", 11, sizeof(int), 21, INT_MIN, 19, INT_MAX);
	printf("float\%*i Bytes %*e%*e\n", 9, sizeof(float), 23, FLT_MIN, 19, FLT_MAX);
	printf("double\%*i Bytes %*e%*e\n\n", 8, sizeof(double), 23, DBL_MIN, 19, DBL_MAX);
	
	// Übung 3
	printf("--Nummer 3-- (Kommentar)");
	/*
		(a) int, da es eine Ganzzahl ist.
		(b) short, da diese Rechnung gleich 4300 ist.
		(c) long, da es den Wertebereich eines int-Datentyps überschreitet.
		(d) double, da es eine Gleitkommazahl enthält und einen Zehnerexponent.
		(e) short, da es eine kleine Ganzzahl ist.
		(f) long, da es in einem int-Datentyp nicht passt.
		(g) short, da es in einem short-Datentyp genau passt.
	*/
	return EXIT_SUCCESS;
}

