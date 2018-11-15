#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float altura , pesoideal;
	int sexo, i = 1;
	
	while (i < 4) 
	{
		puts("Digite sua altura: \n");
		scanf("%f",&altura);
		puts("Digite o número correspondente ao seu sexo: \n 1 - Masculino \n 2 - Feminino \n");
		scanf("%d",&sexo);
		if (sexo == 1) {
			pesoideal = (72.7 * altura) - 58;
			printf("Seu peso ideal é: %2.f kg \n\n\n",pesoideal);
			i++;
		}
		
		else if (sexo == 2) {
			pesoideal = (62.1 * altura) - 44.7;
			printf("Seu peso ideal é: %2.f kg \n\n\n",pesoideal);
			i++;
		}
		else {
			puts("Digite uma opção válida. ");
		}
	}
	
	return 0;
}
