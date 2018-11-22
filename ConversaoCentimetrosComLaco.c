#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 	Autor: Gabriel Jorge
	Problema: Elabore um algoritmo que leia 10 medidas diferentes
	em cent�metros e apresente quantos metros, dec�metros e mil�metros h� nesta medida.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("===========Convers�o de Cent�metros: ============\n");
	float cent, mili, deci, metro;
	int i;
	
	do	{
		puts("Insira a medida em Cent�metros: \n");
		scanf("%f",&cent);
		metro = cent / 100;
		deci = cent / 10;
		mili = cent * 10;
		printf("%2.f Metros \n",metro);
		printf("%2.f Dec�metros \n",deci);
		printf("%2.f Mil�metros \n\n",mili);
		i++;
	} while (i < 10);
	return 0;
}
