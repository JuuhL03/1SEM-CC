#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int resp=0;
	float valor=0,totvalor=0;
	
	printf("Informe o valor do produto escolhido: ");
	scanf("%f",&valor);
	fflush(stdin);
	printf("\nCerto, qual será a forma de pagamento? 1- a vista // 2- a prazo   ");
	scanf("%i",&resp);
	fflush(stdin);
	
	system("cls");
	
	if(resp == 1){
		totvalor = valor - (valor * 0.11);
		printf("O valor total a pagar será de R$ %.2f",totvalor);
	}
	if(resp == 2){
		totvalor = valor + (valor * 0.12);
		printf("O valor total a pagar será de R$ %.2f",totvalor);	
	}
	getchar();
}
