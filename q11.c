#include <stdio.h>

int inverteVet(int vet[], int tam) {
    int i, j;
    for (i = 0, j = tam - 1; i < j; i++, j--) {

        int temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
    return vet[j];
    }


}




int main() {
    int tamanho;
    printf("tam vetor");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
 printf("\nVetor invertido: ");
    for (int i = 0; i < tamanho; i++) {

        printf("%d ",inverteVet(&vetor[i],tamanho));

    printf("\n");

    return 0;
}
