/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
unidade de milhar, da centena, da dezena e da unidade.*/

#include <stdio.h>

void main(){
	int num;
	printf("Indicando as casas!\n");
	printf("Digite um numero entre 1 e 9999: ");
	scanf("%d", &num);
	int unidade = num % 10;
	int dezena = ((num % 100) - (num % 10));
	int centena = ((num % 1000) - (num % 100));
	int milhar = num - (num % 1000); 
	printf("UNIDADES: %d\n", unidade);
	printf("DEZENAS: %d\n", dezena);
	printf("CENTENAS: %d\n", centena);
	printf("MILHARES: %d\n", milhar);
}
