/*Escreva um programa que leia um número inteiro N e imprima todos os termos da
série de Fibonacci que são menores ou iguais a N.*/

#include <stdio.h>

void main(){
	int n, k, primeiro_termo=1, segundo_termo=0, termo_final=0; 
	printf("Sequencia de Fibonacci!\n");
	printf("Termos da sequencia: ");
	scanf("%d", &n);
		for(k=1;k<=n;k++){
			termo_final = primeiro_termo + segundo_termo;
			primeiro_termo = termo_final;
			segundo_termo = primeiro_termo - segundo_termo;
			if(termo_final<=n){
				printf("%d - ", termo_final);	
			}
		}	
}
