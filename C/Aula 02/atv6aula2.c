#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char resp;
	int n1=0,n2=0,n3=0,tot=0;
	
	printf("\t\tCalculadora de n�meros inteiros :)");
	printf("\n\nDigite um n�mero inteiro de sua prefer�ncia: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("\nDigite outro n�mero inteiro: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("\nCerto, digite mais um n�mero: ");
	scanf("%i",&n3);
	fflush(stdin);
	
	tot = n1 + n2 + n3;
	
	printf("\nA soma desses tr�s n�meros � igual a %i",tot);
	printf("\n\nGostaria de fazer outra soma? <S/N>\n");
	scanf("%s",&resp);
	system("cls");
	
	if(resp == 's'){
		return main();
	}
	
	else{
		printf("Tudo bem, obrigada por utilizar a nossa calculadora!");
	}
}
