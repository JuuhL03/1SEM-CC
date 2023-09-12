#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");

	char curso[30];
	int ano=0;
	float valor=0,total=0;
	
	printf("Qual é o seu curso? ");
	scanf("%s",curso);
	fflush(stdin);

	printf("\nCerto, de qual ano você é? ");
	scanf("%i",&ano);
	fflush(stdin);

	printf("\nE qual o valor do livro? ");
	scanf("%f",&valor);
	fflush(stdin);
	
	if(ano == 1 || ano == 2){
		total = valor - (valor * 0.15);
		printf("\n\n\tO valor a pagar será de: R$ %.2f",total);
	}	
	else if(ano == 3){
		total = valor - (valor * 0.22);
		printf("\n\n\tO valor a pagar será de: R$ %.2f",total);
	}
	else{
		total = valor;
		printf("\n\n\tO valor a pagar será de: R$ %.2f",total);
	}	
	
	getchar();
}
