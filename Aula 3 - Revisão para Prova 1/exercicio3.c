#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    // Variáveis:
    int carroA, carroB, carroC;

    // Entradas:
    printf("Distância da Traseira do Carro A: ");
    scanf("%d", &carroA);
    printf("Distância da Traseira do Carro B: ");
    scanf("%d", &carroB);
    printf("Distância da Traseira do Carro C: ");
    scanf("%d", &carroC);

    if ((carroB - carroA) < (carroC - carroB))
    {
        printf("1");
    }
    else if ((carroB - carroA) > (carroC - carroB))
    {
        printf("-1");
    }
    else if ((carroB - carroA) == (carroC - carroB))
    {
        printf("0");
    }
}
