#include <stdio.h>
#include <locale.h>
#define COMISSAO 0.15

// Sal�rio antes e depois da comiss�o
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, vendas, salariofinal;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o sal�rio fixo: ");
    scanf("%f", &salario);
    printf("Digite o total de vendas: ");
    scanf("%f", &vendas);

    salariofinal = salario + vendas * COMISSAO;

    printf("O sal�rio fixo �: %.2f", salario);
    printf("\nO sal�rio final �: %.2f", salariofinal);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}