#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	system("color B");
	
	char resp,resp2;
	float c1=0,c2=0,c3=0,totc=0;
	
	printf("\t\tCalculadora de contas");
	
	printf("\n\nQuanto foi o seu gasto telef�nico no m�s de janeiro?\n");
	scanf("%f",&c1);
	fflush(stdin);
	printf("\n\nE o seu gasto telef�nico no m�s de fevereiro?\n");
	scanf("%f",&c2);
	fflush(stdin);
	printf("\n\nPor �ltimo, quanto foi o seu gasto telef�nico no m�s de mar�o?\n");	
	scanf("%f",&c3);
	fflush(stdin);
	
	system("cls");

	totc = c1 + c2 + c3;

	printf("Voc� gostaria de calcular a sua fatura telef�nica dos tr�s meses? <S/N>\n");
	scanf("%s",&resp);
	fflush(stdin);
	system("cls");
	
	switch(resp){
		case 's':
			printf("O total da sua conta dos �ltimos meses �: %.2f",totc);
			printf("\n\n\t\tGostaria de ver como a conta foi feita? <S/N>\n");
			scanf("%s",&resp2);		
			system("cls");	
	break;
		case 'S':
			printf("\nO total da sua conta dos �ltimos meses �: %.2f",totc);
			printf("\n\n\t\tGostaria de ver como a conta foi feita? <S/N>\n");
			scanf("%s",&resp2);
			system("cls");
	break;	
		default:
			printf("� uma pena, espero que possa ajud�-lo em uma pr�xima vez :)\n\n");
			return 0;
	}
			
	if(resp2 == 's'){
		printf("A f�rmula da conta � valor(1) + valor(2) + valor(3) = total");
		printf("\nOu seja, %.2f + %.2f + %.2f = %.2f",c1,c2,c3,totc);
	}
	if(resp2 == 'S'){
		printf("A f�rmula da conta � valor(1) + valor(2) + valor(3) = total");
		printf("\nOu seja, %.2f + %.2f + %.2f = %.2f",c1,c2,c3,totc);
	}	
	else{
		printf("Tudo bem, espero ter ajudado! :D\n\n");
	}
}
