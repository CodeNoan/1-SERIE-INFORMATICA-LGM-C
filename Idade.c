#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int nascimento, ano_atual;
	
	printf(" Digite o ano que voce nasceu: ");
	scanf("%d", &nascimento);
	
	printf("\n Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	int idade= ano_atual - nascimento;
	int idade_em_2050= 2050 - nascimento;
	
	printf("\n Hoje em dia voce tem %d anos e em 2050 voce tera %d anos.", idade, idade_em_2050 );
	
	
	return 0;
}
