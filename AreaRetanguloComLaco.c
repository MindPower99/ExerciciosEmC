#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: 2. Desenvolva um algoritmo que receba
	a base e altura de um retângulo, calcule e mostre
	sua área, repita 10 vezes com valores diferentes
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("=============Cálculo de área do Retângulo com Laço de repetição ==============");
	float base, altura, area;
	int i = 1;
	while (i < 11) {
		puts("Digite o valor da base do retângulo : \n");
		scanf("%f",&base);
		puts("Digite o valor da altura do retângulo: \n");
		scanf("%f",&altura);
		area = base * altura;
		printf("A area do retangulo é %f \n",area);
		area = 0;
		i++;
		
	}
	return 0;
}
