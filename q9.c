#include <stdio.h>

void inverteVet(int vetor[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim) {
        int temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor Original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    inverteVet(vetor, tamanho);

    printf("\nVetor Invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
