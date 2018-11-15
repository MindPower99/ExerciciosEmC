#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: 1. Crie um algoritmo que controle uma conta poupança
	que foi aberta com um depósito de R$ 500,00. Sendo a remuneração
	de 1% ao mês de juros. Apresente o saldo após 3 meses. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float deposito = 500;
	int mes = 0;	
	puts("==========Cálculo de poupança com Laço ===========\n");
	while (mes<4) {
		printf("Seu saldo no mes %d é de %f \n",mes,deposito);
		deposito = (0.01 * deposito) + deposito;
		mes++;
	}
	return 0;
}
