#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float largura, comprimento, area;
	
	printf("Informe a largura do terreno [m]: ");
    scanf("%f", &largura);
    printf("Informe o comprimento do terreno [m]: ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    printf("Area do Terreno = %.2f[m�]", area);
}
