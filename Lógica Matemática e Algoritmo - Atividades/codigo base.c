#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x, y, resultado;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &y);

    resultado = x * y;

    printf("O produto �: %d", resultado);
    printf("\n-------------------------------------------------------------------------------------------------------------");
    
    return 0;
}