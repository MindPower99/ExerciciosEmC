#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 	Autor: Gabriel Nascimento
	Problema: Crie um algoritmo que calcule o sal�rio l�quido  de 10 funcion�rios
	sabendo que: A cada um dependente, este recebe R$300,00 de b�nus; O valor do 
	seu sal�rio bruto �: Valor Hora * Horas Trabalhadas no M�s; A aplica��o ir� coletar
	o n�mero de Dependentes, Valor Hora, Hora Trabalhada e apresentar� o Valor Bruto
	e Valor Liquido .

*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int i = 1, dependentes;
	float salarioL, salarioB, valorHora, HorasT;
	puts("==========Sal�rio L�quido com La�o de Repeti��o: ==========\n");
	do {
		puts("Digite o n�mero de dependentes: \n");
		scanf("%d",&dependentes);
		puts("Digite o valor Hora: \n");
		scanf("%f",&valorHora);
		puts("Digite as Horas trabalhadas: \n");
		scanf("%f",&HorasT);
		salarioB = valorHora * HorasT;
		salarioL = salarioB + (dependentes * 300);
		printf("O sal�rio Bruto �: %f \n",salarioB);
		printf("O sal�rio L�quido �: %f \n\n\n ",salarioL);
		i++;
	}
	while (i < 11);
	return 0;
}
