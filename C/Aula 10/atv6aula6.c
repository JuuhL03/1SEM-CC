#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    
    float sld=0,cred=0;
    
    printf("Qual foi o seu saldo m�dio do �ltimo ano? ");
    scanf("%f",&sld);
    fflush(stdin);
    
    if(sld >= 0 && sld <=200){   
      printf("\nVoc� n�o tem nenhum cr�dito e o seu saldo m�dio � de R$ %.2f",sld);
    }
    else if(sld >= 201 && sld <= 400){
      cred = sld * 0.20;
      printf("\nVoc� tem um cr�dito de R$ %.2f e o saldo m�dio de R$ %.2f",cred,sld);
    }  
    else if(sld >= 401 && sld <= 600){
      cred = sld * 0.30;
      printf("\nVoc� tem um cr�dito de R$ %.2f e o saldo m�dio de R$ %.2f",cred,sld);
    }  
    else{
      cred = sld * 0.40;
      printf("\nVoc� tem um cr�dito de R$ %.2f e o saldo m�dio de R$ %.2f",cred,sld);
    }  
}      
      
                   
