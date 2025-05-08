#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n > 100)
    {
        printf("Maior que 100");
    }
    else if (n == 100)
    {
        printf("Igual a 100");
    }
    else
    {
        printf("Menor que 100");
    }
}
