#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char n1[30],n2[30],n3[30];
	int id1=0,id2=0,id3=0,toti=0,mi=0;
	
	printf("Qual é o nome da primeira pessoa? ");
	scanf("%30[^\n]",n1);
	fflush(stdin);
	
	printf("\nE qual é o nome da segunda pessoa? ");
	scanf("%30[^\n]",n2);
	fflush(stdin);
	
	printf("\nPor últinmo, qual é o nome da terceira pessoa? ");
	scanf("%30[^\n]",n3);
	fflush(stdin);
	
	system("cls");
	
	printf("Qual é a idade da primeira pessoa? ");
	scanf("%d",&id1);
	fflush(stdin);
	
	printf("\nE qual é a idade da primeira pessoa? ");
	scanf("%d",&id2);
	fflush(stdin);
	
	printf("\nPor último, qual é a idade da primeira pessoa? ");
	scanf("%d",&id3);
	fflush(stdin);
	
	toti = id1 + id2 + id3;
	mi = (id1 + id2 + id3)/3;	
	
	system("cls");
	
	printf("A soma de todas as idades é igual a %d",toti);
	printf("\nE a média das 3 idades somadas é igual a %i",mi);	
	getchar();
}
