#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	puts("======================== Elei��es para presidente ==========================\n");
	int opcao,voto,ConfirmaVoto = 0,bolsonaro = 0, haddad = 0, Ciro = 0, Amoedo = 0, Marina = 0, Alckimin = 0,Alvaro = 0, Boulos = 0, Daciolo = 0,i1 = 0,i2 = 0,i3 = 0,certeza,limiterros = 0,caso10, caso11;
	char SenhaMesario[] = "senhamesario";
	char SenhaChefeDeUrna[] = "senhachefedeurna";
	char SenhaC[25];
	char SenhaM[25];
	char confirma[10];
	
	
	
	while (i3 == 0) {
    puts("======================== Urna Eletr�nica ==========================\n");
	puts("Senha do chefe de urna: ");
	scanf("%s",&SenhaC);
	system("CLS");
	
		if (strcmp(SenhaC,SenhaChefeDeUrna)==0) {
			i3++;
				while (i1 == 0) {
					
					do {
                        if (ConfirmaVoto > 0) {
                           ConfirmaVoto--;                 
                        }
                        puts("======================== Urna Eletr�nica ==========================\n");
                        puts("Digite a senha para iniciar a vota��o..");
                        scanf("%s",&SenhaM);
                        system("CLS");
                        
                        if (strcmp(SenhaM,SenhaMesario)==0) {
						
						while(ConfirmaVoto == 0) {
                                puts("======================== Urna Eletr�nica ==========================\n");
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
        			    				        system("CLS");
        			    				     
                                             }
                                             else {
                                                  puts("Voltando processo de vota��o..\n");
                                                  system("CLS");     
                                             }
        				    				break;
        				    				
        				    			case 2: 
                                             puts("======================== Urna Eletr�nica ==========================\n");
                                             puts("Voc� votou em Fernando Haddad. Digite 'OK' para confirmar seu voto: ");
                                             scanf("%s",&confirma);
                                             
                                             if(strcmp(confirma,"ok")==0) {
                                                 haddad += 1;
       				    				         puts("Seu voto foi computado ! \n");
       				    				         ConfirmaVoto++;
       				    				         system("CLS");
       				    				         
                                             }
                                             else {
                                                  puts("Voltando processo de vota��o..\n"); 
                                                  system("CLS");    
                                             }
        				    				break;
        				    				
        				    			case 3:
                                             puts("======================== Urna Eletr�nica ==========================\n");
                                             puts("Voc� votou em Ciro Gomes. Digite 'OK' para confirmar seu voto: ");
                                             scanf("%s",&confirma);
                                             
                                             if(strcmp(confirma,"ok")==0) {
            				    				Ciro += 1;
            				    				puts("Seu voto foi computado ! \n");
            				    				ConfirmaVoto++;
            				    				system("CLS");
                                             }
                                             else {
                                                  puts("Voltando processo de vota��o..\n");
                                                  system("CLS");
                                             }
        				    				break;
        				    				
        				    			case 4:
                                             puts("======================== Urna Eletr�nica ==========================\n");
                                             puts("Voc� votou em Jo�o Amoedo. Digite 'OK' para confirmar seu voto: ");
                                             scanf("%s",&confirma);
                                             
                                             if(strcmp(confirma,"ok")==0) {
            				    				Amoedo += 1;
            				    				puts("Seu voto foi computado ! \n");
            				    				ConfirmaVoto++;
            				    				system("CLS");
                                             }
                                             else {
                                                  puts("Voltando com o processo de vota��o..\n");
                                                  system("CLS");    
                                             }
        				    				break;
        				    				
        				    			case 5:
                                             puts("======================== Urna Eletr�nica ==========================\n");
                                             puts("Voc� votou em Marina Silva. Digite 'OK' para confirmar seu voto: ");
                                             scanf("%s",&confirma);
                                             
                                             if(strcmp(confirma,"ok")==0) {
            				                     Marina += 1;
            				                     puts("Seu voto foi computado ! \n");
            				                     ConfirmaVoto++;
            				                     system("CLS");
                                             }
                                             else {
                                                  puts("Voltando processo de vota��o..\n"); 
                                                  system("CLS");    
                                             }
        				                     break;
        				                 
        				                 case 6:
                                              puts("======================== Urna Eletr�nica ==========================\n");
                                              puts("Voc� votou em Geraldo Alckimin. Digite 'OK' para confirmar seu voto: ");
                                              scanf("%s",&confirma);
                                              
                                              if(strcmp(confirma,"ok")==0) {
            				                      Alckimin +=1;
            				                      puts("Seu voto foi computado ! \n");
            				                      ConfirmaVoto++;
            				                      system("CLS");
                                              }
                                              else {
                                                   puts("Voltando processo de vota��o..\n");
                                                   system("CLS");     
                                              }
        				                      break;
        				                      
        				                 case 7:
                                              puts("======================== Urna Eletr�nica ==========================\n");
                                              puts("Voc� votou em �lvaro Dias. Digite 'OK' para confirmar seu voto: ");
                                              scanf("%s",&confirma);
                                              
                                              if(strcmp(confirma,"ok")==0) {
            				                      Alvaro +=1;
            				                      puts("Seu voto foi computado ! \n");
            				                      ConfirmaVoto++;
            				                      system("CLS");
                                              }
                                              else {
                                                   puts("Voltando processo de vota��o..\n");  
                                                   system("CLS");   
                                              }
        				                      break;
        				                      
        				                 case 8:
                                              puts("======================== Urna Eletr�nica ==========================\n");
                                              puts("Voc� votou em Guilherme Boulos. Digite 'OK' para confirmar seu voto: ");
                                              scanf("%s",&confirma);
                                              
                                              if(strcmp(confirma,"ok")==0) {
            				                      Boulos +=1;
            				                      puts("Seu voto foi computado ! \n");
            				                      ConfirmaVoto++;
            				                      system("CLS");
                                              }
                                              else {
                                                   puts("Voltando processo de vota��o..\n");
                                                   system("CLS");     
                                              }
        				                      break;
        				                      
        				                 case 9:
                                              puts("======================== Urna Eletr�nica ==========================\n");
                                              puts("Voc� votou em Cabo Daciolo. Digite 'OK' para confirmar seu voto: ");
                                              scanf("%s",&confirma);
                                              
                                              if(strcmp(confirma,"ok")==0) {
            				                      Daciolo +=1;
            				                      puts("Seu voto foi computado ! \n");
            				                      ConfirmaVoto++;
            				                      system("CLS");
                                              }
                                              else {
                                                   puts("Voltando processo de vota��o..\n");
                                                   system("CLS");
                                              }
        				                      break;
        				                      
        				                 case 10:
                                              puts("======================== Urna Eletr�nica ==========================\n");
                                              system("CLS");
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
        				                                     ConfirmaVoto++;
        													 i1++;         
                                                             system("CLS");  
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
        				                           system("CLS");
        				                      }
        				                                  
        				                      else if (certeza != 1 && certeza != 2) {
        				                           puts("Digite uma op��o v�lida ! Digite '0' para continuar.. \n"); 
        				                           scanf("%d",&caso10);
        				                           system("CLS");
        				                               
        				                      }
        				                      
        				                      break;
        				                      
        				                 case 11: 
        				                      
        				                      puts("Digite a senha de Chefe de Urna.. \n");
        				                      scanf("%s",&SenhaC);
        				                      system("CLS");
        				                      
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
        				          				          system("CLS");
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
        				          				          system("CLS");
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
        				          				          system("CLS");
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
        				          				          system("CLS");
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
        					          				    	system("CLS");
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
        					          				    	system("CLS");
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
        					          				    	system("CLS");
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
        					          				    	system("CLS");
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
        					          				    	system("CLS");
        											  }
        											  
        											  else if (bolsonaro == 0 && haddad == 0 && Ciro == 0 && Amoedo == 0 && Marina == 0 && Alckimin == 0 && Alvaro == 0 && Boulos == 0 && Daciolo == 0) {
        											  		printf("Vota��o ainda n�o inicializada ! \n\n");
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
        					          				    	system("CLS");
													  }
        				            			 
        				            			 
        				                                                                 
        				                      }
        				                      
        				                      else {
        				                           puts("Senha incorreta ! Digite '0' para continuar..\n");
        				                           scanf("%d",&caso11);     
        				                      }
        				               	      
        				               	      break;
        				               	      
   	                                    case 12: 
                                             puts("============ Alterar Senha-Mes�rio ==================\n");
                                             
                                             printf("Senha do Chefe de Urna: ");
                                             scanf("%s",&SenhaC);
                                             
                                             if(strcmp(SenhaC,SenhaChefeDeUrna)==0) {
                                                system("CLS");
                                                puts("============ Alterar Senha-Mes�rio ==================\n"); 
                                                printf("Digite a senha de Mes�rio atual: ");
                                                scanf("%s",&SenhaM);
                                                
                                                if (strcmp(SenhaM,SenhaMesario)==0) {
                                                    char Senhacmp1[25],Senhacmp2[25];
                                                    printf("\n\nDigite a nova Senha: ");
                                                    scanf("%s",&Senhacmp1);
                                                    printf("\n\nDigite denovo a nova senha: ");
                                                    scanf("%s",&Senhacmp2);
                                                    
                                                    if(strcmp(Senhacmp1,Senhacmp2)==0) {                       
                                                        system("CLS");
                                                        strcpy(SenhaMesario,Senhacmp2);
                                                        puts("\nSenha alterada com sucesso !");
                                                        system("PAUSE");                               
                                                    }
                                                    else {
                                                         system("CLS");
                                                         puts("As senhas n�o conferem !");     
                                                    }                                     
                                                }     
                                                
                                                else {
                                                     puts("Senha Incorreta !");
                                                     system("CLS");
                                                }                    
                                             }
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
                system("CLS"); 
				puts("Senha inv�lida. Digite novamente..\n");
			}
		
	}

	
	return 0;
}

