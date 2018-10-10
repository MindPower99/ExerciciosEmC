#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Elabore um algoritmo que leia uma medida em centímetros
	e apresente quantos metros, decímetros e milímetros há nesta medida.
*/ 

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float cent,mil,metro,deci;
    printf("========Conversor de Centímetros: =========\n");
    printf("Medida em Centímetros: ");
    scanf("%f",&cent);
    mil = cent * 10;
    printf("Esta medida em milímetros é: %f milímetros \n", mil);
    metro = cent / 100;
    printf("Esta medida em Metros é: %f metros \n", metro);
    deci = cent / 10;
    printf("Esta medida em decímetros é: %f decímetros \n",deci);
    
  
  system("PAUSE");	
  return 0;
}
