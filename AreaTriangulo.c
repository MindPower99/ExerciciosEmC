#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  float base,altura,area;
  printf("Digite o valor da base: ");
  scanf("%f",&base);
  printf("Digite o valor da altura: ");
  scanf("%f",&altura);
  area = base * altura / 2;
  printf("O valor da area é de: %f \n",area);
  
  system("PAUSE");	
  return 0;
}
