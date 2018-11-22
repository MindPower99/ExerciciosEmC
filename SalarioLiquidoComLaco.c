#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 	Autor: Gabriel Nascimento
	Problema: Crie um algoritmo que calcule o salário líquido  de 10 funcionários
	sabendo que: A cada um dependente, este recebe R$300,00 de bônus; O valor do 
	seu salário bruto é: Valor Hora * Horas Trabalhadas no Mês; A aplicação irá coletar
	o número de Dependentes, Valor Hora, Hora Trabalhada e apresentará o Valor Bruto
	e Valor Liquido .

*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int i = 1, dependentes;
	float salarioL, salarioB, valorHora, HorasT;
	puts("==========Salário Líquido com Laço de Repetição: ==========\n");
	do {
		puts("Digite o número de dependentes: \n");
		scanf("%d",&dependentes);
		puts("Digite o valor Hora: \n");
		scanf("%f",&valorHora);
		puts("Digite as Horas trabalhadas: \n");
		scanf("%f",&HorasT);
		salarioB = valorHora * HorasT;
		salarioL = salarioB + (dependentes * 300);
		printf("O salário Bruto é: %f \n",salarioB);
		printf("O salário Líquido é: %f \n\n\n ",salarioL);
		i++;
	}
	while (i < 11);
	return 0;
}
