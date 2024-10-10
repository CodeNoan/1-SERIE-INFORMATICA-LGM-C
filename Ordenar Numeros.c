#include <stdio.h>

int main() {

  int vet[5], aux;

  for(int i = 0; i < 5; i++) {
      scanf("%d", &vet[i]);
  }

  printf("\nOs valores digitados são:\n");
  for(int i = 0; i < 5; i++) {
      printf("%d\n", vet[i]);
  }

  // Ordenação em ordem crescente usando o Bubble Sort
  for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5 - i - 1; j++) {
          if(vet[j] > vet[j+1]) {
              aux = vet[j];
              vet[j] = vet[j+1];
              vet[j+1] = aux;
          }
      }
  }

  printf("\nOs valores ordenados são:\n");
  for(int i = 0; i < 5; i++) {
      printf("%d\n", vet[i]);
  }

  return 0;
}
