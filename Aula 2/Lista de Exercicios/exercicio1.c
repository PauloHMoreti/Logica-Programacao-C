#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    float i;

    for (i = -20; i <= 20; i += 2.5)
    {
        printf("%.2f \n", i);
    }
}
