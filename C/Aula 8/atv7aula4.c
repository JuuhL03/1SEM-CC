#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	float tudo=33,nada=12,salada=25,vtot=0;
	int qtd=0,resp=0;
	
	printf("\t\tCard�pio");
	printf("\n1- X-TUDO  R$ 33,00");
	printf("\n2- X-NADA  R$ 12,00");
	printf("\n3- X-SALADA  R$ 25,00");
	
	printf("\n\nQual seria o seu pedido? Digite o n�mero do lanche ");
	scanf("%i",&resp);
	fflush(stdin);
	printf("\nOk, qual a quantidade? ");
	scanf("%i",&qtd);
	fflush(stdin);
	
	system("cls");
	
	if(resp == 1){
		vtot = tudo * qtd;
		printf("Voc� escolheu X-TUDO em quantidade %i logo o valor total a pagar ser� R$ %.2f",qtd,vtot);
	}
	else if(resp == 2){
		vtot = nada * qtd;
		printf("Voc� escolheu X-NADA em quantidade %i logo o valor total a pagar ser� R$ %.2f",qtd,vtot);
	}
	else if(resp == 3){
		vtot = salada * qtd;
	printf("Voc� escolheu X-SALADA em quantidade %i logo o valor total a pagar ser� R$ %.2f",qtd,vtot);
	}
	else{
		printf("Op��o inv�lida!\n\n");
		return main();
	}
	getchar();
}
