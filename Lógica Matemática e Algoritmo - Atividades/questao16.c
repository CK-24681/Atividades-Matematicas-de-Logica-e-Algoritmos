#include <stdio.h>
#include <locale.h>

// Programa de m�dulo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, resultado;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);

    resultado = (x > 0) ? x : -x;

    printf("O m�dulo �: %d", resultado);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}