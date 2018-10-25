#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Gabriel Jorge
	Problema: Escrever um programa para apresentar o nome do lanche do MC Donalds conforme o n� da op��o digitada pelo cliente(usuario):
	1. Big MC
	2. Quarteirao
	3. MC Chicken
	4. Cheddar MC Melt
	5. MacMax
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("================MC Donald's");
	printf("Digite o n�mero correspondente ao lanche desejado: \n 1 - BigMac \n 2 - Quarteir�o \n 3 - MacChicken \n 4 - Cheddar MacMelt \n 5 - MacMax \n");
	scanf("%d",&opcao);
	
	switch (opcao) {
		case 1: 
			printf("Voc� escolheu o Big MC !");
			break;
			
		case 2: 
			printf("Voc� escolheu o Quarteir�o !");
			break;
			
		case 3:
			printf("Voc� escolheu o MacChicken !");
			break;
			
		case 4:
			printf("Voc� escolheu o Cheddar MacMelt !");
			break;
			
		case 5:
			printf("Voc� escolheu o MacMax !");
			break;
			
		default:
			printf("Digite um n�mero v�lido.");
			
	}
	return 0;
}
