#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Crie um algoritmo que controle uma conta poupan�a que foi aberta
	 com um dep�sito de R$500,00. Sendo a remunera��o de 1% ao m�s de juros. A presente o saldo ap�s tr�s meses*/ 

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  float deposito;
  deposito = 500;
  printf("========= C�lculo de rendimento mensal de dep�sito: ========= \n");
  printf("Primeiro m�s R$ %.2f \n",deposito);
  deposito = (0.01 * deposito) + deposito;
  printf("Segundo m�s R$ %.2f \n",deposito);
  deposito = (0.01 * deposito) + deposito;
  printf("Terceiro m�s R$ %.2f \n",deposito);
  deposito = (0.01 * deposito) + deposito;
  printf("Quarto m�s R$ %.2f \n",deposito);
  system("PAUSE");	
  return 0;
}
