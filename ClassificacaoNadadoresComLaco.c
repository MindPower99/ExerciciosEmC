#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
