#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int cd=0,qtd=0;
	float valor=0,total=0;
	
	printf("Tabela");
	printf("\n\n    COR			PREÇO");
	printf("\n1 - Verde	      R$ 10,00");
	printf("\n2 - Azul	      R$ 20,00");
	printf("\n3 - Amarelo	      R$ 30,00");
	printf("\n4 - Vermelho  	      R$ 40,00");

	printf("\n\nInsira o número correspondente a cor do CD que você deseja obter: ");
	scanf("%i",&cd);
	fflush(stdin);
	
	printf("\nCerto, qual a quantidade? ");
	scanf("%i",&qtd);
	fflush(stdin);
	
	if(cd == 1){
		valor = 10,00;
		total = valor * qtd;
		printf("\n\n\tVocê escolheu o CD verde");
		printf("\\nnO valor do produto é R$ %.2f e a quantidade desejada é %i",valor,qtd);
		printf("\nLogo, o valor total a ser pago é de R$ %.2f",total);
	}
	else if(cd == 2){
		valor = 20,00;
		total = valor * qtd;
		printf("\n\n\tVocê escolheu o CD azul");
		printf("\n\nO valor do produto é R$ %.2f e a quantidade desejada é %i",valor,qtd);
		printf("\nLogo, o valor total a ser pago é de R$ %.2f",total);
	}
	else if(cd == 3){
		valor = 30,00;
		total = valor * qtd;
		printf("\n\n\tVocê escolheu o CD amarelo");
		printf("\n\nO valor do produto é R$ %.2f e a quantidade desejada é %i",valor,qtd);
		printf("\nLogo, o valor total a ser pago é de R$ %.2f",total);
	}
	else if(cd == 4){
		valor = 40,00;
		total = valor * qtd;
		printf("\n\n\tVocê escolheu o CD vermelho");
		printf("\n\nO valor do produto é R$ %.2f e a quantidade desejada é %i",valor,qtd);
		printf("\nLogo, o valor total a ser pago é de R$ %.2f",total);
	}
	else{
		printf("\n\n\tInforme um número de CD válido!");
	}
	getchar();
}
