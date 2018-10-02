#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float seg, min, hrs;
	printf("Número de segundos: ");
	scanf("%f",&seg);
	min = seg / 60;
	printf("Número de Minutos %2.f min \n",min);
	hrs = seg / 3600;
	printf("Número de horas: %2.f hrs \n",hrs);
	return 0;
}
