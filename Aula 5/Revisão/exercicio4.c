#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor, q1, r1, q2, r2, invertido;

    printf("Digite uma centena: ");
    scanf("%d", &valor);

    // Separando o N�mero:
    q1 = valor / 100;
    r1 = valor % 100;
    q2 = r1 / 10;
    r2 = r1 % 10;
    invertido = r2 * 100 + q2 * 10 + q1;

    printf("Valor invertido = %d", invertido);
}
