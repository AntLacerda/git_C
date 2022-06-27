/*Escreva um programa que leia um número inteiro N e verifique se ele pertence à série
de Fibonacci.*/

#include <stdio.h>

void main(){
	int n, k, primeiro_termo=1, segundo_termo=1, termo_atual=0, contador=0;
	printf("Descobrindo se o numero pertence a serie de fibonacci!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	for(k=1;k<=n;k++){
		termo_atual = primeiro_termo + segundo_termo;
		primeiro_termo = termo_atual;
		segundo_termo = primeiro_termo - segundo_termo;
		if(n==termo_atual){
			contador++;
		}
	}
	if(n==1||contador==1){
		printf("%d faz parte da serie de fibonacci!", n);
	} 
	else{
			printf("%d nao faz parte da serie de fibonacci", n);
	}
}

