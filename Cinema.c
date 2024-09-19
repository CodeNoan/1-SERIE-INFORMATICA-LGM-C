#include <stdio.h>
//Problema: cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme: ótimo-3, bom-2,regular-1. Faça um progama que receba a idade e a opnião de 15 espectadores, calcule e mostre.

//A média das idades das pessoas que responderam ótimo;
//A quantidade de pessoas que responderam regular;
//A porcentagem de pessoas que responderam bom, entre todos os espectadores analisados.

#include <stdio.h>

int main() {
    int i, idade, opniao, soma_idade_otimo=0, cont_otimo=0, cont_bom=0, cont_regular=0;
    for(i=0; i<15; i++) {
        printf("Informe a sua idade: ");
        scanf("%d", &idade);
        printf("Qual a sua opniao sobre o filme? Digite 3 para otimo, 2 para bom e 1 para regular: ");
        scanf("%d", &opniao);

        if(opniao == 3) {
            soma_idade_otimo += idade;
            cont_otimo++;
        } else if(opniao == 2) {
            cont_bom++;
        } else if(opniao == 1) {
            cont_regular++;
        } else {
            printf("Opniao invalida\n");
        }
    }

    float media_idade_otimo = (cont_otimo > 0) ? (float)soma_idade_otimo / cont_otimo : 0;
    float porcentagem_bom = (float)cont_bom / 15 * 100;

    printf("A média das idades das pessoas que responderam ótimo: %.2f\n", media_idade_otimo);
    printf("A quantidade de pessoas que responderam regular: %d\n", cont_regular);
    printf("A porcentagem de pessoas que responderam bom: %.2f%%\n", porcentagem_bom);

    return 0;
}

