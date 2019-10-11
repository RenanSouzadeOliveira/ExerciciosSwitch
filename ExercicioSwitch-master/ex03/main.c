#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, rest;
	
	printf("Digite um numero qualquer:");
	scanf("%d",&num);
	
	rest = num % 2;
	
	switch(rest){
		
		case 0:
			if(num < 10){
				printf("\nnumero par menor que dez\n");
			} else {
				printf("\nFora de Intervalo\n");
			}
			break;
		
		case 1:
			if(num < 10){
				printf("\nnumero impar menor que dez\n");
			} else {
				printf("\nFora de Intervalo\n");
			}
			
		default:
			printf("");
			
	}
		
	system("PAUSE");
	return 0;
}
