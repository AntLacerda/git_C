/*. Escreva um programa que leia o termo inicial e a raz�o de uma PA e um n�mero
inteiro positivo N e imprima os N primeiros termos da progress�o. */

#include <stdio.h>

void main(){
	int termo_inicial, razao, num;
	printf("Calculando PA!\n");
	printf("Digite o termo inicial: ");
	scanf("%d", &termo_inicial);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	printf("Digite a quantidade de termos: ");
	scanf("%d", &num);
	int k = num;
	while(k!=0){
		printf("%d ", termo_inicial);
		termo_inicial += razao;
		k--;
	}
}
