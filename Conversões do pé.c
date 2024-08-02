#include<stdio.h>
#include<stdlib.h>

int main()
{
	float pe, polegada, jarda, milha;
	printf("Qual a medida em pe?");
	scanf("%f", &pe);
	
	polegada = pe * 12;
	jarda= pe/3;
	milha= jarda/1760;
	
	printf("\n O numero de polegadas eh: %f", polegada);
	printf("\n O numero de jardas eh: %f", jarda);
	printf("\n O numero de milhas eh: %f", milha);
	
	
	return 0;
}
