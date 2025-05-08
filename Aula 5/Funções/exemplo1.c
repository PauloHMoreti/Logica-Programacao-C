#include <stdio.h>
#include <locale.h>

float maior_valor(float a, float b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

float menor_valor(float a, float b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, r1, r2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    r1 = maior_valor(n1, n2);
    r2 = menor_valor(n1, n2);

    printf("Maior valor: %.2f \n", r1);
    printf("Menor valor: %.2f \n", r2);
}
