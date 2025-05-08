#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    // Váriaveis:
    int num, q1, r1, q2, r2, q3, r3, inv;

    // Input:
    printf("Digite um valor inteiro de 4 digitos: ");
    scanf("%d", &num);

    // Cálculos:
    q1 = num / 1000;
    r1 = num % 1000;

    q2 = r1 / 100;
    r2 = r1 % 100;

    q3 = r2 / 10;
    r3 = r2 % 10;

    // Invertendo o Número:
    inv = (r3 * 1000) + (q3 * 100) + (q2 * 10) + q1;

    printf("%d", inv);
}
