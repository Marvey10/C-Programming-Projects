/**
 * @file    sew29-05.c
 * @brief   Struct
 * @author  Marko Trajanovski
 * @date    2024-05-29
 *
 * powershell: cls; gcc sew29-05.c -o run.exe; .\run.exe
 */

#include <stdio.h>

typedef struct person {           // Bauplan
    char Name[50];
    int Alter;
}personendaten;

int main() {
    struct person person1;
    personendaten personen[10];

    printf("\n Geben Sie einen Namen ein:");
    scanf("%s", &person1.Name);
    printf("\n Geben Sie ein Alter ein:");
    scanf("%i", &person1.Alter);

    printf("\n Geben Sie einen Namen ein:");
    scanf("%s", &personen[0].Name);
    printf("\n Geben Sie ein Alter ein:");
    scanf("%i", &personen[0].Alter);


}