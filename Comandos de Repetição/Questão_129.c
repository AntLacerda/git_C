/*Escreva um programa que leia dois n�meros inteiros M e N e imprima todos os pares
(x, y) poss�veis de forma que x e y perten�am ao intervalo [M, N] e y seja sempre maior
ou igual a x.*/

#include <stdio.h>

void main(){
	int m, n, k, i;
	printf("Criando loop com intervalo!\n");
	printf("Digite o numero m [m, n]: ");
	scanf("%d", &m);
	printf("Digite o numero n [m, n]: ");
	scanf("%d", &n);
	for(k=m;k<=n;k++){
		for(i=k;i<=n;i++){
			printf("[%d, %d]\n", k, i);
		}
	}
}
