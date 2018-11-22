#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 	Autor: Gabriel Nascimento
	Problema: Escrever um programa para apresentar o nome do lanche
	do MacDonalds conforme o nº da opção digitada pelo cliente (usuário): 
		1. BigMac 
		2. Quarteirão 
		3. MacChicken 
		4. Cheddar MacMelt 
		5. MacMax 
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("========== Nome dos Lanches do Mc Donalds ==========");
	int opcao, resp, i;
	float preco;
	
	do {
		puts("Digite o número do lanche desejado: ");
			puts("1. BigMac R$ 10,00  \n 2. Quarteirão R$ 12,00 \n 3. MacChicken R$ 8,00 \n 4. Cheddar MacMelt R$ 10,00 \n 5. MacMax R$ 12,00  \n");
			scanf("%d",&opcao);
			
		switch(opcao) {
			case 1: 
				puts("1. Bic Mac - R$ 10,00 \n");
				preco += 10;
				break;
				
			case 2: 
				puts("2 - Quarteirão - R$ 12,00 \n");
				preco += 12;
				break;
				
			case 3: 
				puts("3 - MacChicken - R$ 8,00\n");
				preco += 8;
				break;
			
			case 4: 
				puts("4 - Cheddar MacMelt - R$ 10,00 \n");
				preco += 10;
				break;
				
			case 5: 
				puts("5 - MacMax - R$ 12,00 \n");
				preco += 12;
				break;
				
			default: 
				puts("opção Inválida. \n");
		}
		
		puts("Deseja continuar ? \n 1 - Sim \n 2 - Não \n");
		scanf("%d",&resp);
		
		if(resp == 1) {
			puts ("Continuando...\n");			
		}
		
		else {
			printf("O valor do pedido é de R$ %2.f \n ",preco);
			i++;
		}
	} while (i < 1);
	return 0;
}
