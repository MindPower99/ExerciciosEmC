#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float altura, pesoid;
	char nome[15];
	int sexo;
	printf("Digite sua altura : \n");
	scanf("%f",&altura);
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	printf("Digite seu sexo \n 1 - Masculino \n 2 - Feminino \n");
	scanf("%d",&sexo);
	if (sexo == 1) {
		pesoid = (72.7 * altura) - 58;
		printf("%s, seu peso ideal é: %2.f kg \n",nome,pesoid);
	}
	else {
		pesoid = (62.1 * altura) - 44.7;
		printf("%s, seu ideal é: %2.f kg \n",nome,pesoid);
	}
	system("PAUSE");
	return 0;
}
