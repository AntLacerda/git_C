/*Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a q
a sua área.*/

#include <stdio.h>

void main(){
	int base, altura;
	printf("Vamos calcular a area de um triangulo\n");
	printf("Digite o valor da base: ");
	scanf("%i", &base);
	printf("Digite o valor da altura:");
	scanf("%i", &altura);
	float area = (base * altura) / 2;
	printf("A area do triangulo eh %.2f", area);
}
