#include <stdio.h>
#include <locale.h>
#include <math.h>

// Área de um círculo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, area;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A área é: %.2f", area);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}