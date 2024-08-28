// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    //questao 3
    printf("MENU\n");
    int n1, n2, n3;
    int operacao;
    printf("Digite 1 para somar dois numeros\nou digite 2 para tirar a raiz quadrada de um numero\n");
    scanf("%d", &operacao);




    if(operacao == 1)
    {

        printf("Digite dois numeros inteiros\n");
        scanf("%d %d", &n1, &n2);
        int soma= n1+n2;
        printf("A soma entre esses dois numeros eh %d", soma);

    }
    else if(operacao == 2)
    {

        printf("Digite um numero para tirar a raiz\n");
        scanf("%d", &n3);
        float raiz= sqrt(n3);
        printf("A raiz desse numero eh %.1f", raiz);

    }


    return 0;
}
