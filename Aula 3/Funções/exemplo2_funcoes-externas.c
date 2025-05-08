#include <stdio.h>
#include "exemplo2.h"

main()
{
    float n1, n2, r1, r2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    r1 = maior_valor(n1, n2);
    r2 = menor_valor(n1, n2);

    printf("Maior valor: %.2f \n", r1);
    printf("Menor valor: %.2f \n", r2);
}
