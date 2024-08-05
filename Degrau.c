#include<stdio.h>
#include<stdlib.h>

int main(){
    float degrau, altura_desejada, altura_cm, quantidade_degraus;
    printf("Qual a altura em centimetros do degrau da escada? ");
    scanf("%f", &degrau);
    
    printf("\nQual a altura em metros que voce deseja atingir? ");
    scanf("%f", &altura_desejada);
    
    altura_cm= altura_desejada * 100;
    quantidade_degraus= altura_cm / degrau;
    
    printf("\nA quantidade de graus para alcancar a altura desejada eh: %.0f", quantidade_degraus);
    
    return 0;
}