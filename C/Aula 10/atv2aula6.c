#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
	float p=0,a=0;
	
	printf("Informe o seu peso: ");
	scanf("%f",&p);
	fflush(stdin);
	printf("\nAgora informe a sua altura: ");
	scanf("%f",&a);
	fflush(stdin);
	
    if(a >= 1.80 && p > 100){
		printf("\nA sua categoria é: peso pesado");
	}
	else{
		printf("\nA sua categoria é: indefinida");
	}
    getchar();
}
