#include <stdio.h>
#include <locale.h>

// Programa que msotra se o número é neutro, positivo ou negativo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("O número é positivo.");
    }
    else if (x < 0)
    {
        printf("O número é negativo.");
    }
    else
    {
        printf("O número é nulo.");
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}