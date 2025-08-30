#include <stdio.h>
#include <locale.h>

// Programa que faz a ordem crescente dos valores
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro dos lados inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo dos lados inteiro: ");
    scanf("%d", &y);
    printf("Digite o terceiro dos lados inteiro: ");
    scanf("%d", &z);

    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y && y == z)
        {
            printf("\n� um tri�ngulo equil�tero.");
        }
        else if (x != y && y != z && x != z)
        {
            printf("\n� um tri�ngulo escaleno.");
        }
        else
        {
            printf("\n� um tri�ngulo is�scele.");
        }
    }
    else
    {
        printf("\nN�o � um tri�ngulo.");
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}