#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float imc, peso, altura;
	int i = 1,opcao;
	puts("==========C�lculo de IMC com la�o de repeti��o ==========\n\n");
	
	while (i < 2) {
		puts("Informe seu peso: \n");
		scanf("%f",&peso);
		puts("Informe sua altura: \n");
		scanf("%f",&altura);
		imc = peso / (altura * altura);
		 if (imc < 18) {
		 	puts("Magreza \n");
		 }
		 else if (imc >= 18 && imc <= 24.9) {
		 	puts("Saud�vel \n");
		 }
		 else if (imc >= 25 && imc <= 29.9) {
		 	puts("Sobrepeso \n");
		 }
		 else if (imc >= 30) {
		 	puts("Obesidade \n");
		 }
		
		puts("Deseja continuar o c�lculo ? \n 1 - sim \n 2 - n�o");
		scanf("%f",&opcao);
		
		if(opcao == 1) {
			puts("continuando...\n");
		}
		else {
			i++;
		}
	}
	return 0;
}
