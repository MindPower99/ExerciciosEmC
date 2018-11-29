#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 	Autor: Gabriel Nascimento
   	Problema: Crie um algoritmo que receba a idade
	de 5 nadadores e os classifique de acordo com sua categoria:
            Infantil A- De 5 a 7 anos
            Infantil B- De 8 a 10 anos
            Juvenil A- De 11 a 13 anos
            Juvenil B- De 14 a 17 anos
            Senior - A partir de 18 anos
*/

int main(int argc, char *argv[]) {	
	setlocale(LC_ALL,"Portuguese");
    int idade,i;
    puts("========Classificação de categoria de nadadores========/n");
    
    for (i = 0; i < 5;i++) {
    
    puts("\nDigite a idade: ");
    scanf("%d",&idade);
    
    if (idade >= 5 && idade <= 7) {
       puts("Infantil A.\n");          
    }
    
    else if (idade >= 8 && idade <= 10) {
         puts("Infantil B.\n");     
    }
    
    else if (idade >= 11 && idade <= 13) {
         puts("Juvenil A.\n");     
    }
    
    else if (idade >= 14 && idade <= 17) {
         puts("Juvenil B.\n");     
    }
    
    else if (idade >= 18) {
         puts("Sênior.\n");     
    }
    
	}
	return 0;
}
