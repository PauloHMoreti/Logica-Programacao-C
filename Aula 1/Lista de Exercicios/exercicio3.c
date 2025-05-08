#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int paesVendidos, broasVendidas;
	float totalPaes, totalBroas, totalLiquido, totalPoup;
	
	printf("Digite o total de pães vendidos: ");
	scanf("%d", &paesVendidos);
	printf("Digite o total de broas vendidas: ");
	scanf("%d", &broasVendidas);
	
	//printf("paes: %d \n broas: %d", paesVendidos, broasVendidas);
	
	totalPaes = paesVendidos * 0.12;
	totalBroas = broasVendidas * 1.50;
	totalLiquido = totalPaes + totalBroas;
	totalPoup = totalLiquido * 0.10;
	
	printf("Valor total de Pães vendidos: %.2f \n", totalPaes);
	printf("Valor total de Broas vendidos: %.2f \n", totalBroas);
	printf("Total Liquido: R$%.2f\n", totalLiquido);
	printf("Total Poupança: R$%.2f\n", totalPoup);
}
