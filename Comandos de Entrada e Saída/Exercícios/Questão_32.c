/*O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de
combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai percorrer
durante uma viagem e o pre�o atual de um litro de combust�vel e calcule quanto ele
dever� gastar com combust�vel durante a viagem.*/

#include <stdio.h>
const kmPorLitro = 14;
void main(){
	float dis, preco;
	printf("Calculando o valor gasto na viagem em gasolina!\n");
	printf("Digite a dist�ncia em km: ");
	scanf("%f", &dis);
	printf("Digite o preco atual da gasolina por litro: ");
	scanf("%f", &preco);
	float disPercorrida = dis / kmPorLitro;
	float valorFinal = disPercorrida * preco;
	printf("O valor gasto sera de R$ %.2f.", valorFinal);
}
