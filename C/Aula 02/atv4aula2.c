#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome[30],equipe[30];
	int idade=0;
	float peso=0,altura=0,salario=0;
	
	printf("\t\tDados de um atleta.");
	printf("\nInsira o seu nome: ");
	gets(nome);
	printf("Qual a sua equipe? ");
	gets(equipe);
	printf("E a sua idade? ");
	scanf("%i",&idade);
	printf("O seu peso? ");
	scanf("%f",&peso);
	printf("Qual é a sua altura? ");
	scanf("%f",&altura);
	printf("E qual é o seu salário? ");
	scanf("%f",&salario);
	system("cls");
	
	printf("\t\tDados de um atleta:");
	printf("\nNome: %s",nome);
	printf("\nEquipe: %s",equipe);
	printf("\nIdade: %i",idade);
	printf("\nPeso: %.2f",peso);
	printf("\nAltura: %.2f",altura);
	printf("\nSalário: %.2f",salario);
	
}
