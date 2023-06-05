#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char resp,resp2;
	float c1=0,c2=0,c3=0,totc=0;
	
	printf("\t\tCalculadora de contas");
	
	printf("\n\nQuanto foi o seu gasto telefônico no mês de janeiro?\n");
	scanf("%f",&c1);
	fflush(stdin);
	printf("\n\nE o seu gasto telefônico no mês de fevereiro?\n");
	scanf("%f",&c2);
	fflush(stdin);
	printf("\n\nPor último, quanto foi o seu gasto telefônico no mês de março?\n");	
	scanf("%f",&c3);
	fflush(stdin);
	
	system("cls");

	totc = c1 + c2 + c3;

	printf("Você gostaria de calcular a sua fatura telefônica dos três meses? <S/N>\n");
	scanf("%s",&resp);
	fflush(stdin);
	system("cls");
	
	switch(resp){
		case 's':
			printf("O total da sua conta dos últimos meses é: %.2f",totc);
			printf("\n\n\t\tGostaria de ver como a conta foi feita? <S/N>\n");
			scanf("%s",&resp2);		
			system("cls");	
	break;
		case 'S':
			printf("\nO total da sua conta dos últimos meses é: %.2f",totc);
			printf("\n\n\t\tGostaria de ver como a conta foi feita? <S/N>\n");
			scanf("%s",&resp2);
			system("cls");
	break;	
		default:
			printf("É uma pena, espero que possa ajudá-lo em uma próxima vez :)\n\n");
			return 0;
	}
			
	if(resp2 == 's'){
		printf("A fórmula da conta é valor(1) + valor(2) + valor(3) = total");
		printf("\nOu seja, %.2f + %.2f + %.2f = %.2f",c1,c2,c3,totc);
	}
	if(resp2 == 'S'){
		printf("A fórmula da conta é valor(1) + valor(2) + valor(3) = total");
		printf("\nOu seja, %.2f + %.2f + %.2f = %.2f",c1,c2,c3,totc);
	}	
	else{
		printf("Tudo bem, espero ter ajudado! :D\n\n");
	}
}
