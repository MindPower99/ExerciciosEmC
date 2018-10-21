#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
   Problema: Crie um programa que receba duas datas:
             dia1/mes1/ano1 e dia2/mes2/ano2 efetue 
             a comparação e apresente-as em ordem crescente.
   */
int main(int argc, char *argv[])
{
  setlocale(LC_ALL,"Portuguese");
  int dia1, dia2, mes1, mes2, ano1, ano2;
  puts("Digite a primeira data, começando pelo dia: ");
  scanf("%d", &dia1);
  puts("Mês: ");
  scanf("%d", &mes1);
  puts("Ano: ");
  scanf("%d", &ano1);
  
  puts("Agora Digite a segunda data, começando pelo dia: ");
  scanf("%d", &dia2);
  puts("Mês: ");
  scanf("%d", &mes2);
  puts("Ano: ");
  scanf("%d", &ano2);
  
  printf("Primeira data: %d/%d/%d \n", dia1, mes1, ano1);
  printf("Segunda data: %d/%d/%d \n", dia2, mes2, ano2);
  
                  if(ano1 > ano2) {
                          printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia2,mes2,ano2, dia1,mes1,ano1);
                  }
                  
                  else if (ano2 > ano1) {
                           printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia1,mes1,ano1, dia2,mes2,ano2);  
                  }
                  
                  else if (ano1 == ano2) {
                       
                       if (mes1 > mes2) {
                          printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia2,mes2,ano2, dia1,mes1,ano1);
                       }      
                       else if (mes2 > mes1) {
                             printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia1,mes1,ano1, dia2,mes2,ano2);
                       }
                       else if (mes1 == mes2) {
                             
                                       if (dia1 > dia2) {
                                          printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia2,mes2,ano2, dia1,mes1,ano1);
                                       }      
                                       else if (dia2 > dia1) {
                                             printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia1,mes1,ano1, dia2,mes2,ano2);
                                       }
                                       else if (dia1 == dia2) {
                                            printf("Datas iguais.\n");
                                       } 
                       }
                  }
  system("PAUSE");	
  return 0;
}
