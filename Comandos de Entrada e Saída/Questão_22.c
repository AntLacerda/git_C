/*Escreva um programa que leia dois n�meros inteiros a e b e determine o maior
m�ltiplo de a que � menor ou igual a b. Por exemplo, o maior m�ltiplo de 3 menor ou
igual a 50 � 48.*/

#include <stdio.h>

void main(){
	int a, b;
	printf("Eu vou descobrir o maior multiplo de a menor igual a b!\n");
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	int divisao = b / a;
	int resultado = divisao * a;
	printf("O maior multiplo de %d menor igual a %d eh %d!", a, b, resultado);	
}
