#include <stdio.h>
#include <locale.h>
#define POL 2.54

// Convers�o de cm para polegadas
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float cm, conversao;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o n�mero em cent�metros: ");
    scanf("%f", &cm);

    conversao = cm / POL;

    printf("A convers�o de %.2fcm para polegadas �: %.2fpol", cm, conversao);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}