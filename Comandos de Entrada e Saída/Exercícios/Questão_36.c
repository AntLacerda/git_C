/*Escreva um programa que leia dois n�meros inteiros e os armazene em duas vari�veis
a e b. Ap�s a leitura, o programa deve permutar os valores armazenados nas duas
vari�veis. O programa deve imprimir os valores das duas vari�veis antes e ap�s a
permuta��o.*/

#include <stdio.h>

void main(){
	int a, b;
	printf("Permutando vari�veis!\n");
	printf("Digite dois numeros inteiros: ");
	scanf("%d%d", &a, &b);
	printf("%d%d\n", a, b);
	printf("%d%d", b, a);
}
