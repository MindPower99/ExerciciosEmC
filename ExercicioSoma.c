#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /* autor: Gabriel Jorge
	problema: Crie um algoritmo que some dois n�meros apresentados pelo usu�rio.
*/ 


int main() {
	setlocale(LC_ALL, "Portuguese"); 

	printf("============ Soma ============\n");
	float n1, n2, soma;
	printf("Digite um n�mero: \n");
	scanf("%f",&n1);
	printf("Digite outro n�mero: \n");
	scanf("%f",&n2);
	soma = n1 + n2;
	printf("A soma dos n�meros � %2.f \n",soma);
	system("PAUSE");
	return 0;
}
