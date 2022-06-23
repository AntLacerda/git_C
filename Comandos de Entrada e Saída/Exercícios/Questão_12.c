/*Escreva um programa que leia um valor em polegadas e o converta para centímetros,
considerando que uma polegada equivale a 2.54 cm.*/

#include <stdio.h>

void main(){
	float polegadas;
	float umaPolegada = 2.54;
	printf("Conversor de polegadas para centimetros\n");
	printf("Polegadas: ");
	scanf("%f", &polegadas);
	float conversao = polegadas * umaPolegada;
	printf("Centimetros: %.2fcm", conversao);
}
