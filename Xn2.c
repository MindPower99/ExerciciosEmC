#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float x, n, resultado;
	printf("Digite o valor de N: \n");
	scanf("%f",&n);
	printf("Digite o valor de X: \n");
	scanf("%f",&x);
	resultado = x * (n*n);
	printf("O resultado de (X*N)**2 é: %2.f\n",resultado); 
	return 0;
}
