#include <stdio.h>

int main()
{
    int N; // número de participantes
    int G; // número de pizzas de 8 pedaços
    int M; // número de pizzas de 6 pedaços

    // Entrada dos dados
    scanf("%d", &N); // número de participantes
    scanf("%d", &G); // pizzas de 8 pedaços
    scanf("%d", &M); // pizzas de 6 pedaços

    // Calcula o total de pedaços de pizza
    int total_pedacos = G * 8 + M * 6;

    // Calcula quantos pedaços sobram após a distribuição
    int sobra = total_pedacos - N;
    if (sobra < 0)
    {
        sobra = 0;
    }

    // Saída do número de pedaços que sobram
    printf("%d\n", sobra);

    return 0;
}
