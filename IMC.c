#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	float peso, altura, imc;
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	imc = peso / (altura*altura);
	if (imc < 18) {
		printf("Magreza.");
	}
	else if (imc >= 18 && imc < 25) {
		printf("Saudável.");
	}
	else if (imc >= 25 && imc < 30) {
		printf("Sobrepeso.");
	}
	else if (imc >= 30) {
		printf("Obesidade.");
	}
	
	return 0;
}
