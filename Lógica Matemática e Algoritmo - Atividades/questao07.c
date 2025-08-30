#include <stdio.h>
#include <locale.h>
#include <math.h>

// �rea e Volume de um cilindro
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, area, volume, h;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    volume = M_PI * pow(raio, 2) * h;
    area = 2 * M_PI * raio * (raio + h);

    printf("O volume �: %.2f", volume);
    printf("\nA �rea �: %.2f", area);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}