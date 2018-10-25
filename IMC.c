#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Jorge
	Problema: O indice de massa corporal (Peso / Alt²) avalia o nível de gordura de cada pessoa
	e é adotado pela Organização Mundial da Saúde (OMS). O IMC de uma pessoa é dado pela divisão
	da massa em kg pela altura em metros elevado ao quadrado. Elabore um algoritmo que, a partir
	da massa e da altura informados pelo usuário, calcule e apresente seu IMC e sua classificação
	conforme a tabela a seguir:
	< 18 Magreza
	18 a 24.9 Saudável
	25 a 29.9 Sobrepeso
	>= 30 Obesidade
	
	   */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	float peso, altura, imc;
	printf("============ Cálculo de Indice de Massa Corporal =========== \n");
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	imc = peso / (altura*altura);
	if (imc < 18) {
		printf("IMC de %2.f, magreza.",imc);
	}
	else if (imc >= 18 && imc < 25) {
		printf("IMC de %2.f, saudável.",imc);
	}
	else if (imc >= 25 && imc < 30) {
		printf("IMC de %2.f, sobrepeso.",imc);
	}
	else if (imc >= 30) {
		printf("IMC de %2.f, obesidade.",imc);
	}
	
	return 0;
}
