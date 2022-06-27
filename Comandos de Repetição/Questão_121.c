/*. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
um número inteiro N e imprima todos os termos da progressão menores ou iguais a N
(caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja
negativa).*/

#include <stdio.h>

void main(){
	int termo_inicial, razao, n, k, pa;
	printf("PA com limite!\n");
	printf("Digite o termo inicial da PA: ");
	scanf("%d", &termo_inicial);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	printf("Digite o limite: ");
	scanf("%d", &n);
	printf("%d ", termo_inicial);
	if(n>0){
		for(k=1;k<=n;k++){
			if(razao>0){
				termo_inicial += razao;
				if(termo_inicial<=n){
					printf("%d ", termo_inicial);
				}
			}	
			if(razao<0){
				termo_inicial += razao;
				if(termo_inicial>=n){
					printf("%d ", termo_inicial);
				}
			}
		}	
	}
	if(n<0){
		for(k=-1;k>=n;k++){
			if(razao>0){
				termo_inicial += razao;
				if(termo_inicial<=n){
					printf("%d ", termo_inicial);
				}
			}	
			if(razao<0){
				termo_inicial += razao;
				if(termo_inicial>=n){
					printf("%d ", termo_inicial);
				}
			}
		}
	}
}
