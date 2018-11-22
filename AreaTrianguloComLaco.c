#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Jorge
	Problema: Crie um algoritmo para calcular a área de 8 triângulos, apresente cada resultado.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	int i = 1;
	puts ("==========Área do triângulo com Laço de repetição: ============\n");
	do {
		puts("Digite a altura do triângulo: \n");
		scanf("%f",&altura);
		puts("Digite a base do triângulo: \n");
		scanf("%f",&base);
		area = (base * altura) / 2;
		printf("A área do triângulo é: %f \n\n",area);
		i++;
	}
	while(i < 3);
	return 0;
}
