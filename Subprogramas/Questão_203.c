/*Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
sua área, que deve ser calculada através de um subprograma.*/

#include <stdio.h>

float area_triangulo(int base, int altura){
	float resp = (base * altura)/2;
	return resp;
}

void main(){
	int base_tri, altura_tri;
	printf("Digite o valor da base do triangulo: ");
	scanf("%d", &base_tri);
	printf("Digite o valor da altura do triangulo: ");
	scanf("%d", &altura_tri);
	float area = area_triangulo(base_tri, altura_tri);
	printf("A area do triangulo eh %.2f.", area);
}
