#include <stdio.h>
#include <locale.h>

// Comando que mostra sucessor e antecessor
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, antecessor, sucessor;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um número: ");
    scanf("%d", &n);

    antecessor = n - 1;
    sucessor = n + 1;

    printf("O antecessor do número digitado é %d e o sucessor é %d.", antecessor, sucessor);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}