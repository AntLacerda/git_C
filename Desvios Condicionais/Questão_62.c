/*Escreva um programa que leia dois números inteiros M e N e verifique se N é múltiplo
de M.*/

#include <stdio.h>

void main(){
	int m, n;
	printf("Conferindo se n eh multiplo de m!\n");
	printf("Digite um numero(n): ");
	scanf("%d", &n);
	printf("Digite um numero(m): ");
	scanf("%d", &m);
	int teste = n % m;
	if(teste==0){
		printf("%d eh multiplo de %d!", n, m);
	}
	else{
		printf("%d nao eh multiplo de %d", n, m);
	}
}
