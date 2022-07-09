/*Escreva um programa que leia um vetor de 10 n�meros inteiros e dois n�meros
inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posi��es M e N do
vetor. O programa deve tamb�m imprimir o estado do vetor antes e ap�s a invers�o.*/

#include <stdio.h>

void main(){
	int vetor[10], m, n, k, auxiliar;
	printf("Invertendo as posicoes indicadas!\n");
	for(k=0;k<10;k++){
		printf("Digite o %d numero: ", k+1);
		scanf("%d", &vetor[k]);
	}
	printf("Digite um numero para ser a primeira posicao [M]: ");
	scanf("%d", &m);
	printf("Digite um numero para ser a segunda posicao [N]: ");
	scanf("%d", &n);
	printf("Vetor inicial: ");
	for(k=0;k<10;k++){
		printf("%d ", vetor[k]);
	}
	printf("\n");
	auxiliar = vetor[m-1];
	vetor[m-1] = vetor[n-1];
	vetor[n-1] = auxiliar;
	printf("Vetor invertido: ");
	for(k=0;k<10;k++){
		printf("%d ", vetor[k]);
	}
	printf("\n");
}
