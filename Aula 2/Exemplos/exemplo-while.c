#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor, index, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	index = 0;
	
	while(index <= 10){
		resultado = valor * index;
		printf("%d * %d = %d \n", valor, index, resultado);
		index++;
	}
}
