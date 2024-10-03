#include <stdio.h>

int main() {
    int vet[10], i, cont_par=0;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("TODOS OS ELEMENTOS DO VETOR\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", vet[i]);
    }

    printf("TODOS OS ELEMENTOS IMPARES DO VETOR\n");
    for(i = 0; i < 10; i++)
    {
        if(vet[i] % 2 != 0)
        {
          printf("%d\n", vet[i]);
        }
    }

    for(i = 0; i < 10; i++)
    {
        if(vet[i] % 2 == 0)
        {
           cont_par++;
        }
    }

    printf("A QUANTIDADE DE NUMEROS PARES NO VETOR EH: %d", cont_par);

    return 0;
}
