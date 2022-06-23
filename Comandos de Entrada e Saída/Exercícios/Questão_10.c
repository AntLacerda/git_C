/*Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa.*/

#include <stdio.h>
#include <math.h>

void main(){
	int cateto1, cateto2;
	printf("Calculando a hipotenusa!\n");
	printf("Cateto 01: ");
	scanf("%i", &cateto1);
	printf("Cateto 02: ");
	scanf("%i", &cateto2);
	float soma = (cateto1 * cateto1) + (cateto2 * cateto2);
	float hipotenusa = sqrt(soma);
	printf("A hipotenusa eh %.2f", hipotenusa);	
}
