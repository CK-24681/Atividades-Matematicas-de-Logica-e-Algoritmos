#include <stdio.h>
#include <locale.h>

// Programa que mostra se os n�meros s�o igual, se n�o mostra qual � maior
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &y);

    if (x == y)
    {
        printf("\nO n�meros s�o iguais.");
    }
    else
    {
        printf("\nOs n�meros s�o diferentes.");
        if (x > y)
        {
            printf("\n%d � maior que %d", x, y);
        }
        else
        {
            printf("\n%d � maior que %d", y, x);
        }
    }

    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}