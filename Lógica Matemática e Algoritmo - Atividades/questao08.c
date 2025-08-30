#include <stdio.h>
#include <locale.h>
#define COMISSAO 0.15

// Salário antes e depois da comissão
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, vendas, salariofinal;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o salário fixo: ");
    scanf("%f", &salario);
    printf("Digite o total de vendas: ");
    scanf("%f", &vendas);

    salariofinal = salario + vendas * COMISSAO;

    printf("O salário fixo é: %.2f", salario);
    printf("\nO salário final é: %.2f", salariofinal);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}