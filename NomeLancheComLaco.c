#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 	Autor: Gabriel Nascimento
	Problema: Escrever um programa para apresentar o nome do lanche
	do MacDonalds conforme o n� da op��o digitada pelo cliente (usu�rio): 
		1. BigMac 
		2. Quarteir�o 
		3. MacChicken 
		4. Cheddar MacMelt 
		5. MacMax 
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("========== Nome dos Lanches do Mc Donalds ==========");
	int opcao, resp, i;
	
	do {
		puts("Digite o n�mero do lanche desejado: ");
			puts("1. BigMac \n 2. Quarteir�o \n 3. MacChicken \n 4. Cheddar MacMelt \n 5. MacMax  \n");
			scanf("%d",&opcao);
			
		switch(opcao) {
			case 1: 
				puts("1 - Bic Mac.");
				break;
				
			case 2: 
				puts("2 - Quarteir�o. ");
				break;
				
			case 3: 
				puts("3 - MacChicken. ");
				break;
			
			case 4: 
				puts("4 - Cheddar MacMelt. ");
				break;
				
			case 5: 
				puts("5 - MacMax. ");
				break;
				
			default: 
				puts("op��o Inv�lida.");
		}
		
		puts("Deseja continuar ? \n 1 - Sim \n 2 - N�o \n");
		scanf("%d",&resp);
		
		if(resp == 1) {
			puts ("Continuando...");			
		}
		
		else {
			i++;
		}
	} while (i < 1);
	return 0;
}
