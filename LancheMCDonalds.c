#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	printf("Digite o n�mero correspondente ao lanche desejado: \n 1 - BigMac \n 2 - Quarteir�o \n 3 - MacChicken \n 4 - Cheddar MacMelt \n 5 - MacMax \n");
	scanf("%d",&opcao);
	
	switch (opcao) {
		case 1: 
			printf("Voc� escolheu o Big MC !");
			break;
			
		case 2: 
			printf("Voc� escolheu o Quarteir�o !");
			break;
			
		case 3:
			printf("Voc� escolheu o MacChicken !");
			break;
			
		case 4:
			printf("Voc� escolheu o Cheddar MacMelt !");
			break;
			
		case 5:
			printf("Voc� escolheu o MacMax !");
			break;
			
		default:
			printf("Digite um n�mero v�lido.");
			
	}
	return 0;
}
