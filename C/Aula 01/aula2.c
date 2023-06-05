#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int idade=0;
	float salario=0;	
	char nome[40];
	
	printf("\tInforme seus dados cadastrais:");
	printf("\n\nNome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("Idade: ");
	scanf("%i",&idade);
	printf("Salário: ");
	scanf("%f",&salario);
	
	system("cls");
	
	printf("Nome: %s",nome);
	printf("\nIdade: %i",idade);
	printf("\nSalário: %.2f\n",salario);

	system("pause");
}
