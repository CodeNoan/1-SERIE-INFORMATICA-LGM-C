#include <stdio.h>

int main() {
    //Faça um progama que receba a idade e o peso de 10 jogadores e responda:
    //A média das idades é quanto?
    //A soma dos pesos é quanto?
    //Qual a quantidade de jogadores menores de idade?
    //Qual a quantidade de jogadores pesando mais de 70kg?
   int idade, i, soma_idades=0, cont_menores=0, cont_mais_de_70_kilos=0;
   float peso, soma_pesos=0;
   for(i=0; i<10; i++)
   {
       printf("Jogador %d\n", i+1);
       printf("Digite sua idade: \n");
       scanf("%d", &idade);
       soma_idades = soma_idades + idade;
       if(idade < 18)
       {
           cont_menores++;
       }
       printf("Digite seu peso: \n");
       scanf("%f", &peso);
       if(peso > 70)
       {
           cont_mais_de_70_kilos++;
       }
       soma_pesos = soma_pesos + peso;
   }
   float media_idades = soma_idades / 10.0;
   printf("A media das idades eh: %.1f\n", media_idades);
   printf("A soma dos pesos eh: %.1f\n", soma_pesos);
   printf("A quantidade de jogadores menores de idade eh: %d\n", cont_menores);
   printf("A quantidade de jogadores pesando mais de 70 kg eh: %d\n", cont_mais_de_70_kilos);

   return 0;
}
