#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	float v=0;
	int op=0;
	
	printf("Qual o valor do item que voc� gostaria de comprar? ");
	scanf("%f",&v);
	fflush(stdin);
	printf("\nCerto, e qual ser� a op��o de pagamento?");
	printf("\n\n(1) Pagamento � vista");
	printf("\n(2) Pagamento em 30 dias");
	printf("\n(3) Pagamento parcelado em 3x");
	printf("\n\nInsira o n�mero correspondente a op��o escolhida: ");
	scanf("%i",&op);
	fflush(stdin);
	system("cls");
	
	if(op == 1){
		v = v - (v*0.10);
		printf("Op��o escolhida: pagamento � vista");
		printf("\nO valor a ser pago � de R$ %.2f",v);
	}	
	else if(op == 2){
		v = v + (v*0.15);
		printf("Op��o escolhida: pagamento em 30 dias");
		printf("\nO valor a ser pago � de R$ %.2f",v);
	}
	else if(op == 3){
		v = (v + (v*0.20))/3;
		printf("Op��o escolhida: pagamento parcelado em 3x");
		printf("\nO valor a ser pago na parcela � de R$ %.2f",v);
	}
	else{
		printf("Op��o inv�lida!");
		return(0);
	}
	getchar();
}
