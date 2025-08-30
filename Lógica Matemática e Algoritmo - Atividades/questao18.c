#include <stdio.h>
#include <locale.h>

// Programa que calcula de itens comprado em varejo ou consumo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite a quantidade de maça(s) compradas: ");
    scanf("%d", &x);

    float resultado = (x >= 12) ? (x * 0.25) : (x * 0.3);

    printf("O valor total da compra é: %.2f", resultado);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}