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
	
	if(p >= 70 && p <= 80 && a >= 1.70 && a <= 1.80){
		printf("\nParabéns, você está apto a jogar!");
		return 0;
	}   
	else{
		printf("\nInfelizmente, você não está apto a jogar.");
		return 0;
	}
    getchar();
}
