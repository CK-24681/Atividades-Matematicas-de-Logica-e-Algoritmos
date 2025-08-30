#include <stdio.h>
#include <locale.h>

// Programa que mostra se os números são igual, se não mostra qual é maior
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    if (x == y)
    {
        printf("\nO números são iguais.");
    }
    else
    {
        printf("\nOs números são diferentes.");
        if (x > y)
        {
            printf("\n%d é maior que %d", x, y);
        }
        else
        {
            printf("\n%d é maior que %d", y, x);
        }
    }

    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}