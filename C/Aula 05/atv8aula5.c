#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");

	float v=0,c=0;
	
	printf("                  1            2           3           4          5");
	printf("\nPa�s:    Estados Unidos     Fran�a      M�xico     Argentina     China");
	printf("\nFrete:   R$ 60,00          R$ 75,50    R$ 50,00    R$ 27,35    R$ 80,00");
	
	printf("\n\n\n\tInsira o n�mero correspondente ao pa�s da importa��o do seu produto: ");
	scanf("%f",&c);
	fflush(stdin);
	printf("\n\tAgora digite o valor do produto importado: ");
	scanf("%f",&v);
	fflush(stdin);
	
	if(c == 1){
		v = v + 60;
		printf("\n\nOp��o escolhida: Estados Unidos");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 2){
		v = v + 75,50;
		printf("\n\nOp��o escolhida: Fran�a");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 3){
		v = v + 50;
		printf("\n\nOp��o escolhida: M�xico");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 4){
		v = v + 27,35;
		printf("\n\nOp��o escolhida: Argentina");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else if(c == 5){
		v = v + 80;
		printf("\n\nOp��o escolhida: China");
		printf("\nValor a ser pago R$ %.2f",v);
	}
	else{
		printf("\nOp��o inv�lida!");
		return(0);
	}
	getchar();
	
}
