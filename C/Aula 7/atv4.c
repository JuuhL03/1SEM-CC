#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");

	int c=0,f=0;
	
	printf("\tConversor de temperatura");
	printf("\n\nInforme quantos graus celsius est� fazendo neste exato momento: ");
	scanf("%d",&c);
	fflush(stdin);
	
	f = (c * 9/5) + 32;
	
	printf("\nCom a convers�o de graus celsius para fahrenheit, a temperatura � igual a %d�F",f);
	getchar();

}
