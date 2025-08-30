#include <stdio.h>
#include <locale.h>

// Programa que mostra o maior valor
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

    if (x > y && x > z)
    {
        printf("O maior número é: %d", x);
    }
    else if (y > x && y > z)
    {
        printf("O maior número é: %d", y);
    }
    else
    {
        printf("O maior número é: %d", z);
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}