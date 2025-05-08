#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes, dia, totalMeses, totalDiasMeses, totalDias;
	
	printf("Digite o mês: ");
	scanf("%d", &mes);
	printf("Digite o dia: ");
	scanf("%d", &dia);
	
	totalMeses = mes - 1; //Remove o mês atual
	totalDiasMeses = totalMeses * 30;
	totalDias = totalDiasMeses + dia;
	
	printf("%d", totalDias);
}
