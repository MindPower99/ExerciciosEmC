#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* autor: Gabriel Jorge
	      problema: Crie um algoritmo que guarde
          uma senha e depois a compare dizendo
          se é válida ou não.
*/ 

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
