/*Escreva um programa que leia um valor em real, a cota��o atual do d�lar e calcule o
valor informado pelo usu�rio em d�lares.*/

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
