#include <stdio.h>
#include <math.h>

// AREA PARA DESENVOLVER AS FUNÇÕES

void escreve(void)
{
    printf("Paulo Moreti \n");
}

void conversao(float valor)
{
    float cm, mm;

    cm = valor / 100;
    mm = valor / 1000;

    printf("%.2f em cm: %.2f \n %.2f em mm: %.2f \n", valor, cm, valor, mm);
}

int fatorial(int n)
{
    int index, resultado = 1;
    for (index = 2; index <= n; index++)
    {
        resultado *= index;
    }
    return resultado;
}

void media_3(int a, int b, int c)
{
    int resultado = 0;

    resultado = (a + b + c) / 3;

    printf("A media de %d, %d e %d = %d \n", a, b, c, resultado);
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

int somatoria(int a, int c)
{
    int index, soma = 0;

    for (index = a; index <= c; index++)
    {
        soma += index;
    }

    printf("Somatoria dos numeros entre %d e %d = %d", a, c, soma);
}

main()
{
    int a, b, c, f = 0;
    float rz = 0;
    printf("Digite o primeiro numero ");
    scanf("%d", &a);
    printf("Digite o segundo numero ");
    scanf("%d", &b);
    printf("Digite um valor em metro [m] ");
    scanf("%d", &c);
    escreve();       // função para escrever o seu nome completo na tela.
    conversao(c);    // converte o valor em metro para centimetro e milimetro e mostra.
    f = fatorial(b); // função para calcular o fatorial de um número.
    printf("Fatorial de %d = %d\n", b, f);
    media_3(a, b, c); // função para calcular a média aritmética entre os 3 parâmetros.
    eleva(a, b);      // função que eleva a base "a" ao expoente "b" sem usar o pow.
    rz = raiz(a);     // função para calcular a raiz quadrada de a.
    printf("Raiz quadrada de %d = %.2f\n", c, rz);
    somatoria(a, c); // função para realizar a soma dos números na faixa entre "a" e "c".
}
