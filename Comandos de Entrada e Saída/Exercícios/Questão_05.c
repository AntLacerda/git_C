/*Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento.*/

#include <stdio.h>

void main(){
	float pi = 3.14;
	float raio;
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &raio);
	float area = pi * (raio * raio);
	float comprimento = 2 * pi * raio;
	printf("Area: %.2f\n", area);
	printf("Comprimento: %.2f", comprimento);	
}
