#include <stdio.h>
#include <locale.h>

// Troca de valores
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int A, B, limbo;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    limbo = A;
    A = B;
    B = limbo;

    printf("Agora o valor de A �: %d", A);
    printf("\nAgora o valor de B �: %d", B);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}