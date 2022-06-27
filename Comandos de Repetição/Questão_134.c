/*Escreva um programa que simule uma votação. O programa deve computar o voto de
20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos
por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções
de voto são:
[1] João Borracheiro
[2] Zé do caminhão
[3] Maria da bodega
[4] Ana */

#include <stdio.h>

void main(){
	int n, aux, binario=0, multiplicador=1;
	printf("Digite um numero decimal: ");
	scanf("%d", &n);
	aux = n;
	do{
		binario = binario + ((aux % 2) * multiplicador);
		aux = aux / 2;
		printf("%d\n", aux);
		multiplicador = multiplicador * 10;
	}while(aux!=0);
	printf("O numero %d eh %d em binario.", n, binario);
}
