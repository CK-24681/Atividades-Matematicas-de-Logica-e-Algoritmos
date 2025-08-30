#include <stdio.h>
#include <locale.h>
#define POL 2.54

// Conversão de cm para polegadas
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float cm, conversao;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o número em centímetros: ");
    scanf("%f", &cm);

    conversao = cm / POL;

    printf("A conversão de %.2fcm para polegadas é: %.2fpol", cm, conversao);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}