#include <stdio.h>
#include <locale.h>

main()
{
	int index, soma;

	soma = 0;

	for (index = 21; index >= 5; index--)
	{
		soma += index;
		printf("%d \n", index);
	}

	printf("Soma dos valores = %d", soma);
}
