/*. Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos
os números do intervalo [M, N].*/

#include <stdio.h>

void main(){
	int m, n, k, soma=0;
	printf("Somando intervalos!\n");
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite outro numero: ");
	scanf("%d", &n);
	for(k=m;k<=n;k++){
		soma += k;
		printf("%d\n", soma);
	}
	printf("%d", soma);
}
