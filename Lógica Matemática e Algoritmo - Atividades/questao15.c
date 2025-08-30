#include <stdio.h>
#include <locale.h>

// Programa ques mostra se o número é ímpar ou par
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um número: ");
    scanf("%d", &x);

    if (x % 2 != 0)
    {
        printf("É ímpar.");
    }
    else
    {
        printf("É par.");
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}