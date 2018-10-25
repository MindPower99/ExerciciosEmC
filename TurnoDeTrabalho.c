#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
	Problema: Crie um programa que receba a hora do início do turno
	 do trabalho e exiba na tela se o turno é manhã, tarde ou noite. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float turno;
	printf("============Ver período do turno ============\n");
	printf("Digite o horário do início do turno: \n");
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
