#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  int anonasc, idade, idadefut, anoatual;
  
  printf("Digite seu ano de nascimento: \n");
  scanf("%d",&anonasc);
  printf("Digite o ano atual \n");
  scanf("%d", &anoatual);
  idade = anoatual - anonasc;
  idadefut = 2050 - anonasc;
  printf("Sua idade é: %d \n",idade);
  printf("Em 2050 você terá %d anos\n",idadefut);
  system("PAUSE");	 
  return 0;
}
