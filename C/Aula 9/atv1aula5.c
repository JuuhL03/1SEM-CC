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
	printf("Certo, quantos % voc� tem de frequ�ncia? ");
	scanf("%i",&freq);
	fflush(stdin);
	
	if(nota >= 7 && freq >= 75){
		printf("\n\n\tParab�ns, voc� foi aprovado!");
	}
	else{
		printf("\n\n\tVoc� foi reprovado.");
	}
	getchar();	
}
