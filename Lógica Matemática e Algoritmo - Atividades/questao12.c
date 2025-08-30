#include <stdio.h>
#include <locale.h>

// Média e soma de médias
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma, media_1, media_2;
    float media;

    printf("-------------------------------------------------------------------------------------------------------------\n");
    printf("Média dos números 7, 8 e 9");
    media_1 = (7 + 8 + 9) / 3;
    printf("\nÉ: %d", media_1);

    printf("\n\nMédia dos números 4,5 e 6");
    media_2 = (4 + 5 + 6) / 3;
    printf("\nÉ: %d", media_2);

    soma = media_1 + media_2;
    media = soma / 2.0;

    printf("\n\nA soma das médias é %d e a média entre elas é %.2f.", soma, media);
    printf("\n-------------------------------------------------------------------------------------------------------------");

    return 0;
}