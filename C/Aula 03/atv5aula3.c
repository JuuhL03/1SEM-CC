#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int c=0,f=0;
	
	printf("\tConversor de temperatura");
	printf("\n\nInforme quantos graus fahrenheit está fazendo neste exato momento: ");
	scanf("%d",&f);
	fflush(stdin);
	
	c = (f - 32.0) * 5.0 / 9.0;
	
	printf("\nCom a conversão de graus fahrenheit para celsius, a temperatura é igual a %d°C",c);
	getchar();	
	
}
