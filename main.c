#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia quatro números inteiros positivos (w, x, y e z) e efetue o cálculo
de uma das seguintes médias de acordo com o valor de w conforme a tabela a seguir:*/

int main()
{
    int w;
    float x, y, z;

    printf("Digite o valor de w:\n");
    scanf("%d", &w);
    if (w > 4){
        printf("Nao ha operacoes para esse valor de w\n");
        return 0;
    }
    printf("Digite o valor de x:\n");
    scanf("%f", &x);
    printf("Digite o valor de y:\n");
    scanf("%f", &y);
    printf("Digite o valor de z:\n");
    scanf("%f", &z);

    if (w == 1){
        printf("A media geometrica entre x, y e z eh: %.2f", sqrt(x*y*z));
        return 0;
    }
    if (w == 2){
        printf("A media ponderada entre x, y e z eh: %.2f", (x + 2*y + 3*z)/6);
        return 0;
    }
    if (w == 3){
        printf("A media harmonica entre x, y e z eh: %.2f", 3/((1/x)+(1/y)+(1/z)));
        return 0;
    }
    if (w == 4){
        printf("A media aritmetica entre x, y e z eh: %.2f", (x + y + z)/3);
        return 0;
    }

}
