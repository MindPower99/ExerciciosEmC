#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Digite o número correspondente ao lanche desejado: \n 1 - BigMac \n 2 - Quarteirão \n 3 - MacChicken \n 4 - Cheddar MacMelt \n 5 - MacMax \n");
	scanf("%d",&opcao);
	
	switch (opcao) {
		case 1: 
			printf("Você escolheu o Big MC !");
			break;
			
		case 2: 
			printf("Você escolheu o Quarteirão !");
			break;
			
		case 3:
			printf("Você escolheu o MacChicken !");
			break;
			
		case 4:
			printf("Você escolheu o Cheddar MacMelt !");
			break;
			
		case 5:
			printf("Você escolheu o MacMax !");
			break;
			
		default:
			printf("Digite um número válido.");
			
	}
	return 0;
}
