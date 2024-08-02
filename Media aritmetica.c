#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float n1, n2 ,n3;
	
	printf(" Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("\n Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("\n Digite a terceira nota: ");
	scanf("%f", &n3);
	
	float media = (n1 + n2 + n3) / 3;
	
	printf("\n A media eh: %.1f", media);
	
	return 0;
}
