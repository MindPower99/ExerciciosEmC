#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	
	Autor: Gabriel jorge
	Problema: 1. Ler 10 elementos de um vetor,
	após finalizar a leitura apresentar todos os valores lidos.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i,i2,n[10];
	puts("================== Trabalhando com Vetor ====================\n");
	for (i = 0; i < 10; i++) {
		printf("Digite o %d numero: \n",i+1);
		scanf("%d",&n[i]);
	}
	i = 0;
	
	for (i2 = 0; i2 < 10; i2++) {
		printf("Número %d: %d \n",i+=1,n[i2]);
	}	
	system("PAUSE");
	return 0;
}
