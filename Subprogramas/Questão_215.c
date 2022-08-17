/*O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai
percorrer durante uma viagem e o preço atual de um litro de combustível e calcule
quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser
realizado através de um subprograma.*/

#include <stdio.h>

float calc(int dis, float preco){
	float resp = (dis/14) * preco;
	return preco;
}

void main(){
	int distancia;
	float preco;
	printf("Digite a distancia percorrida em km: ");
	scanf("%d", &distancia);
	printf("Digite o preco atual da gasolina: ");
	scanf("%f", &preco);
	float resultado = calc(distancia, preco);
	printf("Valor final: R$%.2f", resultado);
}
