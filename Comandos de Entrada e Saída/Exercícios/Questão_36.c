/*Escreva um programa que leia dois números inteiros e os armazene em duas variáveis
a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas
variáveis. O programa deve imprimir os valores das duas variáveis antes e após a
permutação.*/

#include <stdio.h>

void main(){
	int a, b;
	printf("Permutando variáveis!\n");
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &a, &b);
	printf("%d%d\n", a, b);
	printf("%d%d", b, a);
}
