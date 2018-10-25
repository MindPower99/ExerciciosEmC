#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Gabriel Jorge
	Problema: Escrever um programa para apresentar o nome do lanche do MC Donalds conforme o nº da opção digitada pelo cliente(usuario):
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
