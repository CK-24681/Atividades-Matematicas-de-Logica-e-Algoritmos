#include <stdio.h>
#include <locale.h>

// Programa que mostra o maior valor
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &y);
    printf("Digite o terceito n�mero inteiro: ");
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("O maior n�mero �: %d", x);
    }
    else if (y > x && y > z)
    {
        printf("O maior n�mero �: %d", y);
    }
    else
    {
        printf("O maior n�mero �: %d", z);
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}