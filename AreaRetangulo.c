#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Desenvolver um programa em C que calcule a area de um ret�gulo com a
	base e a altura fornecidos pelo usu�rio */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  float base, altura, area;
  
  printf("=========== C�lculo de �rea do Tri�ngulo ============= /n");
  printf("Digite o valor da base: ");
  scanf("%f", &base);
  printf("Digite o valor da altura: ");
  scanf("%f", &altura);
  area = base * altura;
  printf("O valor da area do ret�ngulo �: %.2f \n",area);
  
  system("PAUSE");	
  return 0;
}
