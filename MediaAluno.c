#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	char nome[10];
	printf("Digite se nome: ");
	scanf("%s",&nome);
	printf("Digite o valor da primeira nota: \n");
	scanf("%f",&n1);
	printf("Digite o valor da primeira nota: \n");
	scanf("%f",&n2);
	printf("Digite o valor da primeira nota: \n");
	scanf("%f",&n3);
	printf("Digite o valor da primeira nota: \n");
	scanf("%f",&n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("%s, sua média é %f \n",nome,media);
	return 0;
}
