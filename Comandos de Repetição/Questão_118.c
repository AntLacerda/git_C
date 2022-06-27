/*. Escreva um programa que leia um número N e imprima os N primeiros números
primos positivos.*/

#include <stdio.h>

void main(){
	int n, k, i, contador=0, divisao=0, contador2=0;
	printf("Imprimindo numeros primos positivos!\n");
	printf("Digite a quantidade de termos: ");
	scanf("%d", &n);
	while(contador!=n){
		for(k=1;k>0;k++){
			for(i=1;i<=k;i++){
				divisao = k % i;	
				if(divisao==0){
					contador2++;		
				}	
			}
			if(contador2==2){
					contador++;
					printf("%d ", k);
			}
			contador2 = 0;
			if(contador==n){
				break;
			}
		}		
	}
}

