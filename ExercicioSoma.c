#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese"); 

	float n1, n2, soma;
	printf("Digite um n�mero: ");
	scanf("%f",&n1);
	printf("Digite outro n�mero: ");
	scanf("%f",&n2);
	soma = n1 + n2;
	printf("A soma dos n�meros � %6f \n",soma);
	system("PAUSE");
	return 0;
}
