#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: Crie um programa que receba 3 valores: A, B e C, e apresente-os na ordem crescente */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	float A,B,C;
	printf("===========Comparando os Valores e os exibindo em Ordem Crescente ===============\n");
	printf("Digite o valor de A: \n");
	scanf("%f",&A);
	printf("Digite o valor de B: \n");
	scanf("%f",&B);
	printf("Digite o valor de C: \n");
	scanf("%f",&C);
	
	if (A < B && A < C) {
		if(B < C) {
			printf("%2.f \n",A);
			printf("%2.f \n",B);
			printf("%2.f \n",C);
		}
		else {
			printf("%2.f \n",A);
			printf("%2.f \n",C);
			printf("%2.f \n",B);
		}
	}
	
	else  
		if(B < A && B < C) {
			if(A < C) {
				printf("%2.f \n",B);
				printf("%2.f \n",A);
				printf("%2.f \n",C);
			}
			else {
				printf("%2.f \n",B);
				printf("%2.f \n",C);
				printf("%2.f \n",A);
			}
	}
		else {
			if (A < B) {
				printf("%2.f \n",C);
				printf("%2.f \n",A);
				printf("%2.f \n",B);
			}
			
			else {
				printf("%2.f \n",C);
				printf("%2.f \n",B);
				printf("%2.f \n",A);
			}
		}
	return 0;
}
