/*Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
imprima os 5 primeiros termos desta progressão.*/

#include <stdio.h>

void main(){
	int termoInicial, razao;
	printf("Calculando a Progressao Aritmetica!\n");
	printf("Digite o valor do termo inicial: ");
	scanf("%d", &termoInicial);
	printf("Digite o valor da razao: ");
	scanf("%d", &razao);
	int a1 = termoInicial + razao;
	int a2 = a1 + razao;
	int a3 = a2 + razao;
	int a4 = a3 + razao;
	int a5 = a4 + razao;
	printf("A PA eh: %d, %d, %d, %d, %d.", termoInicial, a1, a2, a3, a4);	
}
