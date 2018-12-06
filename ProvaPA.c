#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int Malabarista = 0, Magico = 0, Trapezista = 0, Palhaco = 0, MalabaristaFem = 0, MagicoFem = 0, TrapezistaFem = 0, PalhacoFem = 0;
	int i = 0;
	int sexo, SexoParticipante, MasculinoParticipante = 0, FemininoParticipante = 0, Masculino = 0, Feminino = 0;
	int opcao,voto,certeza;
	float PorcentagemAprovacao;
	
	while (i == 0) {
		puts("==================== Prova de l�gica de programa��o ====================\n");
		printf("1 - Votar \n2 - Encerrar Vota��o.\n3 - Registrar participante\n4 - Conferir resultado da vota��o\n");
		scanf("%d",&opcao);
		
		
		if (opcao == 1) {
			puts("Qual a melhor atra��o ? \n");
			puts("1 - Malabarista");
			puts("2 - Trapezista");
			puts("3 - M�gico");
			puts("4 - Palha�o");
			scanf("%d",&voto);
			
			switch (voto) {
				case 1:
					puts("Qual seu sexo ? ");
					puts("1 - Masculino");
					puts("2 - Feminino");
					scanf("%d",&sexo);
					
					if (sexo == 1) {
						Masculino++;
						Malabarista++;
						puts("Voc� votou em Malabarista como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo == 2) {
						Feminino++;
						MalabaristaFem++;
						Malabarista++;
						puts("Voc� votou em Malabarista como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo != 1 && sexo != 2) {
						puts("Digite uma op��o v�lida");
					}
					
					
					break;
				
				case 2:
					puts("Qual seu sexo ? ");
					puts("1 - Masculino");
					puts("2 - Feminino");
					scanf("%d",&sexo);
					
					if (sexo == 1) {
						Masculino++;
						Trapezista++;
						puts("Voc� votou em Trapezista como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo == 2) {
						Feminino++;
						TrapezistaFem++;
						Trapezista++;
						puts("Voc� votou em Trapezista como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo != 1 && sexo != 2) {
						puts("Digite uma op��o v�lida");
					}
					
					break;
					
				case 3:
					puts("Qual seu sexo ? ");
					puts("1 - Masculino");
					puts("2 - Feminino");
					scanf("%d",&sexo);
					
					if (sexo == 1) {
						Masculino++;
						Magico++;
						puts("Voc� votou em M�gico como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo == 2) {
						Feminino++;
						MagicoFem++;
						Magico++;
						puts("Voc� votou em M�gico como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo != 1 && sexo != 2) {
						puts("Digite uma op��o v�lida");
					}
					
					break;
					
				case 4:
					puts("Qual seu sexo ? ");
					puts("1 - Masculino");
					puts("2 - Feminino");
					scanf("%d",&sexo);
					
					if (sexo == 1) {
						Masculino++;
						Palhaco++;
						puts("Voc� votou em Palhaco como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo == 2) {
						Feminino++;
						PalhacoFem++;
						Palhaco++;
						puts("Voc� votou em Palhaco como atra��o principal !\n");
						system("PAUSE");
						system("CLS");
					}
					else if (sexo != 1 && sexo != 2) {
						puts("Digite uma op��o v�lida");
					}
					break;
					
				default:
					puts("Op��o inv�lida.");
			}
			
		}
		
		else if (opcao == 2) {
			system("CLS");
			puts("Tem certeza que deseja encerrar o programa ?\n");
			puts("1 - Sim\n");
			puts("2 - N�o\n");
			scanf("%d",&certeza);
			
			if (certeza == 1) {
				system("CLS");
				system("COLOR 70");
				printf("\n\nEncerrando o programa \n\n");
				i++;
				system("CLS");
			}
			
			else if (certeza == 2) {
				puts("Voltando com o Programa...\n\n");
				system("PAUSE");
				system("CLS");
			}
			else {
				puts("Digite uma op��o v�lida..\n");
				system("PAUSE");
				system("CLS");
			}
			
			
		}
		
		else if(opcao == 3) {
			puts("Qual � o sexo do participante ?\n");
			puts("1 - Masculino");
			puts("2 - Feminino");
			scanf("%d",&SexoParticipante);
					
					if (SexoParticipante == 1) {
						MasculinoParticipante++;
						puts("Participante Masculino registrado !");
					}
					else if (SexoParticipante == 2) {
						FemininoParticipante++;
						puts("Participante feminino registrado !");
					}
					else if (SexoParticipante != 1 && SexoParticipante != 2) {
						puts("Digite uma op��o v�lida");
					}
					
			}
		
		else if (opcao == 4) {
			system("CLS");
			puts("============================= Resultado ================================\n");
			system("COLOR 70");
			printf("quantidade de participantes do sexo feminino: %d\n", FemininoParticipante);
			printf("quantidade de participantes do sexo masculino: %d\n", MasculinoParticipante);
			
			if (Malabarista > Trapezista && Malabarista > Magico && Malabarista > Palhaco) {
				puts("A atra��o malabarista foi a mais apreciada por todos !");
				PorcentagemAprovacao = (Malabarista / (Feminino + Masculino))* 100;
				printf("A porcetagem de aprova��o �: %2.f por cento\n",PorcentagemAprovacao);
			}
			
			else if (Trapezista > Malabarista && Trapezista > Magico && Trapezista > Palhaco) {
				puts("A atra��o Trapezista foi a mais apreciada por todos !");
				PorcentagemAprovacao = (Trapezista / (Feminino + Masculino))* 100;
				printf("A porcetagem de aprova��o �: %2.f por cento\n",PorcentagemAprovacao);
			}
			
			else if (Magico > Trapezista && Magico > Malabarista && Magico > Palhaco) {
				puts("A atra��o M�gico foi a mais apreciada por todos !");
				PorcentagemAprovacao = (Magico / (Feminino + Masculino))* 100;
				printf("A porcetagem de aprova��o �: %2.f por cento\n",PorcentagemAprovacao);
			}
			
			else if (Palhaco > Malabarista && Palhaco > Trapezista && Palhaco > Magico) {
				puts("A atra��o Palha�o foi a mais apreciada por todos !");
				PorcentagemAprovacao = (Palhaco / (Feminino + Masculino))* 100;
				printf("A porcetagem de aprova��o �: %2.f por cento\n",PorcentagemAprovacao);
			}
			
			else if (Malabarista == Trapezista && Malabarista > Magico && Malabarista > Palhaco ) {
				puts("As atra��es Trapezista e Malabarista tiveram a mesma quantidade de votos e foram as mais apreciadas por todos ! ");
			}
			else if (Malabarista > Trapezista && Malabarista == Magico && Malabarista > Palhaco ) {
				puts("As atra��es Magico e Malabarista tiveram a mesma quantidade de votos e foram as mais apreciadas por todos ! ");
			}
			else if (Malabarista > Trapezista && Malabarista > Magico && Malabarista == Palhaco ) {
				puts("As atra��es Palhaco e Malabarista tiveram a mesma quantidade de votos e foram as mais apreciadas por todos ! ");
			}
			else if (Magico == Trapezista && Magico > Malabarista && Magico > Palhaco) {
				puts("As atra��es Trapezista e M�gico tiveram a mesma quantidade de votos e foram as mais apreciadas por todos ! ");
			}
			else if (Magico > Trapezista && Magico >Malabarista && Magico == Palhaco) {
				puts("As atra��es Palhaco e M�gico tiveram a mesma quantidade de votos e foram as mais apreciadas por todos ! ");
			}
			else if (Palhaco > Malabarista && Palhaco == Trapezista && Palhaco > Magico) {
				puts("As atra��es Palhaco e Trapezista tiveram a mesma quantidade de votos e foram as mais apreciadas por todos ! ");
			}
		
			
			if (MalabaristaFem > TrapezistaFem && MalabaristaFem > MagicoFem && MalabaristaFem > PalhacoFem) {
				puts("A atra��o malabarista foi a mais apreciada pelas mulheres !\n");
			}
			
			else if (TrapezistaFem > MalabaristaFem && TrapezistaFem > MagicoFem && TrapezistaFem > PalhacoFem) {
				puts("A atra��o Trapezista foi a mais apreciada pelas mulheres!\n");
			}
			
			else if (MagicoFem > TrapezistaFem && MagicoFem > MalabaristaFem && MagicoFem > PalhacoFem) {
				puts("A atra��o M�gico foi a mais apreciada pelas mulheres !\n");
			}
			
			else if (PalhacoFem > MalabaristaFem && PalhacoFem > TrapezistaFem && PalhacoFem > MagicoFem) {
				puts("A atra��o Palha�o foi a mais apreciada pelas mulheres !\n");
			}
			
			//
			
			else if (MalabaristaFem == TrapezistaFem && MalabaristaFem > MagicoFem && MalabaristaFem > PalhacoFem ) {
				puts("As atra��es Trapezista e Malabarista foram as mais apreciadas pelas mulheres !\n ");
			}
			else if (MalabaristaFem > TrapezistaFem && MalabaristaFem == MagicoFem && MalabaristaFem > PalhacoFem ) {
				puts("As atra��es Magico e Malabarista foram as mais apreciadas pelas mulheres !\n ");
			}
			else if (MalabaristaFem > TrapezistaFem && MalabaristaFem > MagicoFem && MalabaristaFem == PalhacoFem ) {
				puts("As atra��es Palhaco e Malabarista foram as mais apreciadas pelas mulheres !\n ");
			}
			else if (MagicoFem == TrapezistaFem && MagicoFem > MalabaristaFem && MagicoFem > PalhacoFem) {
				puts("As atra��es Trapezista e M�gico foram as mais apreciadas pelas mulheres !\n ");
			}
			else if (MagicoFem > TrapezistaFem && MagicoFem >MalabaristaFem && MagicoFem == PalhacoFem) {
				puts("As atra��es Palhaco e M�gico foram as mais apreciadas pelas mulheres !\n ");
			}
			else if (PalhacoFem > MalabaristaFem && PalhacoFem == TrapezistaFem && PalhacoFem > MagicoFem) {
				puts("As atra��es Palhaco e Trapezista foram as mais apreciadas pelas mulheres !\n ");
			}
			system("PAUSE");
			system("CLS");
		}
			
			
		
		else if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4) {
			puts("Op��o inv�lida.\n");
		}
	}
	
	
	
		
	
	
	
	system("PAUSE");
	return 0;
}
