/*Escreva um programa que leia os valores de dois �ngulos internos de um tri�ngulo e
calcule o valor do terceiro �ngulo.*/

#include <stdio.h>

void main(){
	int ang1, ang2;
	printf("Calculando o terceiro angulo do triangulo!\n");
	printf("Digite o valor do Angulo 01: ");
	scanf("%d", &ang1);
	printf("Digite o valor do Angulo 02: ");
	scanf("%d", &ang2);
	int ang3 = 180 - ang1 - ang2;
	printf("O terceiro angulo eh %d graus.", ang3);
}
