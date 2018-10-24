#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	float A,B,C;
	printf("Digite o valor de A: \n");
	scanf("%f",&A);
	printf("Digite o valor de B: \n");
	scanf("%f",&B);
	printf("Digite o valor de C: \n");
	scanf("%f",&C);
	
	if (A < B && A < C) {
		if(B < C) {
			printf(A);
			printf(B);
			printf(C);
		}
		else {
			printf(A);
			printf(C);
			printf(B);
		}
	}
	
	else 
		if(B < A && B < C) {
			if(A < C) {
				printf(B);
				printf(A);
				printf(C);
			}
			else {
				printf(B);
				printf(C);
				printf(A);
			}
		
		else
			if (A < B) {
				printf(C);
				printf(A);
				printf(B);
			}
			
			else {
				printf(C);
				printf(B);
				printf(A);
			}
		}
	return 0;
}
