#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int p1=0,p2=0,p3=0,md=0;
	
	printf("Informe a nota da sua primeira prova: ");
	scanf("%i",&p1);
	fflush(stdin);
	printf("\nCerto, agora informe a nota da sua segunda prova: ");
	scanf("%i",&p2);
	fflush(stdin);
	printf("\nPor último, informe a nota da sua terceira prova: ");
	scanf("%i",&p3);
	fflush(stdin);
	
	md = (p1 + p2 + p3)/3;
	
	system("cls");
	printf("A sua média foi %i",md);
	
	if(md >= 7){
		printf("\n\n\tParabéns!");
	}
	getchar();
}
