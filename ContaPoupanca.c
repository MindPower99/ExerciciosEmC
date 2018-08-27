#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  
  float deposito;
  deposito = 500;
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
