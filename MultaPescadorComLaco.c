#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 	Autor: Gabriel Nascimento
	Problema: Crie um algoritmo que receba dados de 5 pescadores e calcule
	a multa paga por cada um que ultrapassar a quantidade de quilos estabelecida
	por lei.
	
	A saber: 
		A quantidade de peixe por pessoa é 50 kg.
		A multa por quilo excedente é R$4,00.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("===========Cálculo de Multa do Pescador: =============\n");
	float multa, quantidade;
	int i;
	
	do {
		puts("Digite a quantidade de peixes em KG: ");
		scanf("%f",&quantidade);
		
		if (quantidade <= 50) {
			puts("Não há multa. ");
		}
		
		else {
			multa = (quantidade - 50) * 4;
			printf("O valor da multa é de R$ %2.f \n\n",multa);
		}
	i++;
	} while (i < 5);
	return 0;
}
