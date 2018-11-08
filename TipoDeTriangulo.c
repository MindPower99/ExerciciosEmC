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
  
  if (A + B >= C && A + C >= B && B + C >= A)
         {
          if (A == B && B == C && C == A){
             puts ("Triangulo Equilatero \n");
             }
          else if (A == B || B == C || C == A){
             puts ("Triangulo Isosceles \n");
             }
          else if (A != B && B != C && C != A){
             puts ("Triangulo Escaleno \n");
             }
         }
      else
          printf ("Valores invalidos para formar um triangulo");
       
  
  system("PAUSE");	
  return 0;
}
