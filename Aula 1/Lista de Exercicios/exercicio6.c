#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float pesoPrato, valorRefeicao;
	
	printf("Digite o peso do seu prato [kg]: ");
	scanf("%f", &pesoPrato);
	
	valorRefeicao = pesoPrato * 12;
	
	printf("Valor a Pagar: R$%.2f", valorRefeicao);
}
