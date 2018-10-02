#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	char senha[6];
	char se[5] = {'a','s','d','f','g'};
	printf("Digite a senha : \n");
	scanf("%s",&senha);
	if(strcmp(senha,se)==0) {
		printf("Senha valida \n");
	}
	else {
		printf("Senha invalida \n");
	}
	return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char senha[6];
	char se[5] = {'a','s','d','f','g'};
	printf("Digite a senha: \n");
	scanf("%s",&senha);
	if(strcmp(senha,se)==0) {
		printf("Senha inválida.\n");
	}
	else {
		printf("Senha válida. \n");
}
	system("PAUSE");
	return 0;
}*/
