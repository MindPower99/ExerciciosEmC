#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Escreva um algoritmo que leia um valor em segundos
	 e apresente quantas horas e quantos minutos esse valor corresponde
*/ 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("========= Converter Segundos em Minutos e horas: =========\n");
	float seg, min, hrs;
	printf("N�mero de segundos: ");
	scanf("%f",&seg);
	if (seg < 0) {
		printf("Digite um n�mero v�lido. ");
	}
	else {
	min = seg / 60;
	printf("N�mero de Minutos %2.f min \n",min);
	hrs = seg / 3600;
	printf("N�mero de horas: %2.f hrs \n",hrs);
	return 0;
	}
	
}
