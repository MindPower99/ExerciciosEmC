#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  setlocale(LC_ALL, "Portuguese");
	  float A, B, C;
	  int i;
	  
	  puts("==================== Tipo de Triângulo ====================\n");
	  
	  	for (i = 0; i < 5; i++) {
	  
			  puts("\nDigite o valor do lado A: ");
			  scanf("%f",&A);
			  puts("Digite o valor do lado B: ");
			  scanf("%f",&B);
			  puts("Digite o valor do lado C: ");
			  scanf("%f",&C);
			  
			  if (A + B >= C && A + C >= B && B + C >= A)
			         {
			          if (A == B && B == C && C == A){
			             puts ("\nTriangulo Equilatero \n");
			             }
			          else if (A == B || B == C || C == A){
			             puts ("\nTriangulo Isosceles \n");
			             }
			          else if (A != B && B != C && C != A){
			             puts ("\nTriangulo Escaleno \n");
			             }
			         }
			      else
			          printf ("Valores invalidos para formar um triangulo\n");
		}
       
	return 0;
}
