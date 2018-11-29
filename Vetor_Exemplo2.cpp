#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
system("COLOR 07");
float Nota[4], Soma, Media;
int i, j;
char nome[8];
setlocale( LC_ALL, "Portuguese");
puts("********** Sistema Acadêmico - DS1 **********");
puts(" ");
puts(" ");

for(i=1;i<=5;i++){
	puts("********** Identificação do aluno **********");
	Soma = Media = 0;
	puts(" ");
	puts(" ");
	printf("Digite o nome do %dº aluno: ",i);
	fflush(stdin);
	scanf("%s",&nome);
	puts(" ");
	puts("********** Atribuição de notas **********");
	puts(" ");
	printf("Notas do aluno: %s. \n", nome);
	for(j=1;j<=4;j++){
		puts(" ");
		printf("Digite a %dª nota: ", j);
		scanf("%f", &Nota[j]);
		Soma+= Nota[j];
		}
	Media=Soma/4;
	puts(" ");
	puts(" ");
	puts("********** Situação do aluno **********");
	puts(" ");
	printf("A média do aluno %s é: %.2f.\n", nome, Media);
	if(Media >= 5){
		printf("Aluno: %s Aprovado.\n",nome);
		if(Media>= 9.0){
			puts("Com conteito A.\n");
		}
		else{  
			if(Media>=7.0){
				puts("Com conteito B.\n");
			}
		    else{
		    	puts("Com conteito C.\n");
			    }
		 	}
		}
	else{
		puts("Aluno Reprovado.");
		if(Media>=2.5){
				puts("Com conteito D.\n");
			}
		    else{
		    	puts("Com conteito E.\n");
			    }
	}
	puts("********** Próximo aluno **********");
	puts(" ");		
	system("PAUSE");
	system("CLS");
	}
	puts("********** Finalizando programa **********");	
	system("PAUSE");
	return 0;
	
}





