#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: 1. Crie um algoritmo que controle uma conta poupan�a
	que foi aberta com um dep�sito de R$ 500,00. Sendo a remunera��o
	de 1% ao m�s de juros. Apresente o saldo ap�s 3 meses. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float deposito = 500;
	int mes = 0;	
	puts("==========C�lculo de poupan�a com La�o ===========\n");
	while (mes<4) {
		printf("Seu saldo no mes %d � de %f \n",mes,deposito);
		deposito = (0.01 * deposito) + deposito;
		mes++;
	}
	return 0;
}
