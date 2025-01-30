#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void combinacoes(char *str, int n);

int main()
{
    char str[4];
    str[3] = '\0';
    combinacoes(str, 3);

    return 0;
}

void combinacoes_aux(char *str, int n, int i, int *usadas)
{
    if (i == n)
    {
        printf("%s\n", str);
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (!usadas[j])
        {
            str[i] = 'A' + j;
            usadas[j] = 1;
            combinacoes_aux(str, n, i + 1, usadas);
            usadas[j] = 0;
        }
    }
}

void combinacoes(char *str, int n)
{
    int *usadas = calloc(n, sizeof(int));
    combinacoes_aux(str, n, 0, usadas);
    free(usadas);
}
