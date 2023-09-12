#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int num=0;
	
	printf("Informe um número de 1 a 7: ");
	scanf("%i",&num);
	fflush(stdin);
	
	if(num == 1){
		printf("\nO número 1 corresponde a domingo");
	}
	else if(num == 2){
		printf("\nO número 2 corresponde a segunda-feira");
	}
	else if(num == 3){
		printf("\nO número 3 corresponde a terça-feira");
	}	
	else if(num == 4){
		printf("\nO número 4 corresponde a quarta-feira");
	}
	else if(num == 5){
		printf("\nO número 5 corresponde a quinta-feira");
	}
	else if(num == 6){
		printf("\nO número 6 corresponde a sexta-feira");
	}
	else if(num == 7){
		printf("\nO número 7 corresponde a sábado");
	}
	else{
		printf("\nNúmero inválido! Insira um número de 1 a 7");
	}
	getchar();
}
	
