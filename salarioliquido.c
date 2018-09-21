#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float salarioliquido, bonus, salariobruto, horast, valorhora;
	int dependentes;
	printf("Digite o número de dependentes ");
	scanf("%d", &dependentes);
	bonus = dependentes * 300;
	printf("Digite o valor/hora: ");
	scanf("%f",&valorhora);
	printf("Digite o numero de horas trabalhadas ");
	scanf("%f",&horast);
	salariobruto = valorhora * horast;
	salarioliquido = salariobruto + bonus;
	printf("O salário liquido é R$ %f",salarioliquido);
	
	return 0;
}
