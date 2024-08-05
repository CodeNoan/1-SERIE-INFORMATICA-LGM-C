#include <stdio.h>
#include <stdlib.h>

int main(){
	float racao, gramas;
	
	printf("Insira quantos kilos de ração Pedro comprou: ");
	scanf("%f", &racao);
	
	printf("\nInsira quantas gramas Pedro vai dar para cada gato: ");
	scanf("%f", &gramas);

	float kilos= racao * 1000;

	float resto= (kilos - (gramas * 2)) / 5;

	printf("\nDepois de cinco dias, sobrou %.2f gramas de ração", resto);

	
	return 0;
}