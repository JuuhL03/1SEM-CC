#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int num=0;
	
	printf("Informe um n�mero de 1 a 7: ");
	scanf("%i",&num);
	fflush(stdin);
	
	if(num == 1){
		printf("\nO n�mero 1 corresponde a domingo");
	}
	else if(num == 2){
		printf("\nO n�mero 2 corresponde a segunda-feira");
	}
	else if(num == 3){
		printf("\nO n�mero 3 corresponde a ter�a-feira");
	}	
	else if(num == 4){
		printf("\nO n�mero 4 corresponde a quarta-feira");
	}
	else if(num == 5){
		printf("\nO n�mero 5 corresponde a quinta-feira");
	}
	else if(num == 6){
		printf("\nO n�mero 6 corresponde a sexta-feira");
	}
	else if(num == 7){
		printf("\nO n�mero 7 corresponde a s�bado");
	}
	else{
		printf("\nN�mero inv�lido! Insira um n�mero de 1 a 7");
	}
	getchar();
}
	
