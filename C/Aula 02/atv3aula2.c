#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//baseado no cadastro do Twitter

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome[30],tel[30],nasc[20],cod[20],senha[30];
	int resp=0;
	
	printf("\t\tInscreva-se!");
	printf("\nDigite 1 para prosseguir com o seu cadastro.\n");
	scanf("%i",&resp);
	fflush(stdin);
	system("cls");
	
	switch(resp){
		case 1:
			printf("Insira o seu nome: ");
			gets(nome);
			fflush(stdin);
	
			printf("O seu número de telefone: ");
			gets(tel);
			fflush(stdin);
	
			printf("Qual a sua data de nascimento?" );
			scanf("%s",nasc);
			system("cls");
			
			printf("\tEnviamos um código para você.\n\nInsira o código de verificação: ");
			scanf("%s",cod);
			system("cls");
			
			printf("\tVocê precisará de uma senha.\n(É preciso ter 8 caracteres ou mais).\n\nSenha: ");
			scanf("%s",senha);
			system("cls");
			
			printf("O seu cadastro foi concluído! \nAcesse o Twitter e configure a sua conta!");
			return 0;
			
		default:
			printf("Opção inválida.\n\n");
			return main();
	}
}
	
	
	
	
	
	
	
	
