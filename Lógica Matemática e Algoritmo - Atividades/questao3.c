#include <stdio.h>
#include <locale.h>

// Comando que divide 2 n�meros, mostra o quociente e o resto
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, quociente, resto;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("\nO quociente da divis�o � %d e o resto � %d", quociente, resto);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}