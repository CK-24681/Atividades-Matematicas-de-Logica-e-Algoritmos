#include <stdio.h>
#include <locale.h>

// M�dia e soma de m�dias
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma, media_1, media_2;
    float media;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("M�dia dos n�meros 7, 8 e 9");
    media_1 = (7 + 8 + 9) / 3;
    printf("\n�: %d", media_1);

    printf("\n\nM�dia dos n�meros 4,5 e 6");
    media_2 = (4 + 5 + 6) / 3;
    printf("\n�: %d", media_2);

    soma = media_1 + media_2;
    media = soma / 2.0;

    printf("\n\nA soma das m�dias � %d e a m�dia entre elas � %.2f.", soma, media);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}