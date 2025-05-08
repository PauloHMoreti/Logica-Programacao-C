#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    // Variáveis:
    float nota1, nota2, nota3, faltas, media;

    // Inputs:
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a porcentagem de faltas: ");
    scanf("%f", &faltas);

    if (faltas > 25)
    {
        printf("RETIDO POR FALTAS");
    }

    if (faltas <= 25)
    {
        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 5)
        {
            printf("APROVADO");
        }
        else if (media < 5 && media >= 3)
        {
            printf("RECUPERAÇÃO");
        }
        else
        {
            printf("REPROVADO POR NOTA");
        }
    }
}
