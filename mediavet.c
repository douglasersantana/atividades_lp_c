#include <stdio.h>

int calcularMedia(int vetor[], int tamanho) {

    if (tamanho == 0) {
        return 0;
    }

    else {
        return (vetor[0] + calcularMedia(vetor + 1, tamanho - 1) * tamanho) / tamanho;
    }
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;


printf("%d", calcularMedia(vetor, tamanho));

    return 0;
}
