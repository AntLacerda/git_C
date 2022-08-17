/*Escreva um programa que leia um vetor de 10 n�meros inteiros e, a seguir, leia um
n�mero inteiro N entre 1 e 10 e verifique quantas sequ�ncias de tamanho N formada
por elementos consecutivos existem no vetor, de forma que todos os elementos da
sequ�ncia estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8,
10, 4, 3, 5, 9, 2, 15), podemos encontrar tr�s sequencias de tr�s (N=3) elementos (0,
6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.*/

#include <stdio.h>

void main(){
	int vet[10], n, k, i, cont=1, cont2=0;
	printf("Digite o vetor de 10 numeros inteiros: \n");
	for(k=0;k<10;k++){
		printf("%d numero: ", k+1);
		scanf("%d", &vet[k]);
	}
	printf("Digite um numero n: ");
	scanf("%d", &n);
	for(k=0;k<10-1;k++){
		if(vet[k]<vet[k+1]){
			cont++;				
		}
		if(cont==n){
			cont2++;
			cont=1;	
		}
	}
	printf("Foram encontradas %d sequencias de %d elementos.", cont2, n);
}
