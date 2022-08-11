/*Escreva um programa que leia os valores de dois ângulos internos de um triângulo e
calcule o valor do terceiro ângulo. O cálculo deve ser realizado através de um
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
