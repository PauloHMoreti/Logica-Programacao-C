#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media, presenca;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a presença do aluno em porcentagem: ");
    scanf("%f", &presenca);

    media = (nota1 + nota2) / 2;

    if (media >= 6 && presenca >= 75)
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Recuperação!");
    }
}
