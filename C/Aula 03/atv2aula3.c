#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char n1[30],n2[30],n3[30],n4[30];
	float p1=0,p2=0,p3=0,p4=0,tot=0,md=0;
	
	printf("Qual é o nome do primeiro produto? ");
	scanf("%s",n1);
	printf("\nE o preço desse produto? ");
	scanf("%f",&p1);
	fflush(stdin);
	system("cls");
	
	printf("Qual é o nome do segundo produto? ");
	scanf("%s",n2);
	printf("\nE o preço desse produto? ");
	scanf("%f",&p2);
	fflush(stdin);
	system("cls");
	
	printf("Qual é o nome do terceiro produto? ");
	scanf("%s",n3);
	printf("\nE o preço desse produto? ");
	scanf("%f",&p3);
	fflush(stdin);
	system("cls");

	printf("Qual é o nome do quarto produto? ");
	scanf("%s",n4);
	printf("\nE o preço desse produto? ");	
	scanf("%f",&p4);
	fflush(stdin);
	system("cls");

	tot = p1 + p2 + p3 + p4;
	md = (p1 + p2 + p3 + p4)/4;
	
	printf("Você adquiriu:");
	printf("\n%s = %.2f",n1,p1);
	printf("\n%s = %.2f",n2,p2);
	printf("\n%s = %.2f",n3,p3);
	printf("\n%s = %.2f",n4,p4);
	printf("\n\nO total da sua compra é igual a %.2f",tot);
	printf("\nE a média da soma dos seus produtos é igual a %.2f",md);
	getchar();
}
