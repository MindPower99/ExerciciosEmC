#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
   Problema: Crie um algoritmo que receba 4 notas do aluno
   e verifique se o mesmo foi aprovado ou reprovado com um
   dos seguintes conceitos:
   
   Aprovado:
            A- Maior igual à 9
            B- Maior igual à 7 e menor que 9
            C- Maior igual a 5 e menor que 7
   Reprovado: 
              D- Maior igual à 2,5 e menor que 5
              E- Menor que 2,5
   */

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, n3, n4, media;
    puts("======= Cálculo de Média ========\n");
    puts("Digite a primeira nota: ");
    scanf("%f",&n1);
    puts("Digite a segunda nota: ");
    scanf("%f",&n2);
    puts("Digite a terceira nota: ");
    scanf("%f",&n3);
    puts("Digite a quarta nota: ");
    scanf("%f",&n4);
    media = (n1 + n2 + n3 + n4 )/ 4;
          if (media < 2.5) {
             puts("Você reprovou com E.");
          }
          
          else if (media >= 2.5 && media < 5) {
               puts("Você reprovou com D.");     
          }
          
          else if (media >= 5 && media < 7) {
               puts("Você foi aprovado com C.");     
          }
          
          else if (media >= 7 && media < 9) {
               puts("Você foi aprovado com B.");     
          }
          
          else if (media >= 9) {
               puts("Você foi aprovado com A.");     
          }
  
  system("PAUSE");	
  return 0;
}
