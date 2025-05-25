#include <stdio.h>
#include <stdlib.h>

#define RESET      "\x1b[0m"
#define BOLD       "\x1b[1m"
#define UNDERLINE  "\x1b[4m"
#define INVERSE    "\x1b[7m"
 
 
 
#define FG_BLACK   "\x1b[30m"
#define FG_RED     "\x1b[31m"
#define FG_GREEN   "\x1b[32m"
#define FG_YELLOW  "\x1b[33m"
#define FG_BLUE    "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_CYAN    "\x1b[36m"
#define FG_WHITE   "\x1b[37m"
 
 
 
#define BG_BLACK   "\x1b[40m"
#define BG_RED     "\x1b[41m"
#define BG_GREEN   "\x1b[42m"
#define BG_YELLOW  "\x1b[43m"
#define BG_BLUE    "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN    "\x1b[46m"
#define BG_WHITE   "\x1b[47m"

int main() {

    system("CLS");

    printf(FG_CYAN"Tabelle von Rechtecksinhalten:"RESET"\n");
    printf("%s\t%s\t%s\n", "a", "b", "A");
    printf("%d\t%d\t%d\n", 10, 10, 100);
    printf("%d\t%d\t%d\n", 20, 50, 1000);
    printf("%d\t%d\t%d\n", 100, 100, 10000);
    return 0;
}