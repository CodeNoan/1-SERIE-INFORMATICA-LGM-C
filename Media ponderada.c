#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float n1, n2, n3, p1, p2, p3;
	
	printf(" Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("\n Digite o peso da primeira nota: ");
	scanf("%f", &p1);
	
	printf("\n Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("\n Digite o peso da segunda nota: ");
	scanf("%f", &p2);
	
	printf("\n Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("\n Digite o peso da terceira nota: ");
	scanf("%f", &p3);
	
	float numero_de_pesos = p1 + p2 + p3;
	
	float media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / numero_de_pesos;
	
	printf("\n A media ponderada eh: %.1f", media);
	
	
	return 0;
}
