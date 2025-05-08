#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorLitro, valorPago, qtdeLitros;
	
	printf("Digite o valor da gasolina [R$]: ");
	scanf("%f", &valorLitro);
	printf("Digite o valor total pago [R$]: ");
	scanf("%f", &valorPago);
	qtdeLitros = valorPago / valorLitro;
	printf("Você abasteceu %.2f Litros", qtdeLitros);
}
