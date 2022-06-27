/*Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

void main(){
	int n, k, i, j, aux=1, aux2=0;
	printf("Triangulo em C!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	aux2 = n;
	for(i=1;i<=n;i++){
		for(k=aux;k<=n;k++){
			printf("*");
		}
		printf("\n");
		for(j=1;j<=aux;j++){
			printf(" ");
		}
		aux++;
	}
}
