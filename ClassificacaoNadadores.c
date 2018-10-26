#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Autor: Gabriel Jorge
   Problema: Crie um algoritmo que classifique nadadores
    nas categorias de acordo com sua idade:

            Infantil A- De 5 a 7 anos
            Infantil B- De 8 a 10 anos
            Juvenil A- De 11 a 13 anos
            Juvenil B- De 14 a 17 anos
            Senior - A partir de 18 anos
            
*/
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    puts("========Classificação de categoria de nadadores========/n");
    puts("Digite a idade: ");
    scanf("%d",&idade);
    
    if (idade >= 5 && idade <= 7) {
       puts("Infantil A.");          
    }
    
    else if (idade >= 8 && idade <= 10) {
         puts("Infantil B.");     
    }
    
    else if (idade >= 11 && idade <= 13) {
         puts("Juvenil A.");     
    }
    
    else if (idade >= 14 && idade <= 17) {
         puts("Juvenil B.");     
    }
    
    else if (idade >= 18) {
         puts("Sênior.");     
    }
    
  system("PAUSE");	
  return 0;
}
