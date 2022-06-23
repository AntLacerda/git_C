/*Escreva um programa que leia um valor em KB e calcule o seu valor correspondente
em bits, bytes, MB e GB.*/

#include <stdio.h>

void main(){
	int kb;
	printf("Calculando peso do arquivo!\n");
	printf("Digite o peso do arquivo em KB: ");
	scanf("%i", &kb);
	int bits = (kb * 1024) * 8;
	int byte = kb * 1024;
	float megabyte = kb / 1024;
	float gigabyte = megabyte / 1024;
	printf("Bits: %i\n", bits);
	printf("Bytes: %i\n", byte);
	printf("Megabytes(MB): %.2f\n", megabyte);
	printf("Gigabytes(GB): %.2f\n", gigabyte);
}
