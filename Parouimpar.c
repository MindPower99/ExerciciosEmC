#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, resto;
	printf("Digite um Número: ");
	scanf("%d",&n);
	resto = n % 2;
	if (resto == 0) {
		printf("Este número é par");
	}
	else
		printf("Esse número é impar");
	return 0;
}
