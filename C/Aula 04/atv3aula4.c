#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	int n1=0,n2=0;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Certo, informe o �ltimo n�mero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	if(n1 > n2){
		printf("\nO primeiro n�mero � maior");
	}
	else{
		printf("\nO segundo n�mero � maior");
	}
	getchar();
}
