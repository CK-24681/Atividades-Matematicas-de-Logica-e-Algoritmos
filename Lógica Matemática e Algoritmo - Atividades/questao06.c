#include <stdio.h>
#include <locale.h>
#include <math.h>

// �rea de um c�rculo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, area;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A �rea �: %.2f", area);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}