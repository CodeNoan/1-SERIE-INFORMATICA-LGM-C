#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n1, n2;
	
	printf(" Soma de numeros inteiros.");
	printf("\n Digite um numero: ");
	scanf("%d", &n1);
	
	printf("\n Digite outro numero: ");
	scanf("%d", &n2);
	
	int soma= n1+ n2;
	
	printf("\n A soma entre esses dois numeros eh: %d", soma);
	
	return 0;
}
