#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 	autor: Gabriel Jorge
	Problema: Faça um algoritmo para calcular o volume de 10 esferas de raio R,
	em que R é um valor fornecido pelo usuário.
.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float raio, volume;
	int i;
	
	for (i = 0; i < 5; i++) {
		
		printf("Insira o valor em centímetros correspondente ao raio: \n");
		scanf("%f",&raio);
		volume = 4 * 3.14 * (pow(raio,3)) / 3;
		printf("O volume da esfera é : %2.f cm³\n",volume);
	
	}
	return 0;
}
