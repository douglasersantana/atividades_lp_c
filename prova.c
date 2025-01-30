#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* caracteres_comuns(char* str1, char* str2) {
    int i, j, k = 0;
    char* comuns = (char*) malloc(sizeof(char) * (strlen(str1) + strlen(str2))); // aloca memória para a nova string

    for (i = 0; i < strlen(str1); i++) {
        for (j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j]) { // verifica se o caractere atual aparece em ambas as strings
                comuns[k] = str1[i];
                k++;
                break; // sai do loop interno se encontrar um caractere em comum
            }
        }
    }

   if(comuns[k]='\0')
    return 0;
    // adiciona o caractere nulo para indicar o fim da string

    return comuns;
}

int main() {
    char str1[100], str2[100];
    char* comuns;

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    comuns = caracteres_comuns(str1, str2);

    printf("Caracteres comuns nas duas strings: %s\n", comuns);

    free(comuns); // libera a memória alocada para a nova string

    return 0;
}
