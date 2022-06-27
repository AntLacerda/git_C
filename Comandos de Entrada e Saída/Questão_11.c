/*Escreva um programa que leia um valor em real, a cotação atual do dólar e calcule o
valor informado pelo usuário em dólares.*/

#include <stdio.h>

void main(){
	float real, cotacao;
	printf("Convertendo de real para dolar!\n");
	printf("Valor em real: ");
	scanf("%f", &real);
	printf("Cotacao atual do dolar: ");
	scanf("%f", &cotacao);
	float dolar = real / cotacao;
	printf("Valor em dolares: %.2f", dolar);
}
