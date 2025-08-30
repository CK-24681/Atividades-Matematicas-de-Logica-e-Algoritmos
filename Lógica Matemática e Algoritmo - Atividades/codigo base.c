#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x, y, resultado;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    resultado = x * y;

    printf("O produto é: %d", resultado);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}