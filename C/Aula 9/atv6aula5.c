#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	float v=0;
	int op=0;
	
	printf("Qual o valor do item que você gostaria de comprar? ");
	scanf("%f",&v);
	fflush(stdin);
	printf("\nCerto, e qual será a opção de pagamento?");
	printf("\n\n(1) Pagamento à vista");
	printf("\n(2) Pagamento em 30 dias");
	printf("\n(3) Pagamento parcelado em 3x");
	printf("\n\nInsira o número correspondente a opção escolhida: ");
	scanf("%i",&op);
	fflush(stdin);
	system("cls");
	
	if(op == 1){
		v = v - (v*0.10);
		printf("Opção escolhida: pagamento à vista");
		printf("\nO valor a ser pago é de R$ %.2f",v);
	}	
	else if(op == 2){
		v = v + (v*0.15);
		printf("Opção escolhida: pagamento em 30 dias");
		printf("\nO valor a ser pago é de R$ %.2f",v);
	}
	else if(op == 3){
		v = (v + (v*0.20))/3;
		printf("Opção escolhida: pagamento parcelado em 3x");
		printf("\nO valor a ser pago na parcela é de R$ %.2f",v);
	}
	else{
		printf("Opção inválida!");
		return(0);
	}
	getchar();
}
