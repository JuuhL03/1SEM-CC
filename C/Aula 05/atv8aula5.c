#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");

	float v=0,c=0;
	
	printf("                  1            2           3           4          5");
	printf("\nPaís:    Estados Unidos     França      México     Argentina     China");
	printf("\nFrete:   R$ 60,00          R$ 75,50    R$ 50,00    R$ 27,35    R$ 80,00");
	
	printf("\n\n\n\tInsira o número correspondente ao país da importação do seu produto: ");
	scanf("%f",&c);
	fflush(stdin);
	printf("\n\tAgora digite o valor do produto importado: ");
	scanf("%f",&v);
	fflush(stdin);
	
	if(c == 1){
		v = v + 60;
		printf("\n\nOpção escolhida: Estados Unidos");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 2){
		v = v + 75,50;
		printf("\n\nOpção escolhida: França");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 3){
		v = v + 50;
		printf("\n\nOpção escolhida: México");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 4){
		v = v + 27,35;
		printf("\n\nOpção escolhida: Argentina");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 5){
		v = v + 80;
		printf("\n\nOpção escolhida: China");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else{
		printf("\nOpção inválida!");
		return(0);
	}
	getchar();
	
}
