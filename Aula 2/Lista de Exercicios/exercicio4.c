#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int valor, index, fatorial;

	printf("Digite um Valor: ");
	scanf("%d", &valor);

	fatorial = 1;

	for (index = valor; index > 0; index--)
	{
		fatorial = fatorial * index;
	}

	printf("%d", fatorial);
}
