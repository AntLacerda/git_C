/*Escreva um programa que leia o valor total que um cliente consumiu em um
restaurante e determine o valor final da sua conta, considerando que o restaurante
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A
conta deve ser calculada através de um subprograma.*/

#include <stdio.h>
const float taxa = 0.1;
const int cover = 10;
float calc(float consumo){
	float resp = (consumo * taxa) + cover + consumo;
	return resp;
}

void main(){
	float consumo;
	printf("Digite o valor consumido: ");
	scanf("%f", &consumo);
	float valor_final = calc(consumo);
	printf("O valor final foi de R$%.2f ", valor_final);
}
