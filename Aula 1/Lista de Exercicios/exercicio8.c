#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota_1, nota_2, nota_3, nota_peso_2, nota_peso_3, total_notas, media;
	
	printf("Digite a primeira nota: ");
	scanf("%d", &nota_1);
	printf("Digite a segunda nota: ");
	scanf("%d", &nota_2);
	printf("Digite a terceira nota: ");
	scanf("%d", &nota_3);
	
	//Adicionando o peso as notas:
   nota_peso_2 = nota_2 * 2;
   nota_peso_3 = nota_3 * 3;
   
   total_notas = nota_1 + nota_peso_2 + nota_peso_3;

   //Calculando a média:
   media = total_notas / 3;
   
   printf("Média ponderada: %d", media);
}
