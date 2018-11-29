#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
	Problema: Refa�a o algoritmo para calcular 5 equa��es do 2� grau,
	levando em considera��o a an�lise da exist�ncia do X1 e X2 .
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
    float a, b, c,   
          delta,     
          sqrtdelta,  
        raiz1,raiz2;  
    int i;

	for (i = 0; i < 5; i++) {
	
        printf("Equa��o do 2o grau: ax� + bx + cx = 0\n");

        printf("Entre com o valor de a: ");
        scanf("%f", &a);

        printf("Entre com o valor de b: ");
        scanf("%f", &b);

        printf("Entre com o valor de c: ");
        scanf("%f", &c);

        if(a != 0)
        {

            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);


            if(delta >= 0)
            {
                raiz1 = (-b + sqrtdelta)/(2*a);
                raiz2 = (-b - sqrtdelta)/(2*a);
                printf("Ra�zes: %.2f e %.2f", raiz1, raiz2);
            }

            else
            {
                delta = -delta;
                sqrtdelta = sqrt(delta);
                printf("Ra�z 1: %.2f + i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
                printf("Ra�z 2: %.2f - i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));

            }

        }
        else
            printf("Coeficiente 'a' inv�lido. N�o � uma equa��o do 2o grau");
        }
	return 0;
}
