#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

main()
{
    // Geração de valores aleatórios
    srand(time(NULL));

    int index = 0;
    float vetor[8];

    while (index <= 7)
    {
        int valor_gerado = rand() % 10000;
        float aux = sqrt(valor_gerado);

        if (aux >= 28.5 && aux <= 47.9)
        {
            vetor[index] = aux;
            index++;
        }
    }

    for (index = 0; index <= 7; index++)
    {
        printf("%.2f \n", vetor[index]);
    }
}