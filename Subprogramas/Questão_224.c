/*Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto.
O valor absoluto deve ser calculado atrav�s de um subprograma (sem usar qualquer
subprograma fornecido pela linguagem de programa��o).*/

#include <stdio.h>

int valor_absoluto(int num){
	if(num<0){
		return num = num * -1;
	}
	else{
		return num;
	}
}

void main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	int resultado = valor_absoluto(num);
	printf("O valor absoluto do numero %d eh %d.", num, resultado);
}
