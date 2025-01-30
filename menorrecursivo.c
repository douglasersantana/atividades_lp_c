#include <stdio.h>
#include <stdlib.h>

int aux_menor_elemento_vet(int* vet, int tam, int menor) {
  if(tam <= 0) return menor;
  if(vet[0] < menor) menor = vet[0];
  return aux_menor_elemento_vet(&vet[1], tam-1, menor);
}

int menor_elemento_vet(int* vet, int tam) {
  return aux_menor_elemento_vet(&vet[1], tam-1, vet[0]);
}

int main(void) {
  int* vet = malloc(sizeof(int));
  int i = 1, op = 1, tam = 1;

  while(1) {
    printf("Digite o %iº valor do vetor: ", i);
    scanf("%d", &vet[i-1]);
    printf("adicionar mais um número? ( 0 para sair): ");
    scanf("%d", &op);
    printf("\n");

    if(op == 0) break;
    vet = realloc(vet, (tam+1) * sizeof(int));
    i++;
  }

  printf(" menor elemento %d", menor_elemento_vet(vet, i));
  return 0;
}
