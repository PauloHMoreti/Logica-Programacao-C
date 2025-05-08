#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b, c, termos, count;

	printf("Digite a quantidade de termos: ");
	scanf("%d", &termos);

	a = 1;
	b = 1;
	count = 1;

	printf("1 1 ");

	while (count <= termos - 2)
	{
		c = a + b;
		printf("%d ", c);

		a = b;
		b = c;

		count++;
	}
}
