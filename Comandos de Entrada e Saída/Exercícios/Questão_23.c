/*Escreva um programa que leia o valor do raio de uma esfera e determine o seu
volume.*/

#include <stdio.h>
#include <math.h>
const float pi = 3.14;
void main(){
	float raio;
	printf("Calculando o volume da esfera!\n");
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	float volume = (4 * pi * pow(raio, 3)) / 3;
	printf("O volume da esfera eh %.2f m3.", volume);
}
