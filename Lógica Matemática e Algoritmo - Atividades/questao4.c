#include <stdio.h>
#include <locale.h>

// Comando que soma 2 nï¿½meros, multiplica e divide
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, soma, produto;
    float quociente;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    soma = x + y;
    produto = x * y;
    quociente = (float)x / y;

    printf("\nO resultado da soma é: %d", soma);
    printf("\nO resultado do produto é: %d", produto);
    printf("\nO resultado da divisão é: %.2f", quociente);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}