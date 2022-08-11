/*Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
área e o seu comprimento. O programa deve fornecer um subprograma para calcular
a área e outro para calcular o comprimento. */

#include <stdio.h>
const float pi = 3.14;

float area(int raio){
	float resultado = pi * (raio * raio);
	return resultado;
}

float comprimento(int raio){
	float resultado = 2 * pi * raio;
	return resultado;
}

void main(){
	int raio_circ;
	printf("Digite o valor do raio: ");
	scanf("%d", &raio_circ);
	float area_circ = area(raio_circ);
	float comprimento_circ = comprimento(raio_circ);
	printf("Area: %.2f\nComprimento: %.2f", area_circ, comprimento_circ);
}
