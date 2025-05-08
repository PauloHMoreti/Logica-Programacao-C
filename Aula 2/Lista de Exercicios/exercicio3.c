#include <stdio.h>
#include <locale.h>

main()
{
	int vi, vf, index;

	printf("Digite o Valor inicial: ");
	scanf("%d", &vi);
	printf("Digite o Valor final: ");
	scanf("%d", &vf);

	if (vi < vf)
	{
		for (index = vi; index <= vf; index++)
		{
			printf("%d \n", index);
		}
	}
	else if (vi > vf)
	{
		for (index = vi; index >= vf; index--)
		{
			printf("%d \n", index);
		}
	}
}
