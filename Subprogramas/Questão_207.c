/*Escreva um programa que leia um valor em polegadas e o converta para cent�metros,
considerando que uma polegada equivale a 2.54 cm. A convers�o deve ser realizada
atrav�s de um subprograma.*/

#include <stdio.h>
const float centimetro = 2.54;

float cent_para_pole(int polegada){
	float resp = centimetro * polegada;
	return resp;
}

void main(){
	int pole;
	printf("Digite o valor em polegadas: ");
	scanf("%d", &pole);
	float centimetros = cent_para_pole(pole);
	printf("%d polegadas equivalem a %.1fcm.", pole, centimetros);
}

