#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    int cod=0;
    
    printf("Qual � o seu curso? Utilize:");
    printf("\n1- Banco de Dados ou 2- Programa��o Web");
    scanf("%i",&cod);
    fflush(stdin);
    
    if(cod == 1){
         printf("\nVoc� far� Banco de Dados");
    }
    else{
         printf("\nVoc� far� Programa��o Web");       
    }
    getchar();
}                  
