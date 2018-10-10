#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 /* autor: Gabriel Jorge
	problema: Crie um algoritmo que some dois números apresentados pelo usuário.
*/ 


int main() {
	setlocale(LC_ALL, "Portuguese"); 

	printf("============ Soma ============\n");
	float n1, n2, soma;
	printf("Digite um número: \n");
	scanf("%f",&n1);
	printf("Digite outro número: \n");
	scanf("%f",&n2);
	soma = n1 + n2;
	printf("A soma dos números é %2.f \n",soma);
	system("PAUSE");
	return 0;
}
