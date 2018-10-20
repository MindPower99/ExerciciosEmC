#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
   Problema: Crie um programa que receba 3 valores: A,B e C.
    Supondo que cada valor seja um dos lados de um triângulo,
    verifique e informe se estes lados compõem um triângulo
    equilátero, isósceles ou escaleno, informar se não compõem
    um triângulo.
    
*/
int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  float A, B, C;
  puts("Digite o valor do lado A: ");
  scanf("%f",&A);
  puts("Digite o valor do lado B: ");
  scanf("%f",&B);
  puts("Digite o valor do lado C: ");
  scanf("%f",&C);
  
  if((A == B && A == C && B != C) || (A == B && A != C && B == C ) || (A != B && A == C && B == C)) {
       puts("Triângulo Isósceles.");     
  }
  
  else if(A != B && A != C && B != C) {
       puts("Triângulo Escaleno.");     
  } 
  
  else if (A == B && A == C && B == C) {
       puts("Triângulo Equilátero.");     
  }
  
  else if (A > B+C || B > A+C || C > B+A && A < B-C || B < A-C || C < A-B) {
       puts("Não forma um triângulo.");     
  }
       
  
  system("PAUSE");	
  return 0;
}
