/*Escreva um programa que leia os valores de dois �ngulos internos de um tri�ngulo e
calcule o valor do terceiro �ngulo. O c�lculo deve ser realizado atrav�s de um
subprograma.*/

#include <stdio.h>

int ang_interno(int ang_01, int ang_02){
	int resp = 180 - ang_01 - ang_02;
	return resp;
}

void main(){
	int angulo_01, angulo_02;
	printf("Digite o valor do primeiro angulo: ");
	scanf("%d", &angulo_01);
	printf("Digite o valor do segundo angulo: ");
	scanf("%d", &angulo_02);
	int ang_int = ang_interno(angulo_01, angulo_02);
	printf("O valor do angulo interno eh %d", ang_int);
}
