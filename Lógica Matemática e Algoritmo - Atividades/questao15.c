#include <stdio.h>
#include <locale.h>

// Programa ques mostra se o n�mero � �mpar ou par
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um n�mero: ");
    scanf("%d", &x);

    if (x % 2 != 0)
    {
        printf("� �mpar.");
    }
    else
    {
        printf("� par.");
    }
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}