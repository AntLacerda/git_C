/*Escreva um programa que leia um número inteiro N e calcule o primeiro número
natural cujo fatorial é maior do que N. */

#include <stdio.h>

void main(){
	int n, i, k=1, fatorial=1, multiplicador=1, condicional;
	printf("Primeiro natural com maior fatorial!\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	if(n==0||n==1){
		printf("RESULTADO: 0!");
	}
	else{
		while(condicional<=n){
			for(i=1;i<=k;i++){
				multiplicador = multiplicador * i;
				condicional = multiplicador; 
			}
			multiplicador = 1;
			k++;
		}
		printf("RESULTADO: %d!", k-1);	
	}
}
