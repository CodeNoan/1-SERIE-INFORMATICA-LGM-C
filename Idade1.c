// Online C compiler to run C program online
#include <stdio.h>

int main() {
   //Questao 2
   int idade;
   scanf("%d", &idade);

   if(idade <= 13)
   {
       printf("Crianca");
   }
    else if(idade <= 17)
    {
        printf("Adolescente");
    }
    else if(idade <= 35)
    {
        printf("Jovem");
    }
    else if(idade <= 50)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }

    return 0;
}
