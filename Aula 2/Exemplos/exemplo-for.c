#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor, index, multiplicado;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	for(index = 0; index <= 10; index++){
		multiplicado = valor * index;
		printf("%d * %d = %d \n", valor, index, multiplicado);
	}
}
