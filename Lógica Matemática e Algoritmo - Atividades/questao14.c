#include <stdio.h>
#include <locale.h>

// Programa que msotra se o n�mero � neutro, positivo ou negativo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("O n�mero � positivo.");
    }
    else if (x < 0)
    {
        printf("O n�mero � negativo.");
    }
    else
    {
        printf("O n�mero � nulo.");
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}