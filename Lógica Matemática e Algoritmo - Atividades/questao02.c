#include <stdio.h>
#include <locale.h>

// Comando que mostra sucessor e antecessor
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, antecessor, sucessor;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    antecessor = n - 1;
    sucessor = n + 1;

    printf("O antecessor do n�mero digitado � %d e o sucessor � %d.", antecessor, sucessor);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}