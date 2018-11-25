#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	puts("=============Eleições para presidente =============\n");
	int opcao,voto,bolsonaro, haddad, Ciro, Amoedo, Marina, Alckimin,Alvaro, Boulos, Daciolo,i1 = 0,i2 = 0,certeza,limiterros = 0;
	char SenhaMesario[] = "senhamesario";
	char SenhaChefeDeUrna[] = "senhachefedeurna";
	char SenhaC[20];

	do {
		puts("Digite o número correspondente a seu candidato: \n 1 - Bolsonaro \n 2 - Haddad \n 3 - Ciro \n 4 - Amoedo \n 5 - Marina \n 6 - Alckimin \n 7 - Álvaro Dias \n 8 - Boulos \n 9 - Daciolo \n");
		scanf("%d",&voto);
		switch(voto) {
    			case 1:
    				bolsonaro += 1;
    				puts("Seu voto foi computado ! \n");
    				break;
    				
    			case 2: 
    				haddad += 1;
    				puts("Seu voto foi computado ! \n");
    				break;
    				
    			case 3:
    				Ciro += 1;
    				puts("Seu voto foi computado ! \n");
    				break;
    				
    			case 4:
    				Amoedo += 1;
    				puts("Seu voto foi computado ! \n");
    				break;
    				
    			case 5:
                     Marina += 1;
                     puts("Seu voto foi computado ! \n");
                     break;
                 
                 case 6:
                      Alckimin +=1;
                      puts("Seu voto foi computado ! \n");
                      break;
                      
                 case 7:
                      Alvaro +=1;
                      puts("Seu voto foi computado ! \n");
                      break;
                      
                 case 8:
                      Boulos +=1;
                      puts("Seu voto foi computado ! \n");
                      break;
                      
                 case 9:
                      Daciolo +=1;
                      puts("Seu voto foi computado ! \n");
                      break;
                      
                 case 10:
                      puts("Tem certeza que deseja encerrar a votação ? \n 1 - Sim \n 2 - Não \n");
                      scanf("%d",&certeza);
                      
                      if (certeza == 1) {
                                  char SenhaM[15];
                                  do {
                                  puts("Digite sua senha, para encerrar a votação: ");
                                  scanf("%s",&SenhaM);
                                  
                                  
                                  if (strcmp(SenhaM,SenhaMesario)==0) {
                                     puts("Encerrando a votação..\n");
                                     i2++;           
                                  }
                                  else {
                                       puts("Senha incorreta.\n");
                                       limiterros++;     
                                  }
                                  
                                  } while (limiterros < 3 && i2 == 0);
                      }
                                          
                      else if (certeza == 2) {
                           puts("Voltando com a votação..\n");
                      }
                                  
                      else if (certeza != 1 && certeza != 2) {
                           puts("Digite uma opção válida..\n");     
                      }
                      
                      break;
                      
                 case 11: 
                      
                      puts("Digite a senha de Chefe de Urna.. \n");
                      scanf("%s",&SenhaC);
                      
                      if (strcmp(SenhaC,SenhaChefeDeUrna)==0) {
                         puts("============ Ranking Votação ==================\n");
                         
                         if (bolsonaro > haddad && bolsonaro > Ciro && bolsonaro > Amoedo && bolsonaro > Marina && bolsonaro > Alckimin && bolsonaro > Alvaro && bolsonaro > Boulos && bolsonaro > Daciolo) {
  				            puts("Bolsonaro é o vencedor ! \n");
  				            printf("Jair Bolsonaro = %d /n",bolsonaro);
       				        printf("Fernando Haddad = %d /n",haddad);
       				        printf("Ciro Gomes = %d /n",Ciro);
       				        printf("João Amoedo = %d /n",Amoedo);
       				        printf("Marina Silva = %d /n",Marina);
       				        printf("Geraldo Alckimin = %d /n",Alckimin);
       				        printf("Álvaro Dias = %d /n",Alvaro);
       				        printf("Guilherme Boulos = %d /n",Boulos);
       				        printf("Cabo Daciolo = %d /n",Daciolo);
            			 }
            		  	 else if (haddad > bolsonaro && haddad > Ciro && haddad > Amoedo) {
       				          puts("Haddad é o vencedor ! \n");
            			 }
                                                                 
                      }
                      
                      else {
                           puts("Senha incorreta.\n");     
                      }
                                   	
    			default: 
    				puts("Digite uma opção válida \n"); 
   				}
   				
		
		} while (i2 < 1);
       /*if (i2 > 0) {
            		puts("Deseja continuar a votação ? \n 1 - Sim \n 2 - Não");
            		scanf("%d",&opcao);
            		
            		if(opcao == 1 ){
            			puts("Abrindo outra sessão...\n");
            			i1--;
            		}
            		
            		else {
            			if (bolsonaro > haddad && bolsonaro > Ciro && bolsonaro > Amoedo) {
            				puts("Bolsonaro é o vencedor ! \n");
            			}
            			else if (haddad > bolsonaro && haddad > Ciro && haddad > Amoedo) {
            				puts("Haddad é o vencedor ! \n");
            			}
            			
            			i1++;
            		}
              }*/
	
	return 0;
}

