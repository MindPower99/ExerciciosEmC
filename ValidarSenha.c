#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	char senha[6];
	char se[6];
	printf("Digite uma nova senha: \n");
	scanf("%s",&se);
	printf("Digite a senha : \n");
	scanf("%s",&senha);
	if(strcmp(senha,se)==0) {
		printf("Senha valida \n");
	}
	else {
		printf("Senha invalida \n");
	}
	system("PAUSE");
	return 0;
	
}
