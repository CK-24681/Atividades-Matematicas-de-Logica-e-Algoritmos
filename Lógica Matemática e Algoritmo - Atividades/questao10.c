#include <stdio.h>
#include <locale.h>
#define R2 2
#define R5 5
#define R10 10
#define R20 20
#define R50 50
#define R100 100

// Contagem de cédulas
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor, limbo, r2, r5, r10, r20, r50, r100, total;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o valor que irá sacar (Apenas valores que terminem em 2, 4, 5, 7 e 9): ");
    scanf("%d", &valor);

    r100 = valor / R100;
    limbo = valor % R100;
    r50 = limbo / R50;
    limbo = limbo % R50;
    r20 = limbo / R20;
    limbo = limbo % R20;
    r10 = limbo / R10;
    limbo = limbo % R10;
    r5 = limbo / R5;
    limbo = limbo % R5;
    r2 = limbo / R2;

    total = r100 + r50 + r20 + r10 + r5 + r2;

    printf("\nReceberá %d cédulas de 2 reais", r2);
    printf("\nReceberá %d cédulas de 5 reais", r5);
    printf("\nReceberá %d cédulas de 10 reais", r10);
    printf("\nReceberá %d cédulas de 20 reais", r20);
    printf("\nReceberá %d cédulas de 50 reais", r50);
    printf("\nReceberá %d cédulas de 100 reais", r100);
    printf("\n\nA quantidade total de cédulas é de %d cédulas.", total);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}