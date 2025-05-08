#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, invertido;
	
	printf("Digite um valor inteiro de 3 digitos: ");
	scanf("%d", &numero);
	
	//Invertendo o n�mero:
	int unidade = numero % 10;
	int dezena = (numero / 10) % 10;
	int centena = numero / 100;
	invertido = (unidade * 100) + (dezena * 10) + centena;
	
	printf("Número Invertido: %d", invertido);
}
