//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){ 
	setlocale(LC_ALL, "Portuguese"); //comando pertencente a locale.h (permite usar acento, etc)
	printf("Valorant is better than CS:GO!"); 
	printf("\nLOL is better than DOTA!"); 
	printf("\tPorque sim!");
	printf("\nNome: Júllia");
	printf("\tProfissão: estudante");
	printf("\tTime: Brasil"); //NÃO são variáveis
}

//COMENTARIOS
//f11 = compila e executa   f10 = executa   f9 = compila
//{} início e fim    ; muda de linha
//() = simboliza que o que está dentro é um comando
//void = tipo da função é vazio   main = principal   printf = imprimir
// \n = quebra linha (new line)    \t = tab
