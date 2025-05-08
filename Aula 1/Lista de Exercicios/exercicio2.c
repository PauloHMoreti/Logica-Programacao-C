#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int cavalos, ferraduras;
	
	printf("Digite o número de Cavalos: ");
	scanf("%d", &cavalos);
	
	ferraduras = cavalos * 4;
	
	printf("O total de ferraduras necessárias é: %d", ferraduras);
}
