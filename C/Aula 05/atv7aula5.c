#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float imcc(float p, float a) {
    return p / (a * a);
}

void resultado(float imc) {
    printf("\nIMC: %.2f", imc);

    if (imc < 18.5) {
        printf("\nVocê está na categoria: abaixo do peso");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("\nVocê está na categoria: normal");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("\nVocê está na categoria: sobrepeso");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("\nVocê está na categoria: obesidade grau 1");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("\nVocê está na categoria: obesidade grau 2");
    } else if (imc >= 40) {
        printf("\nVocê está na categoria: obesidade grau 3");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color B");

    float p = 0, a = 0, imc = 0;

    printf("Qual é o seu peso? ");
    scanf("%f", &p);
    fflush(stdin);
    printf("E qual é a sua altura? ");
    scanf("%f", &a);
    fflush(stdin);

    imc = imcc(p, a);
    resultado(imc);

    return 0;
}

