#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	char nome[8];
	float nota[4], soma, media;
	int I;
	setlocale(LC_ALL, "Portuguese");
	puts("\n****Trabalhando com VETOR****\n");
	puts("Digite o nome do aluno");
	gets(nome);
	for(I=1;I<=4;I++){
	printf("Digite a %d� nota:", I);
	scanf("%f",&nota[I]);
	}
	puts("\n****Calculando a m�dia****\n");
	for(I=1;I<=4;I++){
	printf("A %d� nota: %.1f\n ",I, nota[I]);
	soma=soma+nota[I];
	}
	media=soma/4;
	printf("\n Aluno: %s", nome);
	printf("\n A m�dia do aluno: %.1f\n\n", media);
	system("PAUSE");
    return 0;	
}

