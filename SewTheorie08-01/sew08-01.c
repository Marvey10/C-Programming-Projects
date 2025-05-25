/*
    @author Marko Trajanovski
    @date 08.01.2024
    @details Eine IP Adresse sol eingelesen werden (0-255.0-255.0-255.0-255)
    Eine Subnetzmaske soll eingelesen werden (0-255.0-255.0-255.0-255)
    Anhand der beiden Eingaben soll die Netzadresse
    und die Hostnummer ermittelt werden
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Eingabe der IP Adresse als 12 ziffrige Zahl z.B 010.128.192.255
    printf("%i Byte\n", sizeof(long long int));
    printf("INT_MIN = %i\n", INT_MIN);
    printf("INT_MAX = %i\n", INT_MAX);

    unsigned long long int ip = 255255255255;
    printf("%llu\n", ip);

    return EXIT_SUCCESS;
}