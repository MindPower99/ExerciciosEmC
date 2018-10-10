#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Desenvolver um programa em C que receba
	 o sexo da pessoa e printe Bem-vindo caso for homem
	  e Bem-venda caso for mulher*/ 
	
int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  char sexo;
  printf("========== Bem-Vindos ============\n");
  printf("Digite seu sexo \n M - Masculino \n F - Feminino \n ");
  scanf("%c",&sexo);
  if (sexo == 'm') {
     printf("Bem-Vindo Senhor ! \n");         
	 }
  else if (sexo == 'f'){
      printf("Bem-Vinda Senhora ! \n ");
	}
	else 
		printf("Opção inválida. \n");
      
  system("PAUSE");	
  return 0;
}
