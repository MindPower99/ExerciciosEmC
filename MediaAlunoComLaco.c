#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: 3. Crie um algoritmo que receba 4 notas bimestrais,
	de 7 alunos diferentes, calcule e apresebte a m�dia anual de cada aluno.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3,n4,media;
	int aluno = 1;
	printf("==========C�lculo de M�dia Anual com La�o de Repeti��o ==========\n\n\n\n");
	while (aluno < 8) {
		printf("Aluno %d, digite a nota do primeiro Bimestre: \n ",aluno);
		scanf("%f",&n1);
		printf("Aluno %d, digite a nota do primeiro Bimestre: \n ",aluno);
		scanf("%f",&n2);
		printf("Aluno %d, digite a nota do primeiro Bimestre: \n ",aluno);
		scanf("%f",&n3);
		printf("Aluno %d, digite a nota do primeiro Bimestre: \n ",aluno);
		scanf("%f",&n4);
		media = (n1 + n2 + n3 + n4) / 4;
		printf("Sua m�dia anual � %2.f \n\n\n",media);
		media, n1, n2, n3, n4 = 0;
		aluno++;
	}
	return 0;
}
