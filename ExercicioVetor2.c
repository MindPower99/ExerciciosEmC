#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Jorge
	Problema: Ler 10 elementos de um vetor A e a partir
	do �ndice, verificar se o �ndice � par, ser for multiplique
	o elemento por 5, sen�o some o elemento com 5. Os resultados
	das opera��es devem ser armazenados em um vetor B de mesma dimens�o.
	Apresentar o vetor A e vetor b ao final.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	float VetorA[10];
	float VetorB[10];
	int i;
	
	for (i = 1; i < 11;i++) {
		printf("Digite o %d� n�mero: \n",i);
		scanf("%f",&VetorA[i]);
	}
	return 0;
}
