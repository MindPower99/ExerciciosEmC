#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float multa;
	int quantidade;
	printf("Quilos pescados: ");
	scanf("%d",&quantidade);
	if (quantidade <= 50) {
		printf("Quantidade permitida bro ");
	}
	else {
		multa = (quantidade - 50) * 4;
		printf("Quantidade acima da permitida, multa de R$ %2.f \n",multa);
	}
	system("PAUSE");
	return 0;
}
