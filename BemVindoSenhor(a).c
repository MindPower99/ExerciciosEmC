#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  char sexo;
  printf("Digite seu sexo \n M - Masculino \n F - Feminino \n ");
  scanf("%c",&sexo);
  if (sexo == 'm') {
     printf("Bem-Vindo Senhor ! \n");         
  }
  else
  {
      printf("Bem-Vinda Senhora ! \n ");
      }
  system("PAUSE");	
  return 0;
}
