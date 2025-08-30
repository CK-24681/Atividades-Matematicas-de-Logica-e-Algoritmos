#include <stdio.h>
#include <locale.h>

// Cálculo do valor de venda de um carro
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco_fabrica, imposto, porcentagem, preco_final;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o preco de fabrica: ");
    scanf("%f", &preco_fabrica);

    imposto = preco_fabrica * 0.45;
    porcentagem = preco_fabrica * 0.28;
    preco_final = preco_fabrica + imposto + porcentagem;

    printf("O produto é: %.2f", preco_final);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}