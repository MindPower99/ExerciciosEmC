#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /* autor: Gabriel Jorge
	problema: Crie um algoritmo que receba o ano de  nascimento de uma pessoa. Calcule e mostre a idade atual e quantos anos essa pessoa terá em 2050.

*/ 

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  int anonasc, idade, idadefut, anoatual;
  printf("========= Idade em 2050 ========\n");
  printf("Digite seu ano de nascimento: \n");
  scanf("%d",&anonasc);
  printf("Digite o ano atual \n");
  scanf("%d", &anoatual);
  idade = anoatual - anonasc;
  idadefut = 2050 - anonasc;
  if (anonasc == 2018) {
  	printf("Você tá mentindo mentiroso \n");
  }
  else {
  printf("Sua idade é: %d \n",idade);
  printf("Em 2050 você terá %d anos\n",idadefut);
    }
  system("PAUSE");	 
  return 0;
}
