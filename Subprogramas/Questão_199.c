/*Escreva um programa que leia três números inteiros e calcule a sua média aritmética.
O cálculo da média deve ser realizado através de um subprograma.*/

#include <stdio.h>

float media(int num1, int num2, int num3){
	int soma = num1 + num2 + num3;
	float media_final = (float)soma / 3;
	return media_final;
}

void main(){
	int num_1, num_2, num_3;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num_1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num_2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num_3);
	float resultado = media(num_1, num_2, num_3);
	printf("A media dos tres numeros eh %.2f.", resultado);	
}
