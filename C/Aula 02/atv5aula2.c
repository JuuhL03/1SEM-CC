#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char processador[30],plvideo[30],discrigido[30];
	int qtd_discrigido=0,ram=0,fonte=0;
	
	printf("\t\tConfigura��es do seu computador: ");	
	printf("\n\nQual � o seu processador? ");
	gets(processador);
	printf("E a sua placa de v�deo? ");
	gets(plvideo);
	printf("Qual � o seu tipo de armazenamento? HD ou SSD? ");
	scanf("%s",discrigido);
	printf("Certo, e qual � a quantidade de armazenamento que voc� possui? ");
	scanf("%i",&qtd_discrigido);
	printf("Qual � a quantidade de mem�ria RAM do seu computador? ");
	scanf("%i",&ram);
	printf("Por �ltimo, qual a voltagem da sua fonte? ");
	scanf("%i",&fonte);
	system("cls");
	
	printf("\n\n\t\tConfigura��es do seu computador: ");
	printf("\n\nO seu processador �: %s",processador);
	printf("\nA sua placa de v�deo �: %s",plvideo);
	printf("\nDe armazenamento voc� utiliza um: %s com %igb",discrigido,qtd_discrigido);
	printf("\nO seu computador possui um total de: %i de mem�ria ram",ram);
	printf("\nPor fim, a sua fonte possui: %iw\n\n",fonte);
	system("pause");
	system("cls");
	
	printf("Obrigado por contribuir com a nossa pesquisa!");
}
