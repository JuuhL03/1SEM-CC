#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float n1=0,freq=0;
    
    printf("Qual foi a sua nota na prova? ");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("\nE quantos %% você tem de presença? ");
	scanf("%f",&freq);
	fflush(stdin);
	
	if(n1 >= 6 && freq >= 70){
		printf("\nAluno aprovado!");
	}
	else{
		printf("\nAluno retido.");
	}
	getchar();
}
