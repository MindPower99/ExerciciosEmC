#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Elabore um algoritmo que leia uma medida em cent�metros
	e apresente quantos metros, dec�metros e mil�metros h� nesta medida.
*/ 

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float cent,mil,metro,deci;
    printf("========Conversor de Cent�metros: =========\n");
    printf("Medida em Cent�metros: ");
    scanf("%f",&cent);
    mil = cent * 10;
    printf("Esta medida em mil�metros �: %f mil�metros \n", mil);
    metro = cent / 100;
    printf("Esta medida em Metros �: %f metros \n", metro);
    deci = cent / 10;
    printf("Esta medida em dec�metros �: %f dec�metros \n",deci);
    
  
  system("PAUSE");	
  return 0;
}
