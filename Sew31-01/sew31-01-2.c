/*
    @author Marko Trajanovski
    @date 31.01.2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    char spooky[5][40] = {
        "  ____             _             ",
        " |  _ \\  ___  _ __| |_   _ _ __ ",
        " | | | |/ _ \\| '__| | | | | '__|",
        " | |_| | (_) | |  | | |_| | |   ",
        " |____/ \\___/|_|  |_|\\__,_|_|   "
    };

    for (int i = 0; i < 5; i++) {
        printf("%s\n", spooky[i]);
    }

    return 0;
}
