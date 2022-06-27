/*Escreva um programa que leia o valor total que um cliente consumiu em um
restaurante e determine o valor final da sua conta, considerando que o restaurante
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.*/

#include <stdio.h>
const int cover = 10;
const float taxaDeServico = 0.1;
void main(){
	float valor;
	printf("Valor final da conta!\n");
	printf("Digite o valor final da comanda: ");
	scanf("%f", &valor);
	float valorFinal = valor + ((valor * taxaDeServico) + cover);
	printf("Voce tera que pagar R$%.2f!", valorFinal);
	
}
