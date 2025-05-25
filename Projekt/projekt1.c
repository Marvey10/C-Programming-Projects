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
    printf( BOLD FG_GREEN"Umlaute " RESET BOLD FG_MAGENTA"und " RESET BOLD FG_BLUE"Sonderzeichen" RESET":\n");
    printf( BG_YELLOW"Zeichen\t" RESET BG_CYAN"Dezimal\t" RESET BG_RED"Hexadezimal\n" RESET);
    printf( UNDERLINE FG_YELLOW"\x84\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n", 132, 132);
    printf( UNDERLINE FG_YELLOW"\x94\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n", 148, 148);
    printf( UNDERLINE FG_YELLOW"\x81\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n", 129, 129);
    printf( UNDERLINE FG_YELLOW"\x8e\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n", 142, 142);
    printf( UNDERLINE FG_YELLOW"\x99\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n", 153, 153);
    printf( UNDERLINE FG_YELLOW"\x9a\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n", 154, 154);
    printf( UNDERLINE FG_YELLOW"\xe1\t" RESET UNDERLINE FG_CYAN"%d\t" RESET UNDERLINE FG_RED"x%x\n" RESET, 225, 225);
    return 0;
}