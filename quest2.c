#include <stdio.h>
#include <stdlib.h>

int* merge(int arr1[], int size1, int arr2[], int size2) {
    int* merged_arr = malloc((size1 + size2) * sizeof(int)); // alocando memória para o vetor resultante
    int i = 0, j = 0, k = 0;

    // mesclando os dois vetores
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged_arr[k] = arr1[i];
            i++;
        } else {
            merged_arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // copiando os elementos restantes do primeiro vetor
    while (i < size1) {
        merged_arr[k] = arr1[i];
        i++;
        k++;
    }

    // copiando os elementos restantes do segundo vetor
    while (j < size2) {
        merged_arr[k] = arr2[j];
        j++;
        k++;
    }

    return merged_arr;
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* merged_arr = merge(arr1, size1, arr2, size2);

    printf("Array mesclado: ");
    for (int i = 0; i < (size1 + size2); i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    free(merged_arr); // liberando memória alocada

    return 0;
}
