#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome[30],curso[20],prof[20],email[30],tel[15];
	int idade=0;
	
	printf("\tDados pessoais");
	
	printf("\n\nNome: ");
	fgets(nome, 30, stdin);
	
	printf("Idade: ");
	scanf("%i",&idade);
	
	printf("Curso: ");
	scanf("%s",curso);
	fflush(stdin);
		
	printf("Profiss�o: ");
	scanf("%s",prof);
	fflush(stdin);
	
	printf("E-mail: ");
	scanf("%s",email);
	fflush(stdin);
	
	printf("Telefone: ");
	fgets(tel, 15, stdin);
	
	system("cls");

	printf("\tDados do pessoais");
	printf("\n\nO seu nome �: %s",nome);
	printf("\nA sua idade �: %i",idade);
	printf("\nO seu curso �: %s",curso);
	printf("\nA sua profiss�o �: %s",prof);
	printf("\nO seu e-mail �: %s",email);
	printf("\nO seu telefone �: %s\n",tel);
	system("pause");
} 

