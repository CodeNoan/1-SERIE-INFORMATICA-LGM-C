#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    //Fa�a um progama que preenche um vetor de 20 elementos. Crie 2 vetores que recebam vetpar para os n�meros pares e vetimpar para n�meros impares.
     int vet[tam], vetpar[tam], vetimpar[tam];

     for(int i = 0; i < tam; i++)
     {
         scanf("%d", &vet[i]);
     }

     printf("OS NUMEROS DIGITADOS SAO:\n");

     for(int i = 0; i < tam; i++)
     {
         printf("%d ", vet[i]);
     }

     int j = 0,k = 0;

     for(int i= 0; i < tam; i++)
     {
        if(vet[i] % 2 == 0)
        {
            vetpar[j] = vet[i];
            j++;
        }
        else
        {
            vetimpar[k] = vet[i];
            k++;
        }
     }
     printf("\nOS PARES SAO:\n");
     for(int i = 0; i < j; i++)
     {
         printf("%d ", vetpar[i]);
     }
     printf("\nOS IMPARES SAO:\n");
     for(int i = 0; i < k; i++)
     {
         printf("%d ", vetimpar[i]);
     }
    return 0;
}
