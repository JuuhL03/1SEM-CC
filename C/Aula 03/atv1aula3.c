#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char n1[30],n2[30],n3[30];
	int id1=0,id2=0,id3=0,toti=0,mi=0;
	
	printf("Qual � o nome da primeira pessoa? ");
	scanf("%30[^\n]",n1);
	fflush(stdin);
	
	printf("\nE qual � o nome da segunda pessoa? ");
	scanf("%30[^\n]",n2);
	fflush(stdin);
	
	printf("\nPor �ltinmo, qual � o nome da terceira pessoa? ");
	scanf("%30[^\n]",n3);
	fflush(stdin);
	
	system("cls");
	
	printf("Qual � a idade da primeira pessoa? ");
	scanf("%d",&id1);
	fflush(stdin);
	
	printf("\nE qual � a idade da primeira pessoa? ");
	scanf("%d",&id2);
	fflush(stdin);
	
	printf("\nPor �ltimo, qual � a idade da primeira pessoa? ");
	scanf("%d",&id3);
	fflush(stdin);
	
	toti = id1 + id2 + id3;
	mi = (id1 + id2 + id3)/3;	
	
	system("cls");
	
	printf("A soma de todas as idades � igual a %d",toti);
	printf("\nE a m�dia das 3 idades somadas � igual a %i",mi);	
	getchar();
}
