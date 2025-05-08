#include <stdio.h>
#include <math.h>
// ÁREA PARA DESENVOLVER AS FUNÇÕES

void escreve(void)
{
    printf("Paulo Moreti\n");
}

void maior_3(int a, int b, int c)
{
    int maior = a;

    if (b > maior)
    {
        maior = b;
    }

    if (c > maior)
    {
        maior = c;
    }

    printf("Maior Numero: %d\n", maior);
}

void menor_3(int a, int b, int c)
{
    int menor = a;

    if (b < menor)
    {
        menor = b;
    }

    if (c < menor)
    {
        menor = c;
    }

    printf("Menor Numero: %d\n", menor);
}

void eleva(int a, int b)
{
    int result = 1, index;

    for (index = 1; index <= b; index++)
    {
        result = result * a;
    }

    printf("%d elevado a %d = %d \n", a, b, result);
}

float raiz(int a)
{
    return sqrt(a);
}

main()
{
    int a, b, c;
    float rz;
    printf("Digite o primeiro numero ");
    scanf("%d", &a);
    printf("Digite o segundo numero ");
    scanf("%d", &b);
    printf("Digite o terceiro numero ");
    scanf("%d", &c);
    escreve();        // função para escrever o seu nome na tela
    maior_3(a, b, c); // função para mostrar na tela o maior número
    menor_3(a, b, c); // função para mostrar na tela o menor número
    eleva(a, b);      // função que eleva a base "a" ao expoente "b" sem usar o pow
    rz = raiz(c);     // função para calculr a raiz quadrada de c
    printf("Raiz quadrada de %d = %.2f\n", c, rz);
}
