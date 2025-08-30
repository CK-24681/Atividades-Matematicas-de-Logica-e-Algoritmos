#include <stdio.h>
#include <locale.h>

// Comando que divide 2 números, mostra o quociente e o resto
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, quociente, resto;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("\nO quociente da divisão é %d e o resto é %d", quociente, resto);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}