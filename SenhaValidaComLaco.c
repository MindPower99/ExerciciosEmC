#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* 
	Autor: Gabriel Jorge
	Problema: 5. Crie um algoritmo que receba uma senha e verifique sua validade.
	Senha v�lida: "asdfg". Se o usu�rio digitar errado mais de 3 vezes finalizar o programa. 
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	char senha[5];
	//char senhacerta[5] = {'a','s','d','f','g'};
	int i = 1;
	puts ("==============Valida��o de Senha com la�o de repeti��o: ================== \n\n");
	while (i < 4) 
	{
		puts("Digite a senha: \n");
		scanf("%s",&senha);
		
		if(strcmp(senha,"asdfg") == 0) {
			puts("Senha correta !\n\n\n ");
			i+=3;
		}
		else {
			puts("Senha inv�lida, digite novamente \n");
			i++;
		}
	}
	

}
