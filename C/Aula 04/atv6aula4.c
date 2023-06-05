#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char nome1[15],nome2[15];
	int id1=0,id2=0;
	
	printf("Qual é o nome da primeira pessoa? ");
	scanf("%s",nome1);
	fflush(stdin);
	printf("\nCerto, e a idade? ");
	scanf("%i",&id1);
	fflush(stdin);
	
	system("cls");
	
	printf("Agora qual é o nome da segunda pessoa? ");
	scanf("%s",nome2);
	fflush(stdin);
	printf("\nCerto, e a idade? ");
	scanf("%i",&id2);
	fflush(stdin);
	
	system("cls");
	
	if(id1>id2){
		printf("%s é mais velho",nome1);
	}
	else{
		printf("%s é mais velho",nome2);
	}
	getchar();
}
