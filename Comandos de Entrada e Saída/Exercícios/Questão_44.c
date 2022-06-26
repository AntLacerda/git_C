/*Escreva um programa que leia individualmente os valores dos quatro dígitos de um
valor em binário e calcule o seu valor correspondente em decimal.*/

#include <stdio.h>
#include <math.h>
const int valorDoBinario = 2;
void main(){
	int bin1, bin2, bin3, bin4;
	printf("Convertendo de binario p decimal!\n");
	printf("Digite o valor em binario de 4 digitos.\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &bin1);
	printf("Digite o segundo valor: ");
	scanf("%d", &bin2);	
	printf("Digite o terceiro valor: ");
	scanf("%d", &bin3);
	printf("Digite o quarto valor: ");
	scanf("%d", &bin4);
	int vbin1 = bin1 * pow(valorDoBinario, 3);
	int vbin2 = bin2 * pow(valorDoBinario, 2);
	int vbin3 = bin3 * pow(valorDoBinario, 1);
	int vbin4 = bin4 * pow(valorDoBinario, 0);
	int decimal = vbin1 + vbin2 + vbin3 + vbin4;
	printf("O valor em decimal eh %d", decimal);
}


