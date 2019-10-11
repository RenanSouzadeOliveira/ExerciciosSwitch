#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mes;
	
	printf("Escolha o número do respectivo mes que voce deseja escolher:\n");
	printf("\n 1 - Janeiro\n");
	printf("\n 2 - Fevereiro\n");
	printf("\n 3 - Março\n");
	printf("\n 4 - Abril\n");
	printf("\n 5 - Maio\n");
	printf("\n 6 - Junho\n");
	printf("\n 7 - Julho\n");
	printf("\n 8 - Agosto\n");
	printf("\n 9 - Setembro\n");
	printf("\n10 - Outubro\n");
	printf("\n11 - Novembro\n");
	printf("\n12 - Dezembro\n");
	scanf("%d",&mes);
	
	switch(mes){
		
		case 1:
			printf("\nJaneiro\n");
			break;
		case 2:
			printf("\nFevereiro\n");
			break;
		case 3:
			printf("\nMarço\n");
			break;
		case 4:
			printf("\nAbril\n");
			break;
		case 5:
			printf("\nMaio\n");
			break;
		case 6:
			printf("\nJunho\n");
			break;
		case 7:
			printf("\nJulho\n");
			break;
		case 8:
			printf("\nAgosto\n");
			break;
		case 9:
			printf("\nSetembro\n");
			break;
		case 10:
			printf("\nOutubro\n");
			break;
		case 11:
			printf("\nNovembro\n");
			break;
		case 12:
			printf("\nDezembro\n");
			break;
		default:
			printf("\nMes invalido!!!\n");
}
	
	system("PAUSE");
	return 0;
}
