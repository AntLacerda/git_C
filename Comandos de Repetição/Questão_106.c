/*. Escreva um programa que leia dois n�meros inteiros M e N e calcule a m�dia
aritm�tica dos n�meros do intervalo [M, N].*/

#include <stdio.h>

void main(){
	int m, n, k, soma=0, contador=0;
	printf("Media aritmetica entre intervalos!\n");
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite outro numero: ");
	scanf("%d", &n);
	for(k=m;k<=n;k++){
		soma += k;
		contador++;
	}
	float media = (float)soma / contador;
	printf("%.1f eh a media do intervalo [%d, %d].", media, m, n);
}
