#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Gabriel Jorge
	Problema: Crie um algoritmo que receba um n�mero entre 1 e 12 e apresente o m�s correspondente. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int mes;
	puts("==============N�mero e M�s =============\n");
	puts("Digite um n�mero: ");
	scanf("%d",&mes);
	
	switch (mes) {
		
		case 1: 
			printf("Janeiro.");
			break;
			
		case 2: 
			printf("Fevereiro.");
			break;
			
		case 3: 
			printf("Mar�o.");
			break;
			
		case 4: 
			printf("Abril.");
			break;
			
		case 5: 
			printf("Maio.");
			break;
			
		case 6: 
			printf("Junho.");
			break;
			
		case 7: 
			printf("Julho.");
			break;
			
		case 8: 
			printf("Agosto.");
			break;
			
		case 9: 
			printf("Setembro.");
			break;
			
		case 10: 
			printf("Outubro.");
			break;
			
		case 11: 
			printf("Novembro.");
			break;
			
		case 12: 
			printf("Dezembro.");
			break;
			
		default:
			printf("Digite um mes v�lido.");
		
	}
	
	return 0;
}
