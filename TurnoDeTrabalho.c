#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
	Problema: Crie um programa que receba a hora do in�cio do turno
	 do trabalho e exiba na tela se o turno � manh�, tarde ou noite. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float turno;
	printf("============Ver per�odo do turno ============\n");
	printf("Digite o hor�rio do in�cio do turno: \n");
	scanf("%f",&turno);
	if (turno >= 5 && turno <= 12.59) 
	
		printf("Turno Matutino.");
		
	else 
		if (turno >= 13 && turno <= 20.59) 
		
			printf("Turno da tarde.");
			
		else 
		
			printf("Turno da noite.");
			
	return 0;
}
