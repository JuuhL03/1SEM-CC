#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome[30],sobnome[20],prof[20],resp;
	int dia=0,mes=0,ano=0;
	float sal=0,mens=0,nota=0;
	
	printf("\tDados do cliente"); //eu n�o sabia como adicionar essa linha como exce��o, ent�o repeti
	printf("\n\nNome: ") ;
	scanf("%s",nome);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nSobrenome: ");
	scanf("%s",sobnome);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nProfiss�o: ");
	scanf("%s",prof);
	system("cls");
	
	printf("\tDados do cliente");
	printf("\n\nDia em que voc� nasceu: ");
	scanf("%i",&dia);
	system("cls");

	printf("\tDados do cliente");
	printf("\n\nM�s em que voc� nasceu: ");
	scanf("%i",&mes);
	system("cls");

	printf("\tDados do cliente");	
	printf("\n\nAno em que voc� nasceu: ");
	scanf("%i",&ano);
	system("cls");
		
	printf("\tDados do cliente");
	printf("\n\nO seu sal�rio: ");
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
	printf("\n\nO seu nome � completo: %s %s",nome,sobnome);
	printf("\nA sua profiss�o �: %s",prof);
	printf("\nA sua data de nascimento �: %i/%i/%i",dia,mes,ano);
	printf("\nO seu sal�rio �: %.2f",sal);
	printf("\nA sua mensalidade �: %.2f",mens);
	printf("\nA sua nota na prova �: %.2f",nota);
	printf("\n\nAs informa��es est�o corretas? <S/N>\n");
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
		printf("Op��o inv�lida.\n\n");
		return main();
	}
} 



	

