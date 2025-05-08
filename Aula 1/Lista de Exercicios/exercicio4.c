#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomePessoa;
	int idade, totalDias;
	
	printf("Digite seu nome: ");
	scanf("%c", &nomePessoa);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	totalDias = idade * 365;
	printf("\n %c, você já viveu %d Dias", nomePessoa, totalDias);
}
