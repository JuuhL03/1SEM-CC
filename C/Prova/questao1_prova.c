#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float peso=0;
    
    printf("Informe aqui o peso de um lutador de MMA: ");
    scanf("%f",&peso);
    fflush(stdin);
    
    if(peso <= 84){
    	printf("\nCom esse peso, o lutador pertence a categoria: Peso Médio");
	}
	else if(peso > 84 && peso <= 93){
		printf("\nCom esse peso, o lutador pertence a categoria: Peso Meio-Pesado");
	}
	else{
		printf("\nCom esse peso, o lutador pertence a categoria: Peso Pesado");
	}
	getchar();
}
