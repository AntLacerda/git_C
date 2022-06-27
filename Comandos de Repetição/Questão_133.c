/*Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*
**
***
****
*****
*/

#include <stdio.h>

void main(){
	int n, k, i, j;
	printf("Triangulo invertido!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	int aux = n;
	for(k=n;k>0;k--){
		for(i=aux;i>=k;i--){
			printf("*");
		}
		printf("\n");
	}
}
