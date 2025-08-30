#include <stdio.h>
#include <locale.h>

// Programa de módulo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, resultado;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    resultado = (x > 0) ? x : -x;

    printf("O módulo é: %d", resultado);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}