#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    printf("Digite um nome: ");
    gets(nome);
    int len = strlen(nome), i, j;
    int meio = len / 2;

    for (int i = 0; i <= meio; i++) 
    {
        for (j = 0; j < meio - i; j++) 
        {
            printf(" ");
        }
        for (j = meio - i; j <= meio + i && j < len; j++) 
        {
            printf("%c", nome[j]);
        }
        printf("\n");
    }

    return 0;
}
