/*Escreva um programa que leia um número inteiro N e, a seguir leia vários números
inteiros. O processo de leitura deve ser encerrado quando a soma dos números
digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N.*/

#include <stdio.h>

void main(){
	int n, soma, num;
	printf("Somando numeros infinitos!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	while(soma<=n){
		printf("Digite outro numero: ");
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("Processo encerrado, soma final: %d", soma);
}
