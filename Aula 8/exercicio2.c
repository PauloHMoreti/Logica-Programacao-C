#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
    // Geração de valores aleatórios
    srand(time(NULL));

    int vetor[8], index = 0;

    while (index <= 7)
    {
        int valor_gerado = rand() % 33;

        if (valor_gerado >= 18)
        {
            vetor[index] = valor_gerado;
            index++;
        }
    }

    for (index = 0; index <= 7; index++)
    {
        printf("%d \n", vetor[index]);
    }
}