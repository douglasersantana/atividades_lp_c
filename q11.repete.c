#include <stdio.h>
#include <stdlib.h>

int* repete(int vetor[], int tamanho) {
    int novoTamanho = 0;
    for (int i = 0; i < tamanho; i++) {
        novoTamanho += i + 1;
    }

    int* novovetor = (int*)malloc(novoTamanho * sizeof(int));
    int aux = 0;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < i + 1; j++) {
            novovetor[aux++] = vetor[i];
        }
    }

    return novovetor;
}

int main() {
    int vetor[] = {1, 2, 3};
    int tamanho = 3;

    int* novovetor = repete(vetor, tamanho);

    printf("Vetor Original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nVetor Repetido: ");
    for (int i = 0; i < tamanho * (tamanho + 1) / 2; i++) {
        printf("%d ", novovetor[i]);
    }
