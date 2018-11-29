#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Crie um algoritmo que receba
	o nome  de 5 alunos e suas 4 notas bimestrais,
	calcule e apresente as médias anuais desses alunos.

*/ 


int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	int i;
	
	for (i = 0; i < 5; i++) {
		
	char nome[10];
	printf("========= Cálculo de Média ===========\n");
	printf("Digite se nome: ");
	scanf("%s",&nome);
	printf("Digite a nota do primeiro Bimestre: \n");
	scanf("%f",&n1);
	printf("Digite a nota do Segundo Bimestre: \n");
	scanf("%f",&n2);
	printf("Digite a nota do Terceiro Bimestre: \n");
	scanf("%f",&n3);
	printf("Digite a nota do Quarto Bimestre: \n");
	scanf("%f",&n4);
	media = (n1 + n2 + n3 + n4) / 4;
	if (media < 5) {
	printf("%s, sua média anual é %2.f, você foi reprovado \n",nome,media);
	}
	else if (media == 5) {
			printf("%s, sua média anual é %2.f, você está em recuperação \n",nome,media);
	}
	else 
			printf("%s, sua média anual é %2.f, você foi aprovado \n",nome,media);
			
	}
	return 0;
}
