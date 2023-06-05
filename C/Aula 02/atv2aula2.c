#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome[30],curso[20],prof[20],email[30],tel[15],cpf[10],rg[10],nasc[10],facul[30];
	int idade=0;
	
	printf("\tFicha cadastral");
	printf("\n\nNome: ");
	gets(nome);
	fflush(stdin);
	system("cls");

	printf("\tFicha cadastral");	
	printf("\n\nIdade: ");
	scanf("%i",&idade);
	system("cls");

	printf("\tFicha cadastral");
	printf("\n\nData de nascimento: ");
	scanf("%s",nasc);
	system("cls");

	printf("\tFicha cadastral");
	printf("\n\nCPF: ");
	scanf("%s",cpf);
	system("cls");
	
	printf("\tFicha cadastral");
	printf("\n\nRG: ");
	scanf("%s",rg);
	system("cls");

	printf("\tFicha cadastral");
	printf("\n\nNome da faculdade: ");
	gets(facul);
	fflush(stdin);
	system("cls");

	printf("\tFicha cadastral");
	printf("\n\nCurso: ");
	gets(curso);
	fflush(stdin);
	system("cls");

	printf("\tFicha cadastral");
	printf("\n\nProfissão: ");
	gets(prof);
	fflush(stdin);
	system("cls");

	printf("\tFicha cadastral");
	printf("\n\nE-mail: ");
	scanf("%s",email);
	system("cls");
	
	printf("\tFicha cadastral");
	printf("\n\nTelefone: ");
	gets(tel);
	fflush(stdin);	
	system("cls");

	printf("\tDados do pessoais");
	printf("\n\nO seu nome é: %s",nome);
	printf("\nA sua idade é: %i",idade);
	printf("\nA sua data de nascimento é: %s",nasc);
	printf("\nO seu CPF é: %s",cpf);
	printf("\nO seu RG é: %s",rg);
	printf("\nO nome da sua faculdade é: %s",facul);
	printf("\nO seu curso é: %s",curso);
	printf("\nA sua profissão é: %s",prof);
	printf("\nO seu e-mail é: %s",email);
	printf("\nO seu telefone é: %s\n",tel);
	system("pause");
} 

