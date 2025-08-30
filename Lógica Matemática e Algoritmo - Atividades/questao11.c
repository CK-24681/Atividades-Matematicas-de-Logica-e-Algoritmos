#include <stdio.h>
#include <locale.h>

// Troco de supermercado
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int troco_total;
    int c2, c5, c10, c20, c50, c100;
    int m005, m01, m025, m05, m1;
    float compra, pagamento, troco;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    troco = pagamento - compra;
    printf("Troco: R$%.2f", troco);

    troco_total = troco * 100;

    // cédulas
    c100 = troco_total / 10000;
    troco_total %= 10000;
    c50 = troco_total / 5000;
    troco_total %= 5000;
    c20 = troco_total / 2000;
    troco_total %= 2000;
    c10 = troco_total / 1000;
    troco_total %= 1000;
    c5 = troco_total / 500;
    troco_total %= 500;
    c2 = troco_total / 200;
    troco_total %= 200;

    // moedas
    m1 = troco_total / 100;
    troco_total %= 100;
    m05 = troco_total / 50;
    troco_total %= 50;
    m025 = troco_total / 25;
    troco_total %= 25;
    m01 = troco_total / 10;
    troco_total %= 10;
    m005 = troco_total / 5;
    troco_total %= 5;

    printf("\n\n%d moeda(s) de R$0,05", m005);
    printf("\n%d moeda(s) de R$0,10", m01);
    printf("\n%d moeda(s) de R$0,25", m025);
    printf("\n%d moeda(s) de R$0,50", m05);
    printf("\n%d moeda(s) de R$1,00", m1);
    printf("\n%d cédula(s) de R$2,00", c2);
    printf("\n%d cédula(s) de R$5,00", c5);
    printf("\n%d cédula(s) de R$10,00", c10);
    printf("\n%d cédula(s) de R$20,00", c20);
    printf("\n%d cédula(s) de R$50,00", c50);
    printf("\n%d cédula(s) de R$100,00", c100);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}