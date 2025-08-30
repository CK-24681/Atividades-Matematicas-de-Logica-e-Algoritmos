#include <stdio.h>
#include <locale.h>

// Programa que faz a ordem crescente dos valores
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &y);
    printf("Digite o terceito número inteiro: ");
    scanf("%d", &z);

    if (x <= y && y <= z)
    {
        printf("A ordem crescente é: %d, %d e %d", x, y, z);
    }
    else if (x <= z && z <= y)
    {
        printf("A ordem crescente é: %d, %d e %d", x, z, y);
    }
    else if (y <= x && x <= z)
    {
        printf("A ordem crescente é: %d, %d e %d", y, x, z);
    }
    else if (y <= z && z <= x)
    {
        printf("A ordem crescente é: %d, %d e %d", y, z, x);
    }
    else if (z <= x && x <= y)
    {
        printf("A ordem crescente é: %d, %d e %d", z, x, y);
    }
    else if (z <= y && y <= x)
    {
        printf("A ordem crescente é: %d, %d e %d", z, y, x);
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}