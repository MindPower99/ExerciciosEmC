#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Jorge
	Problema: Crie um algoritmo que calcule e apresente a área externa
	de uma lata, onde é fornecido pelo usuário somente o Raio e Altura.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float area, raio, altura;
	int i;
	puts("======================= Cálculo de área de lata ========================\n");
	
	for (i = 0; i < 5; i++) {
		
		puts("\nDigite o valor da altura da lata em cm: ");
		scanf("%f",&altura);
		puts("Digite o valor do raio da lata em cm: ");
		scanf("%f",&raio);
		area = 2 * 3.14 * raio * (raio * altura);
		printf("A área desta lata é de %2.f centímetros \n",area);
	}
	return 0;
}
