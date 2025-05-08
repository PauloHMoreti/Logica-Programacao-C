#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    float xA, xB, yA, yB, d, cat1, cat2;

    printf("Digite a coordenada x do ponto a: ");
    scanf("%f", &xA);
    printf("Digite a coordenada x do ponto b: ");
    scanf("%f", &xB);
    printf("Digite a coordenada y do ponto a: ");
    scanf("%f", &yA);
    printf("Digite a coordenada y do ponto b: ");
    scanf("%f", &yB);

    cat1 = pow((xB - xA), 2);
    cat2 = pow((yB - yA), 2);
    d = sqrt(cat1 + cat2);

    printf("Distância = %.2f\n", d);
}
