#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Desenvolver um programa em C que calcule a area de um Tri�ngulo com a
	base e a altura fornecidos pelo usu�rio */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  float base,altura,area;
  printf("========== C�clculo de �rea de tri�ngulo ============\n");
  printf("Digite o valor da base: ");
  scanf("%f",&base);
  printf("Digite o valor da altura: ");
  scanf("%f",&altura);
  area = base * altura / 2;
  printf("O valor da area � de: %f \n",area);
  
  system("PAUSE");	
  return 0;
}
