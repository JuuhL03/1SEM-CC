#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char processador[30],plvideo[30],discrigido[30];
	int qtd_discrigido=0,ram=0,fonte=0;
	
	printf("\t\tConfigurações do seu computador: ");	
	printf("\n\nQual é o seu processador? ");
	gets(processador);
	printf("E a sua placa de vídeo? ");
	gets(plvideo);
	printf("Qual é o seu tipo de armazenamento? HD ou SSD? ");
	scanf("%s",discrigido);
	printf("Certo, e qual é a quantidade de armazenamento que você possui? ");
	scanf("%i",&qtd_discrigido);
	printf("Qual é a quantidade de memória RAM do seu computador? ");
	scanf("%i",&ram);
	printf("Por último, qual a voltagem da sua fonte? ");
	scanf("%i",&fonte);
	system("cls");
	
	printf("\n\n\t\tConfigurações do seu computador: ");
	printf("\n\nO seu processador é: %s",processador);
	printf("\nA sua placa de vídeo é: %s",plvideo);
	printf("\nDe armazenamento você utiliza um: %s com %igb",discrigido,qtd_discrigido);
	printf("\nO seu computador possui um total de: %i de memória ram",ram);
	printf("\nPor fim, a sua fonte possui: %iw\n\n",fonte);
	system("pause");
	system("cls");
	
	printf("Obrigado por contribuir com a nossa pesquisa!");
}
