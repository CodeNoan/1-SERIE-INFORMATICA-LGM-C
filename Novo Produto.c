#include <stdio.h>

int main() {
    char sexo;
    char resposta;
    int i, cont_sim=0, cont_nao=0, cont_mulheres_sim=0, cont_mulheres_nao=0, cont_homi_sim=0, cont_homi_nao=0;

    for(i=0; i<10; i++)
    {
        printf("Qual o seu sexo? Digite m para MASCULINO e f para FEMININO: \n");
        fflush(stdin);
        scanf(" %c", &sexo);
        printf("Voce gostou do produto? Digite s para SIM e n para NAO: \n");
        fflush(stdin);
        scanf(" %c", &resposta);

        if(resposta == 's')
        {
            cont_sim++;
        }
        else if(resposta == 'n')
        {
            cont_nao++;
        }

        if(resposta == 's' && sexo == 'f')
        {
            cont_mulheres_sim++;
        }
        else if(resposta == 'n' && sexo == 'f')
        {
            cont_mulheres_nao++;
        }
        else if(resposta == 's' && sexo == 'm')
        {
            cont_homi_sim++;
        }
        else if(resposta == 'n' && sexo == 'm')
        {
            cont_homi_nao++;
        }
    }


    printf("O numero de pessoas que responderam sim eh: %d\n", cont_sim);
    printf("O numero de pessoas que responderam nao eh: %d\n", cont_nao);
    printf("O numero de mulheres que responderam sim: %d\n", cont_mulheres_sim);

    if(cont_homi_nao > 0)
    {
    float porcentagem_homens_nao= (cont_homi_nao * 100.0) / (cont_homi_sim + cont_homi_nao);
    printf("A porcentagem de homens que responderam nao entre todos os homens analisados: %.1f%\n", porcentagem_homens_nao);

    }
    else
    {
        printf("A porcentagem de homens que responderam nao entre todos os homens analisados: 0");
    }




    return 0;
}
