#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){ 
	//definindo variaveis
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30],cidade[20],resp[1];
	int idade=0;
	float altura=0,peso=0;
	
	printf("Dados do cliente");
	
	printf("\nNome:");
	scanf("%s",nome);
	
	printf("\nCidade:");
	scanf("%s",cidade);
	
	printf("\nIdade:");
	scanf("%i",&idade);
	
	printf("\nAltura:");
	scanf("%f",&altura);
	
	printf("\nPeso:");
	scanf("%f",&peso);
	
	system("cls"); //clear screen (limpar tela)
	
	printf("O seu nome é %s",nome);
	printf("\nCidade: %s",cidade); 
	printf("\nIdade: %i",idade); //nao preciso usar & para imprimir
	printf("\nAltura: %.2f",altura);
	printf("\nPeso: %.2f",peso); //%.2f numero de casas decimais na resposta
	printf("\nAs informações estão corretas? <S/N>");
	scanf("%s",resp);
}

//COMENTÁRIOS
//char = variavel caracter (letras, numeros e caracteres especiais) "%s"
//int = variavel numerica (somente numeros inteiros) "%i"
//float = variavel do tipo numerica (com casas decimais) "%f"
//toda variável numérica precisa do "&"

