#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	float p1=0,p2=0,p3=0,subt1=0,subt2=0,subt3=0;
	float tot=0,ps1=0,ps2=0,ps3=0;
	
	printf("Informe o valor do primeiro produto: ");
	scanf("%f",&p1);
	fflush(stdin);
	printf("E qual é o peso desse produto? ");
	scanf("%f",&ps1);
	fflush(stdin);
	
	printf("\nInforme o valor do segundo produto: ");
	scanf("%f",&p2);
	fflush(stdin);
	printf("E qual é o peso desse produto? ");
	scanf("%f",&ps2);
	fflush(stdin);
	
	printf("\nInforme o valor do terceiro produto: ");
	scanf("%f",&p3);
	fflush(stdin);
	printf("E qual é o peso desse produto? ");
	scanf("%f",&ps3);
	fflush(stdin);
	
	subt1 = p1 * ps1;
	subt2 = p2 * ps2;
	subt3 = p3 * ps3;
	
	tot = subt1 + subt2 + subt3;
	
	system("cls");
	
	printf("O subtotal do primeiro produto é igual a %.2f",subt1);
	printf("\nO subtotal do segundo produto é igual a %.2f",subt2);
	printf("\nE o subtotal do terceiro produto é igual a %.2f",subt3);
	printf("\n\n\tO valor total da sua compra é igual a %.2f\n\n",tot);
	system("pause");
}
