#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int resp=0;
    float prod1=0,prod2=0,prod3=0,total=0,totfinal=0,parcela=0;
    
    printf("Qual � o valor do primeiro produto escolhido? ");
    scanf("%f",&prod1);
    fflush(stdin);
    
    printf("\nCerto, qual � o valor do segundo produto escolhido? ");
    scanf("%f",&prod2);
    fflush(stdin);
    
    printf("\nPor �ltimo, qual � o valor do terceiro produto escolhido? ");
    scanf("%f",&prod3);
    fflush(stdin);
    
    total = prod1+prod2+prod3;
    
    printf("\n\t\tO valor total � de R$ %.2f",total);
    printf("\n\nQual ser� a forma de pagamento?");
    printf("\n\n1- 3x com juros de 11%%");
    printf("\n2- 6x com juros de 13%%");
    printf("\n3- 9x com juros de 17%%");
    printf("\n\nInsira o n�mero correspondente a op��o desejada ");
    scanf("%i",&resp);
    fflush(stdin);
    
    if(resp == 1){
    	totfinal = total + (total*0.11);
    	parcela = totfinal/3;
    	printf("\nO valor total a ser pago com os juros � de R$ %.2f",totfinal);
    	printf("\nO valor das parcelas ser� 3x de R$ %.2f",parcela);
	}
	else if(resp == 2){
    	totfinal = total + (total*0.13);
    	parcela = totfinal/6;
    	printf("\nO valor total a ser pago com os juros � de R$ %.2f",totfinal);
    	printf("\nO valor das parcelas ser� 6x de R$ %.2f",parcela);
	}
	else if(resp == 3){
    	totfinal = total + (total*0.17);
    	parcela = totfinal/9;
    	printf("\nO valor total a ser pago com os juros � de R$ %.2f",totfinal);
    	printf("\nO valor das parcelas ser� 9x de R$ %.2f",parcela);
	}
	else{
		totfinal = total;
		parcela = totfinal;
		printf("\nO valor total a ser pago � de R$ %.2f",totfinal);
		printf("\nO valor da parcela ser� de 1x de R$ %.2f",parcela);
	}
	getchar();
}
