#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float turno;
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
