/*Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
calcule o valor da hipotenusa. O cálculo deve ser realizado através de um
subprograma.*/

#include <stdio.h>
#include <math.h>

int hipotenusa(int cateto_oposto, int cateto_adjacente){
	int calc = (cateto_oposto * cateto_oposto) + (cateto_adjacente * cateto_adjacente);
	int resp = sqrt(calc);
	return resp;
}

void main(){
	int cateto_01, cateto_02;
	printf("Digite o valor do primeiro cateto: ");
	scanf("%d", &cateto_01);
	printf("Digite o valor do segundo cateto: ");
	scanf("%d", &cateto_02);
	int hipo = hipotenusa(cateto_01, cateto_02);
	printf("O valor da hipotenusa eh %d", hipo);	
}
