#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int sexo=0,idade=0;
	
	printf("Digite o seu sexo: ");
	printf("\n1- Masculino \n2- Feminino\n\nR:");
	scanf("%i",&sexo);
	fflush(stdin);
	
	if(sexo == 1){
		printf("\nCerto, qual a sua idade? ");
		scanf("%i",&idade);
		fflush(stdin);
			
		if(idade >= 18){
			printf("\nVoc� pode se alistar!");
		}			
		else{
		printf("\nInfelizmente, voc� n�o pode se alistar!");
		}
	}
	else{
		printf("\nVoc� n�o pode se alistar!");
	}
}
