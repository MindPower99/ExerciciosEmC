#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 	Autor: Gabriel Jorge
	Problema: Elabore um algoritmo que leia 10 medidas diferentes
	em centímetros e apresente quantos metros, decímetros e milímetros há nesta medida.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	puts("===========Conversão de Centímetros: ============\n");
	float cent, mili, deci, metro;
	int i;
	
	do	{
		puts("Insira a medida em Centímetros: \n");
		scanf("%f",&cent);
		metro = cent / 100;
		deci = cent / 10;
		mili = cent * 10;
		printf("%2.f Metros \n",metro);
		printf("%2.f Decímetros \n",deci);
		printf("%2.f Milímetros \n\n",mili);
		i++;
	} while (i < 10);
	return 0;
}
