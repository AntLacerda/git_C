/*L�zaro est� muito feliz por ter enfim conseguido construir a sua casa pr�pria. Sabendose que a constru��o durou 180 dias de trabalho, escreva um programa que leia o
n�mero de pedreiros que trabalhavam na obra, o n�mero de ajudantes e o valor da
di�ria do pedreiro e calcule quanto L�zaro gastou com m�o de obra. Para resolver este
programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da
obra e que o valor da di�ria de cada ajudante corresponde � metade do valor da di�ria
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
