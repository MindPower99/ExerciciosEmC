#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: 2. Desenvolva um algoritmo que receba
	a base e altura de um ret�ngulo, calcule e mostre
	sua �rea, repita 10 vezes com valores diferentes
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("=============C�lculo de �rea do Ret�ngulo com La�o de repeti��o ==============");
	float base, altura, area;
	int i = 1;
	while (i < 11) {
		puts("Digite o valor da base do ret�ngulo : \n");
		scanf("%f",&base);
		puts("Digite o valor da altura do ret�ngulo: \n");
		scanf("%f",&altura);
		area = base * altura;
		printf("A area do retangulo � %f \n",area);
		area = 0;
		i++;
		
	}
	return 0;
}
