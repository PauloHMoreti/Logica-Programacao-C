#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorTotalP, valorTotalM, valorTotalG, valorTotal;
	int vendasP, vendasM, vendasG;
	
   //Entrada das vendas:
   printf("Digite o total vendido de camisetas P: ");
   scanf("%d", &vendasP);
   printf("Digite o total vendido de camisetas M: ");
   scanf("%d", &vendasM);
   printf("Digite o total vendido de camisetas G: ");
   scanf("%d", &vendasG);
   
   //Calculando o total das vendas:
   valorTotalP = vendasP * 10;
   valorTotalM = vendasM * 12;
   valorTotalG = vendasG * 15;
   valorTotal = valorTotalP + valorTotalM + valorTotalG;
   
   //Imprimindo o valor total das vendas:
   printf("Total arrecadado: R$%.2f", valorTotal);
}
