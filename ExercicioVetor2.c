#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 	Autor: Gabriel Jorge
	Problema: Ler 10 elementos de um vetor A e a partir
	do índice, verificar se o índice é par, ser for multiplique
	o elemento por 5, senão some o elemento com 5. Os resultados
	das operações devem ser armazenados em um vetor B de mesma dimensão.
	Apresentar o vetor A e vetor b ao final.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int VetorA[10];
	int VetorB[10];
	int resto;
	int i;
	
	for (i = 1; i < 11;i++) {
		printf("Digite o %dº número: \n",i);
		scanf("%d",&VetorA[i]);
		resto = VetorA[i];
		resto = resto % 2;
		if (resto == 0) {
            VetorB[i] = VetorA[i] * 5;       
        }
        else {
            VetorB[i] = VetorA[i] + 5;     
        }
	}
    for (i = 1; i < 11; i++) {
        printf("O %dº valor do VetorA é: %d\n",i,VetorA[i]);
    } 
    puts("");
    puts("");
    for (i = 1; i < 11; i++) {
        printf("O %d valor do VetorB é: %d\n",i,VetorB[i]);   
    }
    system("PAUSE");
	
	return 0;
}
