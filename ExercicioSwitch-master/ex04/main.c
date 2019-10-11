#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char categoria;
	float salario;
	char	n[30];
	
	printf("Digite seu nome:");
	scanf("%s",&n);
	
	printf("Digite a sua categoria dentro da empresa:");
	scanf("%s",&categoria);
	
	printf("Digite seu salario:");
	scanf("%f",&salario);
	
	switch (categoria){
		
		case 'a':
			salario *= 1.10;
			break;
		case 'c':
			salario *= 1.10;
			break;
		case 'f':
			salario *= 1.10;
			break;
		case 'h':
			salario *= 1.10;
			break;
		case 'b':
			salario *= 1.15;
			break;
		case 'd':
			salario *= 1.15;
			break;
		case 'e':
			salario *= 1.15;
			break;
		case 'i':
			salario *= 1.15;
			break;
		case 'j':
			salario *= 1.15;
			break;
		case 't':
			salario *= 1.15;
			break;
		case 'k':
			salario *= 1.25;
			break;
		case 'r':
			salario *= 1.25;
			break;
		case 'l':
			salario *= 1.35;
			break;
		case 'm':
			salario *= 1.35;
			break;
		case 'n':
			salario *= 1.35;
			break;
		case 'o':
			salario *= 1.35;
			break;
		case 'p':
			salario *= 1.35;
			break;
		case 'q':
			salario *= 1.35;
			break;
		case 's':
			salario *= 1.35;
			break;
		case 'u':
			salario *= 1.50;
			break;
		case 'v':
			salario *= 1.50;
			break;
		case 'x':
			salario *= 1.50;
			break;
		case 'y':
			salario *= 1.50;
			break;
		case 'w':
			salario *= 1.50;
			break;
		case 'z':
			salario *= 1.50;
			break;	
		default:
			printf("Categoria invalida\n");				
	}
	
	printf("Ola %s \n",n);
	printf("devido a sua categoria %c\n",categoria);
	printf("seu salario agora e %5.2f\n",salario);
	
	
	system("PAUSE");
	return 0;
}
