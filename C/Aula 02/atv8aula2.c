#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char resp,resp2;
	float p1=0,qtd1=0,p2=0,qtd2=0,sbt1=0,sbt2=0,tot=0;
	
	printf("Qual o valor do produto que você gostaria de adquirir?\n");
	scanf("%f",&p1);
	fflush(stdin);
	printf("\n\nE a quantidade?\n");
	scanf("%f",&qtd1);
	fflush(stdin);
	
	sbt1 = p1*qtd1;
	
	printf("\n\nCerto, o subtotal até o momento é: %.2f",sbt1);
	printf("\n\n\t\tGostaria de adquirir mais produtos? <S/N>");
	scanf("%s",&resp);
	system("cls");
	
	if(resp == 'S'){
		printf("Ok, qual o valor do outro produto que você gostaria de adquirir?\n");
		scanf("%f",&p2);
		fflush(stdin);
		printf("\n\nE a quantidade desse produto?\n");
		scanf("%f",&qtd2);
		fflush(stdin);
		
		sbt2 = p2*qtd2;
		
		printf("\n\nO subtotal desse produto é: %.2f",sbt2);
		printf("\n\n\t\tGostaria de calcular o total de ambos os produtos? <S/N>");
		scanf("%s",&resp2);
	}
	
	if(resp2 == 'S'){
		
		tot = sbt1 + sbt2;
		
		system("cls");
		printf("O total de ambos os produtos é igual a %.2f\n\n",tot);
	}
		
	if(resp == 's'){
		printf("Ok, qual o valor do outro produto que você gostaria de adquirir?\n");
		scanf("%f",&p2);
		fflush(stdin);
		printf("\n\nE a quantidade desse produto?\n");
		scanf("%f",&qtd2);
		fflush(stdin);
		
		sbt2 = p2*qtd2;
		
		printf("\n\nO subtotal desse produto é: %.2f",sbt2);
		printf("\n\n\t\tGostaria de calcular o total de ambos os produtos? <S/N>");
		scanf("%s",&resp2);
	}
	
	if(resp2 == 's'){
		
		tot = sbt1 + sbt2;
		
		system("cls");
		printf("O total de ambos os produtos é igual a %.2f\n\n",tot);
	}
	
	else{
		printf("Tudo bem, até a próxima!\n\n");
	}
	
}
