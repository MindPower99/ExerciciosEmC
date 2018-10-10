#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Escreva um algoritmo que leia o custo de fábrica
	e apresente o preço final.
*/ 


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float custocons, custofabr;
	printf("========== Calcular custo do consumidor ============\n");
	printf("Digite o custo de fábrica em R$ \n");
	scanf("%f",&custofabr);
	if (custofabr > 10000.00) {
		custocons = (custofabr +(28*100/100)+(45*100/100))+ custofabr;
		printf("O custo do consumidor é R$ %2.f \n",custocons);
	}
	else {
		custocons = custofabr + (28*100/100) + (50*100/100) + custofabr;
		printf("O custo do consumidor é R$ %2.f \n",custocons);

	}
	system("pause");
	return 0;
}
