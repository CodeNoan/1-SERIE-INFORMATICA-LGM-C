#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float salario, percentual;
	
	printf(" Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
	printf("\n Digite o aumento do funcionario: ");
	scanf("%f", &percentual);
	
	float aumento = salario + (percentual/100.0);
	float total= salario + percentual;
	
	printf("\n O novo salario eh: %.2f", total);
	
	return 0;
}
