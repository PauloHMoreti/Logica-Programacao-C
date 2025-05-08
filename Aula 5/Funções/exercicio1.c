#include <stdio.h>
#include <locale.h>

// Funções:
void exemplo(void)
{
    printf("Paulo Moreti\n");
}

void maior_valor(int a, int b)
{
    if (a > b)
    {
        printf("O maior valor é %d \n", a);
    }
    else
    {
        printf("O maior valor é %d \n", b);
    }
}

int menor_valor(int a, int b)
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

// Main:
main()
{
    setlocale(LC_ALL, "Portuguese");

    // Tipo 1:
    exemplo();

    int n1, n2, result;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    // Tipo 2:
    maior_valor(n1, n2);

    // Tipo 3:
    result = menor_valor(n1, n2);
    printf("O menor valor é  %d", result);
}
