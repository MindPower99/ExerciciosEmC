#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	char nome[16];
	float nota[4], soma, media;
	int I;
	setlocale(LC_ALL, "Portuguese");
	puts("\n****Trabalhando com VETOR****\n");
	puts("Digite o nome do aluno");
	gets(nome);
	for(I=1;I<=4;I++){
	printf("Digite a %dª nota:", I);
	scanf("%f",&nota[I]);
	}
	puts("\n****Calculando a média****\n");
	for(I=1;I<=4;I++){
	printf("A %dª nota: %2.f\n ",I, nota[I]);
	}
	soma = nota[1] + nota[2] + nota[3] + nota[4]; 
	media=soma/4;
	printf("\n Aluno: %s", nome);
	printf("\n A média do aluno: %2.f\n\n", media);
	system("PAUSE");
    return 0;	
}

