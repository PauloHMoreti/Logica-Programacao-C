#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
    // Geração de valores aleatórios
    srand(time(NULL));

    int vetor[10], index;
    int acumulador = 0, pares = 0;

    for (index = 0; index <= 9; index++)
    {
        vetor[index] = rand() % 27;

        acumulador += vetor[index];

        if (vetor[index] % 2 == 0)
        {
            pares++;
        }

        if (index < 9)
        {
            printf("%d + ", vetor[index]);
        }
        else
        {
            printf("%d = ", vetor[index]);
        }
    }

    printf("%d \n", acumulador);
    printf("Total de valores pares = %d", pares);
}