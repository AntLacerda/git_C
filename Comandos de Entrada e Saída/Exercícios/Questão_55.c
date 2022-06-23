/*Lázaro está muito feliz por ter enfim conseguido construir a sua casa própria. Sabendose que a construção durou 180 dias de trabalho, escreva um programa que leia o
número de pedreiros que trabalhavam na obra, o número de ajudantes e o valor da
diária do pedreiro e calcule quanto Lázaro gastou com mão de obra. Para resolver este
programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da
obra e que o valor da diária de cada ajudante corresponde à metade do valor da diária
do pedreiro.*/

#include <stdio.h>
const int diasDeConstrucao = 180;
void main(){
	int numPedreiros, numAjudantes;
	float diariaDoPedreiro;
	printf("Calculando o custo de mao de obra!\n");
	printf("Informe a quantidade de pedreiros: ");
	scanf("%d", &numPedreiros);
	printf("Informe a quantidade de ajudantes: ");
	scanf("%d", &numAjudantes);
	printf("Informe quanto custa a diaria do pedreiro: ");
	scanf("%f", &diariaDoPedreiro);
	float valorPedreiro = diariaDoPedreiro * diasDeConstrucao;
	float valorAjudantes = (diariaDoPedreiro / 2) * diasDeConstrucao;
	float valorMaoDeObra = (valorPedreiro * numPedreiros) + (valorAjudantes * numAjudantes);
	printf("O custo de mao de obra foi de R$%.2f.", valorMaoDeObra);
}
