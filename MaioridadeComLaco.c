#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Jorge
	Problema: Crie um algoritmo que receba o ano de nascimento de 15 pessoas. Calcule e mostre se atingiu a maioridade ou não.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i, idade, AnoNasc;
	puts("========Cálculo de Maioridade: ==========\n");
	do  {
		puts("Digite seu ano de Nascimento: \n");
		scanf("%d",&AnoNasc);
		idade = 2018 - AnoNasc;
		
		if (idade < 18) {
			puts("Menor de Idade. \n\n");
		}
		
		else {
			puts("Maior de idade. \n\n");
		}
		i++;
	} while (i < 15);
	
	return 0;
}
