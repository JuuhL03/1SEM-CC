#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	float real=0,dolar=0,euros=0;
	
	printf("\tConversor de moedas REAL para D�LAR e EUROS");
	printf("\n\nQual � o valor em REAL? ");
	scanf("%f",&real);
	fflush(stdin);
	
	dolar = real * 4.99;
	euros = real * 5.47;
	
	printf("O valor em D�LAR � igual a: %.2f",dolar);
	printf("\nJ� valor em EUROS � igual a: %.2f",euros);
	getchar();
}
