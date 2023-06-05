#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome[30],sobnome[20],prof[20],resp;
	int dia=0,mes=0,ano=0;
	float sal=0,mens=0,nota=0;
	
	printf("\tDados do cliente"); //eu não sabia como adicionar essa linha como exceção, então repeti
	printf("\n\nNome: ") ;
	scanf("%s",nome);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nSobrenome: ");
	scanf("%s",sobnome);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nProfissão: ");
	scanf("%s",prof);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nDia em que você nasceu: ");
	scanf("%i",&dia);
	system("cls");

	printf("\tDados do cliente");
	printf("\n\nMês em que você nasceu: ");
	scanf("%i",&mes);
	system("cls");

	printf("\tDados do cliente");	
	printf("\n\nAno em que você nasceu: ");
	scanf("%i",&ano);
	system("cls");
		
	printf("\tDados do cliente");
	printf("\n\nO seu salário: ");
	scanf("%f",&sal);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nMensalidade da faculdade: ");
	scanf("%f",&mens);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nA sua nota na prova: ");
	scanf("%f",&nota);
	system("cls");

	printf("\tDados do cliente");
	printf("\n\nO seu nome é completo: %s %s",nome,sobnome);
	printf("\nA sua profissão é: %s",prof);
	printf("\nA sua data de nascimento é: %i/%i/%i",dia,mes,ano);
	printf("\nO seu salário é: %.2f",sal);
	printf("\nA sua mensalidade é: %.2f",mens);
	printf("\nA sua nota na prova é: %.2f",nota);
	printf("\n\nAs informações estão corretas? <S/N>\n");
	scanf("%s",&resp);
	fflush(stdin);
	system("cls");

		///desconsiderar, ainda estou testando formas de melhorar e explorando a linguagem C :)
	
	switch(resp){
		case 's':
			printf("Obrigado por colaborar com a nossa pesquisa!");
			return 0;
	break;
		case 'S':
			printf("Obrigado por colaborar com a nossa pesquisa!");
			return 0;
	break;
		case 'n':
		printf("Por favor, reformule as suas respostas.\n\n");
		return main();
	break;
		case 'N':
		printf("Por favor, reformule as suas respostas.\n\n");
		return main();
	break;
		default:
		printf("Opção inválida.\n\n");
		return main();
	}
} 



	

