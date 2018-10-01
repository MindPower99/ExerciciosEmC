#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  int anonasc, idade, anoatual;
  printf("Digite seu ano de nascimento: ");
  scanf("%d", &anonasc);
  printf("Digite o ano atual: ");
  scanf("%d",&anoatual);
  idade = anoatual - anonasc;
  if (idade < 18) {
     printf("Não atingiu a maioridade \n ");          
  }
  else 
       printf("Atingiu a maioridade \n");
         
  system("PAUSE");	
  return 0;
}
