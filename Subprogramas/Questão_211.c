/*Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume. O cálculo deve ser realizado através de um subprograma.*/

#include <stdio.h>
const float pi = 3.14;

float volume(int raio){
	float calc = (4 * pi * (raio*raio*raio))/3;
	return calc;
}

void main(){
	int raio_esfe;
	printf("Digite o valor do raio da esfera: ");
	scanf("%d", &raio_esfe);
	float resultado = volume(raio_esfe);
	printf("O valor do raio eh de %.2f", resultado);
}
