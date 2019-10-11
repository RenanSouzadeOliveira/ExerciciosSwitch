#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("Digite uma letra:");
	scanf("%s",&letra);
	
	switch(letra){
		
		case 'a':
			printf("E uma vogal\n");
			break;
		case 'e':
			printf("E uma vogal\n");
			break;
		case 'i':
			printf("E uma vogal\n");
			break;
		case 'o':
			printf("E uma vogal\n");
			break;
		case 'u':
			printf("E uma vogal\n");
			break;
		default:
			printf("Nao e uma vogal\n");
	}
	
	system("PAUSE");
	return 0;
}
