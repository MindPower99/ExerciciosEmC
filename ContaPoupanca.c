#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* autor: Gabriel Jorge
	problema: Crie um algoritmo que controle uma conta poupança que foi aberta
	 com um depósito de R$500,00. Sendo a remuneração de 1% ao mês de juros. A presente o saldo após três meses*/ 

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  float deposito;
  deposito = 500;
  printf("========= Cálculo de rendimento mensal de depósito: ========= \n");
  printf("Primeiro mês R$ %.2f \n",deposito);
  deposito = (0.01 * deposito) + deposito;
  printf("Segundo mês R$ %.2f \n",deposito);
  deposito = (0.01 * deposito) + deposito;
  printf("Terceiro mês R$ %.2f \n",deposito);
  deposito = (0.01 * deposito) + deposito;
  printf("Quarto mês R$ %.2f \n",deposito);
  system("PAUSE");	
  return 0;
}
