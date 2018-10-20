#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
   Problema: Crie um programa que receba 3 valores: A,B e C.
    Supondo que cada valor seja um dos lados de um tri�ngulo,
    verifique e informe se estes lados comp�em um tri�ngulo
    equil�tero, is�sceles ou escaleno, informar se n�o comp�em
    um tri�ngulo.
    
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
       puts("Tri�ngulo Is�sceles.");     
  }
  
  else if(A != B && A != C && B != C) {
       puts("Tri�ngulo Escaleno.");     
  } 
  
  else if (A == B && A == C && B == C) {
       puts("Tri�ngulo Equil�tero.");     
  }
  
  else if (A > B+C || B > A+C || C > B+A && A < B-C || B < A-C || C < A-B) {
       puts("N�o forma um tri�ngulo.");     
  }
       
  
  system("PAUSE");	
  return 0;
}
