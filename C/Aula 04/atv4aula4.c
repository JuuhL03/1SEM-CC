#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int p1=0,p2=0,md=0;
	
	printf("Qual foi a sua nota no primeiro bimestre? ");
	scanf("%i",&p1);
	fflush(stdin);
	printf("\nCerto, e a sua nota no segundo bimestre? ");
	scanf("%i",&p2);
	fflush(stdin);
	
	md = (p1 + p2)/2;
	
	if(md >= 7){
		printf("\n\n\tParabéns, você ficou com %i de média e foi aprovado!",md);
	}
	else{
		printf("\n\n\tSinto muito, você ficou com %i de média e está de exame...",md);
	}
	getchar();
}
