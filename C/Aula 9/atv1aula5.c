#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int freq=0,nota=0;
	
	printf("Informe a sua nota: ");
	scanf("%i",&nota);
	fflush(stdin);
	printf("Certo, quantos % você tem de frequência? ");
	scanf("%i",&freq);
	fflush(stdin);
	
	if(nota >= 7 && freq >= 75){
		printf("\n\n\tParabéns, você foi aprovado!");
	}
	else{
		printf("\n\n\tVocê foi reprovado.");
	}
	getchar();	
}
