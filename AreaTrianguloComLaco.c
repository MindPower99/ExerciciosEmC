#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Jorge
	Problema: Crie um algoritmo para calcular a �rea de 8 tri�ngulos, apresente cada resultado.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	int i = 1;
	puts ("==========�rea do tri�ngulo com La�o de repeti��o: ============\n");
	do {
		puts("Digite a altura do tri�ngulo: \n");
		scanf("%f",&altura);
		puts("Digite a base do tri�ngulo: \n");
		scanf("%f",&base);
		area = (base * altura) / 2;
		printf("A �rea do tri�ngulo �: %f \n\n",area);
		i++;
	}
	while(i < 3);
	return 0;
}
