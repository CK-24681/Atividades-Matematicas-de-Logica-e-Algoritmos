#include <stdio.h>
#include <locale.h>

// Comando que soma 2 n�meros, multiplica e divide
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, soma, produto;
    float quociente;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &y);

    soma = x + y;
    produto = x * y;
    quociente = (float)x / y;

    printf("\nO resultado da soma �: %d", soma);
    printf("\nO resultado do produto �: %d", produto);
    printf("\nO resultado da divis�o �: %.2f", quociente);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}