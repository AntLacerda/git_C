/*O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai percorrer
durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele
deverá gastar com combustível durante a viagem.*/

#include <stdio.h>
const kmPorLitro = 14;
void main(){
	float dis, preco;
	printf("Calculando o valor gasto na viagem em gasolina!\n");
	printf("Digite a distância em km: ");
	scanf("%f", &dis);
	printf("Digite o preco atual da gasolina por litro: ");
	scanf("%f", &preco);
	float disPercorrida = dis / kmPorLitro;
	float valorFinal = disPercorrida * preco;
	printf("O valor gasto sera de R$ %.2f.", valorFinal);
}
