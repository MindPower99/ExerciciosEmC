#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	puts("=============Elei��es para presidente =============\n");
	int opcao,voto,bolsonaro, haddad, Ciro, Amoedo, Marina, Alckimin,Alvaro,i;
	do {
		puts("Digite o n�mero correspondente a seu candidato: \n 1 - Bolsonaro \n 2 - Haddad \n 3 - Ciro \n 4 - Amoedo \n 5 - Marina \n 6 - Alckimin \n 7 - �lvaro Dias \n 8 - Boulos \n 9 - Daciolo \n");
		scanf("%d",&voto);
		
		switch(voto) {
    			case 1:
    				bolsonaro += 1;
    				break;
    				
    			case 2: 
    				haddad += 1;
    				break;
    				
    			case 3:
    				Ciro += 1;
    				break;
    				
    			case 4:
    				Amoedo += 1;
    				break;
    				
    			case 5:
                     Marina += 1;
                     break;
                 
                 case 6:
                      Alckimin +=1;
                      break;
                      
                 case 7:
                      Alvaro +=1;
                      break;
                      	
    			default: 
    				puts("Digite uma op��o v�lida \n");
		}
		
		puts("Deseja continuar a vota��o ? \n 1 - Sim \n 2 - N�o");
		scanf("%d",&opcao);
		
		if(opcao == 1 ){
			puts("Abrindo outra sess�o...\n");
		}
		
		else {
			if (bolsonaro > haddad && bolsonaro > Ciro && bolsonaro > Amoedo) {
				puts("Bolsonaro � o vencedor ! \n");
			}
			else if (haddad > bolsonaro && haddad > Ciro && haddad > Amoedo) {
				puts("Haddad � o vencedor ! \n");
			}
			
			i++;
		}
	
	} while (i < 1);
	return 0;
}
