#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Crie um algoritmo que receba
	 o nome  do aluno e suas 4 notas bimestrais,
	 calcule e apresente a m�dia anual desse aluno.

*/ 


int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	char nome[10];
	printf("========= C�lculo de M�dia ===========\n");
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
	printf("%s, sua m�dia anual � %2.f, voc� foi reprovado \n",nome,media);
	}
	else if (media == 5) {
			printf("%s, sua m�dia anual � %2.f, voc� est� em recupera��o \n",nome,media);
	}
	else 
			printf("%s, sua m�dia anual � %2.f, voc� foi aprovado \n",nome,media);
	return 0;
}
