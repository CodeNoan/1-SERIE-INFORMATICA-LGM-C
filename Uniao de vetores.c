#include <stdio.h>
#include <stdlib.h>

int main()
{
//Faça um progama que preencha dois vetores de 3 elementos e, em seguida, crie um outro vetor que faz a uniao dos elementos de forma intercalada.
int vetinter[6], vetpar[3], vetimpar[3];

printf("Digite os elementos do vetor 1: \n");

for(int i=0; i<3; i++)
{
    scanf("%d",&vetpar[i]);
}

printf("Digite os elementos do vetor 2: \n");

for(int i=0; i<3; i++)
{
    scanf("%d",&vetimpar[i]);
}

printf("MOSTRANDO O VETOR 1: \n");
for(int i=0; i<3; i++)
{
    printf("%d ", vetpar[i]);
}

printf("\nMOSTRANDO O VETOR 2: \n");
for(int i=0; i<3; i++)
{
    printf("%d ", vetimpar[i]);
}

int j=0, k=0;
for(int i = 0; i < 6; i++)
{
    if(i % 2 == 0)
    {
       vetinter[i] = vetpar[j];
       j++;
    }
    else
    {
        vetinter[i]= vetimpar[k];
        k++;
    }
}
printf("\nA união intercalada eh: \n");
for(int i=0; i<=5; i++)
{
    printf("%d ", vetinter[i]);
}

return 0;
}
