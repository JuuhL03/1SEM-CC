#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int cod=0;
    
    printf("Qual é o seu curso? Utilize:");
    printf("\n1- Banco de Dados ou 2- Programação Web");
    scanf("%i",&cod);
    fflush(stdin);
    
    if(cod == 1){
         printf("\nVocê fará Banco de Dados");
    }
    else{
         printf("\nVocê fará Programação Web");       
    }
    getchar();
}                  
