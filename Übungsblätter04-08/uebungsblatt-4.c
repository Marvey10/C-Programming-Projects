#include <stdio.h>
#include <stdlib.h>

int main(){
	system("CHCP 65001");
	system("CLS");
	
	// Übung 1
	printf("--Nummer 1--\n");
	printf("Farbcodes für die Textformatierung:\n");
	
	printf("Die Landesfarben von Österreich sind: \"%srot%s-%s%sweiß%s-%srot%s\"\n", 
	"\x1b[41m", "\x1b[0m", "\x1b[47m", "\x1b[31m", "\x1b[0m", "\x1b[41m", "\x1b[0m" );
	
	printf("Die Landesfarben von Deutschland sind: \"%sschwarz%s-%s%srot%s-%s%sgold%s\n", 
	"\x1b[40m", "\x1b[0m", "\x1b[41m", "\x1b[33m", "\x1b[0m", "\x1b[43m", "\x1b[31m", "\x1b[0m");
	
	printf("Die Landesfarben von Italien sind: \"%sgrün%s-%s%sweiß%s-%srot%s\"\n", 
	"\x1b[42m", "\x1b[0m", "\x1b[47m", "\x1b[31m", "\x1b[0m", "\x1b[41m", "\x1b[0m");
	
	printf("Die Landesfarben von Italien sind: \"%srot%s-%s%sgelb%s-%srot%s\"\n", 
	"\x1b[41m", "\x1b[0m", "\x1b[43m", "\x1b[31m", "\x1b[0m", "\x1b[41m", "\x1b[0m");
	
	printf("\n\n");
	
	// Übung 2
	printf("--Nummer 2--\n");
	printf("Farbcodes für die Textformatierung:\n");
	printf("|---------+-------------+-------------|\n");
	printf("| Farbe   | Vordergrund | Hintergrund |\n");
	printf("| schwarz | %s\\x1b[30m%s    | %s\\x1b[40m%s    |\n", "\x1b[30m", "\x1b[0m", "\x1b[40m", "\x1b[0m");
	printf("| rot     | %s\\x1b[31m%s    | %s\\x1b[41m%s    |\n", "\x1b[31m", "\x1b[0m", "\x1b[41m", "\x1b[0m");
	printf("| grün    | %s\\x1b[32m%s    | %s\\x1b[42m%s    |\n", "\x1b[32m", "\x1b[0m", "\x1b[42m", "\x1b[0m");
	printf("| gelb    | %s\\x1b[33m%s    | %s\\x1b[43m%s    |\n", "\x1b[33m", "\x1b[0m", "\x1b[43m", "\x1b[0m");
	printf("| blau    | %s\\x1b[34m%s    | %s\\x1b[44m%s    |\n", "\x1b[34m", "\x1b[0m", "\x1b[44m", "\x1b[0m");
	printf("| magenta | %s\\x1b[35m%s    | %s\\x1b[45m%s    |\n", "\x1b[35m", "\x1b[0m", "\x1b[45m", "\x1b[0m");
	printf("| cyan    | %s\\x1b[36m%s    | %s\\x1b[46m%s    |\n", "\x1b[36m", "\x1b[0m", "\x1b[46m", "\x1b[0m");
	printf("| weiß    | %s\\x1b[37m%s    | %s\\x1b[47m%s    |\n", "\x1b[37m", "\x1b[0m", "\x1b[47m", "\x1b[0m");
	printf("|---------+-------------+-------------|\n");

	return EXIT_SUCCESS;
}

