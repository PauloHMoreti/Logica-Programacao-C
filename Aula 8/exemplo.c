#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
    // Geração de valores aleatórios
    srand(time(NULL));

    int vetor[10], i;

    for (i = 0; i <= 9; i++)
    {
        printf("Digite um valor para a posicao %d \n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        printf("vetor[%d] = %d \n", i, vetor[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        vetor[i] = rand() % 10;
    }

    printf("Numeros Aletatorios \n");

    for (i = 0; i <= 9; i++)
    {
        printf("vetor[%d] = %d \n", i, vetor[i]);
    }
}