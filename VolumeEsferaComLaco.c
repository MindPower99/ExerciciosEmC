#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* 	autor: Gabriel Jorge
	Problema: Fa�a um algoritmo para calcular o volume de 10 esferas de raio R,
	em que R � um valor fornecido pelo usu�rio.
.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float raio, volume;
	int i;
	
	for (i = 0; i < 5; i++) {
		
		printf("Insira o valor em cent�metros correspondente ao raio: \n");
		scanf("%f",&raio);
		volume = 4 * 3.14 * (pow(raio,3)) / 3;
		printf("O volume da esfera � : %2.f cm�\n",volume);
	
	}
	return 0;
}
