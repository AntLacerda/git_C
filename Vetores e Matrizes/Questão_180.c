/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números inteiros
e um inteiro N e verifique quantas vezes o número N aparece dentro da matriz. */

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, num, cont=0;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite a posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			if(mat[k][i]==num){
				cont++;
			}
		}
	}
	printf("O numero %d apareceu %d vezes.", num, cont);
}
