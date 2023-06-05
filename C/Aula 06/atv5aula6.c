#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float n1=0,n2=0,n3=0,md=0;
    
    printf("Qual foi a sua primeira nota? ");
    scanf("%f",&n1);
    fflush(stdin);
    printf("\nE a segunda? ");
    scanf("%f",&n2);
    fflush(stdin);
    printf("\nCerto, e a terceira? ");
    scanf("%f",&n3); 
    fflush(stdin);
    
    md = (n1+n2+n3)/3;
    
    if(md >= 7 && n1 >= 5 && n2 >= 5 && n3 >= 5){
       printf("\n\n\tParabéns, você foi aprovado!");  
    }
    else{
       printf("\n\n\tInfelizmente, você foi reprovado.");
    }
    getchar();
}                
    
