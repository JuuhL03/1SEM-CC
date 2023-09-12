#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");

	int id=0;
	
	printf("Informe a sua idade: ");
	scanf("%i",&id);
	fflush(stdin);
	
	if(id >= 18){
		printf("\n\tVocê é maior de idade");
	}
	else{
		printf("\n\tVocê é menor de idade");
	}
	getchar();
}

