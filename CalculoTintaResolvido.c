#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  float alt, lar, quan1, quan2, custo, total10, total5, area;
  int op;
  printf("===========Cálculo de quantidade de tinta==========\n");
  printf("Digite a altura da parede: ");
  scanf("%f", &alt);
  printf("Digite a largura da parede: ");
  scanf("%f", &lar);
  area = lar * alt;
  quan1 = area / (3*3);
  quan2 = (area * 3) / (5 * 3);
  custo = (quan1 * 150) + (quan2 * 100);
  printf("1 - A vista ");
  printf("2 - Cheque ");
  scanf("%d", &op);
  if (op == 1) {
     total10 = custo - (custo * 0.10);
     printf("O valor é R$ %2.f \n ",total10);       
  }
  else {
       total5 = custo -(custo * 0.5);
       printf("O valor é R$ %2.f \n",total5);     
  }
  system("PAUSE");	
  return 0;
}
