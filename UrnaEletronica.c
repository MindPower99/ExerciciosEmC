#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	puts("=============Elei��es para presidente =============\n");
	int opcao,voto,ConfirmaVoto = 0,bolsonaro = 0, haddad = 0, Ciro = 0, Amoedo = 0, Marina = 0, Alckimin = 0,Alvaro = 0, Boulos = 0, Daciolo = 0,i1 = 0,i2 = 0,i3 = 0,certeza,limiterros = 0,caso10, caso11;
	char SenhaMesario[] = "senhamesario";
	char SenhaChefeDeUrna[] = "senhachefedeurna";
	char SenhaC[25];
	char SenhaM[15];
	char confirma[10];
	
	puts("======================== Urna Eletr�nica ==========================\n");
	
	while (i3 == 0) {
	puts("Senha do chefe de urna: ");
	scanf("%s",&SenhaC);
	
		if (strcmp(SenhaC,SenhaChefeDeUrna)==0) {
			i3++;
				while (i1 == 0) {
					
					do {
                        if (ConfirmaVoto > 0) {
                           ConfirmaVoto--;                 
                        }
                        puts("Digite a senha para iniciar a vota��o..");
                        scanf("%s",&SenhaM);
                        
                        if (strcmp(SenhaM,SenhaMesario)==0) {
						
						while(ConfirmaVoto == 0) {
                                           
        						puts("\n\nDigite o n�mero correspondente a seu candidato: \n 1 - Bolsonaro \n 2 - Haddad \n 3 - Ciro \n 4 - Amoedo \n 5 - Marina \n 6 - Alckimin \n 7 - �lvaro Dias \n 8 - Boulos \n 9 - Daciolo \n");
        						scanf("%d",&voto);
        						switch(voto) {
        				    			case 1:
                                             puts("Voc� votou em Bolsonaro. Digite 'OK' para confirmar seu voto: ");
                                             scanf("%s",&confirma);
                                             
                                             if (strcmp(confirma,"ok")==0) {
          				                        bolsonaro += 1;
        			    				        puts("Seu voto foi computado ! \n");
        			    				        ConfirmaVoto++;
        			    				     
                                             }
                                             else {
                                                  puts("Voltando processo de vota��o..\n");     
                                             }
        				    				break;
        				    				
        				    			case 2: 
                                             puts("Voc� votou em Haddad. Digite 'OK' para confirmar seu voto: ");
                                             scanf("%s",&confirma);
                                             
                                             if(strcmp(confirma,"ok")==0) {
                                                 haddad += 1;
       				    				         puts("Seu voto foi computado ! \n");
       				    				         ConfirmaVoto++;
       				    				         
                                             }
                                             else {
                                                  puts("Voltando processo de vota��o..\n");     
                                             }
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
        				                      puts("Tem certeza que deseja encerrar a vota��o ? \n 1 - Sim \n 2 - N�o \n");
        				                      scanf("%d",&certeza);
        				                      
        				                      if (certeza == 1) {
        				                                  do {
        				                                  puts("Digite sua senha, para encerrar a vota��o: ");
        				                                  scanf("%s",&SenhaC);
        				                                  
        				                                  
        				                                  if (strcmp(SenhaC,SenhaChefeDeUrna)==0) {
        				                                     puts("Encerrando a vota��o ! Aperte '0' para confirmar.. \n");
        				                                     scanf("%d",&caso10);
        													 //i3--;	
        				                                     i2++;
        													 i1++;           
        				                                  }
        				                                  else {
        				                                       puts("Senha incorreta.\n");
        				                                       limiterros++;
        				                                       puts("Voc� tem apenas 3 chances ao todo / aperte '0' pra retornar a vota��o");
        				                                       scanf("%d",&caso10);    
        				                                  }
        				                                  
        				                                  } while (limiterros < 3 && i2 == 0);
        				                      }
        				                                          
        				                      else if (certeza == 2) {
        				                           puts("Voltando com a vota��o ! Tecle '0' para continuar..\n");
        				                           scanf("%d",&caso10);
        				                      }
        				                                  
        				                      else if (certeza != 1 && certeza != 2) {
        				                           puts("Digite uma op��o v�lida ! Digite '0' para continuar.. \n"); 
        				                           scanf("%d",&caso10);
        				                               
        				                      }
        				                      
        				                      break;
        				                      
        				                 case 11: 
        				                      
        				                      puts("Digite a senha de Chefe de Urna.. \n");
        				                      scanf("%s",&SenhaC);
        				                      
        				                      if (strcmp(SenhaC,SenhaChefeDeUrna)==0) {
        				                                                              
        				                      puts("============ Ranking Vota��o ==================\n");
        				                                                           
        				                             if (bolsonaro > haddad && bolsonaro > Ciro && bolsonaro > Amoedo && bolsonaro > Marina && bolsonaro > Alckimin && bolsonaro > Alvaro && bolsonaro > Boulos && bolsonaro > Daciolo) {
        				                                  printf("Bolsonaro � o vencedor ! \n\n");
        				           				          printf("Jair Bolsonaro = %d \n",bolsonaro);
        				                                  printf("Fernando Haddad = %d \n",haddad);
        				          				          printf("Ciro Gomes = %d \n",Ciro);
        				          				          printf("Jo�o Amoedo = %d \n",Amoedo);
        				          				          printf("Marina Silva = %d \n",Marina);
        				          				          printf("Geraldo Alckimin = %d \n",Alckimin);
        				          				          printf("�lvaro Dias = %d \n",Alvaro);
        				          				          printf("Guilherme Boulos = %d \n",Boulos);
        				          				          printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        				          				          puts("Aperte '0' para retornar para a vota��o");
        				          				          scanf("%d",&caso11);
        				                			 }
        				                		  	 else if (haddad > bolsonaro && haddad > Ciro && haddad > Amoedo && haddad > Marina && haddad > Alckimin && haddad > Alvaro && haddad > Boulos && haddad > Daciolo)  {
        				           				          printf("Haddad � o vencedor ! \n\n");
        				           				          printf("Jair Bolsonaro = %d \n",bolsonaro);
        				                                  printf("Fernando Haddad = %d \n",haddad);
        				          				          printf("Ciro Gomes = %d \n",Ciro);
        				          				          printf("Jo�o Amoedo = %d \n",Amoedo);
        				          				          printf("Marina Silva = %d \n",Marina);
        				          				          printf("Geraldo Alckimin = %d \n",Alckimin);
        				          				          printf("�lvaro Dias = %d \n",Alvaro);
        				          				          printf("Guilherme Boulos = %d \n",Boulos);
        				          				          printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        				          				          puts("Aperte '0' para retornar para a vota��o");
        				          				          scanf("%d",&caso11);
        				                			 }
        				                			 else if (Ciro > bolsonaro && Ciro > haddad && Ciro > Amoedo && Ciro > Marina && Ciro > Alckimin && Ciro > Alvaro && Ciro > Boulos && Ciro > Daciolo) {
        				                                  printf("Ciro � o vencedor ! \n\n");
        				           				          printf("Jair Bolsonaro = %d \n",bolsonaro);
        				                                  printf("Fernando Haddad = %d \n",haddad);
        				          				          printf("Ciro Gomes = %d \n",Ciro);
        				          				          printf("Jo�o Amoedo = %d \n",Amoedo);
        				          				          printf("Marina Silva = %d \n",Marina);
        				          				          printf("Geraldo Alckimin = %d \n",Alckimin);
        				          				          printf("�lvaro Dias = %d \n",Alvaro);
        				          				          printf("Guilherme Boulos = %d \n",Boulos);
        				          				          printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        				          				          puts("Aperte '0' para retornar para a vota��o");
        				          				          scanf("%d",&caso11);
        				                                  }
        				                              else if (Amoedo > bolsonaro && Amoedo > haddad && Amoedo > Ciro && Amoedo > Marina && Amoedo > Alckimin && Amoedo > Alvaro && Amoedo > Boulos && Amoedo > Daciolo) {
        				                                  printf("Amoedo � o vencedor ! \n\n");
        				           				          printf("Jair Bolsonaro = %d \n",bolsonaro);
        				                                  printf("Fernando Haddad = %d \n",haddad);
        				          				          printf("Ciro Gomes = %d \n",Ciro);
        				          				          printf("Jo�o Amoedo = %d \n",Amoedo);
        				          				          printf("Marina Silva = %d \n",Marina);
        				          				          printf("Geraldo Alckimin = %d \n",Alckimin);
        				          				          printf("�lvaro Dias = %d \n",Alvaro);
        				          				          printf("Guilherme Boulos = %d \n",Boulos);
        				          				          printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        				          				          puts("Aperte '0' para retornar para a vota��o");
        				          				          scanf("%d",&caso11);
        				                              }
        				                              
        				                              else if (Marina > bolsonaro && Marina > haddad && Marina > Ciro && Marina > Amoedo && Marina > Alckimin && Marina > Alvaro && Marina > Boulos && Marina > Daciolo) {
        				                              		printf("Marina � a vencedora ! \n\n");
        				           				         	printf("Jair Bolsonaro = %d \n",bolsonaro);
        					                                printf("Fernando Haddad = %d \n",haddad);
        					          				        printf("Ciro Gomes = %d \n",Ciro);
        					          				        printf("Jo�o Amoedo = %d \n",Amoedo);
        					          				        printf("Marina Silva = %d \n",Marina);
        					          				        printf("Geraldo Alckimin = %d \n",Alckimin);
        					          				        printf("�lvaro Dias = %d \n",Alvaro);
        					          				        printf("Guilherme Boulos = %d \n",Boulos);
        					          				        printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        					          				        puts("Aperte '0' para retornar para a vota��o");
        					          				    	scanf("%d",&caso11);
        											  }
        											  
        											  else if (Alckimin > bolsonaro && Alckimin > haddad && Alckimin > Ciro && Alckimin >  Amoedo && Alckimin > Marina && Alckimin > Alvaro && Alckimin > Boulos && Alckimin > Daciolo) {
        											  		printf("Alckimin � o vencedor ! \n\n");
        				           				         	printf("Jair Bolsonaro = %d \n",bolsonaro);
        					                                printf("Fernando Haddad = %d \n",haddad);
        					          				        printf("Ciro Gomes = %d \n",Ciro);
        					          				        printf("Jo�o Amoedo = %d \n",Amoedo);
        					          				        printf("Marina Silva = %d \n",Marina);
        					          				        printf("Geraldo Alckimin = %d \n",Alckimin);
        					          				        printf("�lvaro Dias = %d \n",Alvaro);
        					          				        printf("Guilherme Boulos = %d \n",Boulos);
        					          				        printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        					          				        puts("Aperte '0' para retornar para a vota��o");
        					          				    	scanf("%d",&caso11);
        											  }
        											  
        											  else if (Alvaro > bolsonaro && Alvaro > haddad && Alvaro > Ciro && Alvaro > Amoedo && Alvaro > Marina && Alvaro > Alckimin && Alvaro > Boulos && Alvaro > Daciolo) {
        											  		printf("Alvaro � o vencedor ! \n\n");
        				           				         	printf("Jair Bolsonaro = %d \n",bolsonaro);
        					                                printf("Fernando Haddad = %d \n",haddad);
        					          				        printf("Ciro Gomes = %d \n",Ciro);
        					          				        printf("Jo�o Amoedo = %d \n",Amoedo);
        					          				        printf("Marina Silva = %d \n",Marina);
        					          				        printf("Geraldo Alckimin = %d \n",Alckimin);
        					          				        printf("�lvaro Dias = %d \n",Alvaro);
        					          				        printf("Guilherme Boulos = %d \n",Boulos);
        					          				        printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        					          				        puts("Aperte '0' para retornar para a vota��o");
        					          				    	scanf("%d",&caso11);
        											  }
        											  
        											  else if (Boulos > bolsonaro && Boulos > haddad && Boulos > Ciro && Boulos > Amoedo && Boulos > Marina && Boulos > Alckimin && Boulos > Alvaro && Boulos > Daciolo) {
        											  		printf("Boulos � o vencedor ! \n\n");
        				           				         	printf("Jair Bolsonaro = %d \n",bolsonaro);
        					                                printf("Fernando Haddad = %d \n",haddad);
        					          				        printf("Ciro Gomes = %d \n",Ciro);
        					          				        printf("Jo�o Amoedo = %d \n",Amoedo);
        					          				        printf("Marina Silva = %d \n",Marina);
        					          				        printf("Geraldo Alckimin = %d \n",Alckimin);
        					          				        printf("�lvaro Dias = %d \n",Alvaro);
        					          				        printf("Guilherme Boulos = %d \n",Boulos);
        					          				        printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        					          				        puts("Aperte '0' para retornar para a vota��o");
        					          				    	scanf("%d",&caso11);
        											  }
        											  
        											  else if (Daciolo > bolsonaro && Daciolo > haddad && Daciolo > Ciro && Daciolo > Amoedo && Daciolo > Marina && Daciolo > Alckimin && Daciolo > Alvaro && Daciolo > Boulos) {
        											  		printf("Daciolo � o vencedor ! \n\n");
        				           				         	printf("Jair Bolsonaro = %d \n",bolsonaro);
        					                                printf("Fernando Haddad = %d \n",haddad);
        					          				        printf("Ciro Gomes = %d \n",Ciro);
        					          				        printf("Jo�o Amoedo = %d \n",Amoedo);
        					          				        printf("Marina Silva = %d \n",Marina);
        					          				        printf("Geraldo Alckimin = %d \n",Alckimin);
        					          				        printf("�lvaro Dias = %d \n",Alvaro);
        					          				        printf("Guilherme Boulos = %d \n",Boulos);
        					          				        printf("Cabo Daciolo = %d \n\n\n",Daciolo);
        					          				        puts("Aperte '0' para retornar para a vota��o");
        					          				    	scanf("%d",&caso11);
        											  }
        				            			 
        				            			 
        				                                                                 
        				                      }
        				                      
        				                      else {
        				                           puts("Senha incorreta ! Digite '0' para continuar..\n");
        				                           scanf("%d",&caso11);     
        				                      }
        				               	      
        				               	      break;
        				    			default: 
        				    				puts("Digite uma op��o v�lida \n"); 
        				   				}
                               }
                       }
  				       else {
                            puts("\nSenha incorreta ! Digite uma senha v�lida..\n");
                            }
						
					} while (i2 < 1);
				} 
                
			}
			else {
				puts("Senha inv�lida. Digite novamente..\n");
			}
		
	}

	
	return 0;
}

