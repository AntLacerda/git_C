/*Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
valor correspondente em Fahrenheit e em Kelvin.*/

#include <stdio.h>

void main(){
	float cel;
	printf("Vamos converter a temperatura.\n");
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &cel);
	float fah = (cel * 1.8) + 32;
	float kel = cel + 273.15;
	printf("Fahrenheit: %.2f\n", fah);
	printf("Kelvin: %.2f", kel);
}
