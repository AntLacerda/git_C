/*O carro de Jo�o consegue percorrer em m�dia 14 km consumindo 1 litro de
combust�vel. Escreva um programa que leia o valor da dist�ncia que Jo�o vai
percorrer durante uma viagem e o pre�o atual de um litro de combust�vel e calcule
quanto ele dever� gastar com combust�vel durante a viagem. O c�lculo deve ser
realizado atrav�s de um subprograma.*/

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
