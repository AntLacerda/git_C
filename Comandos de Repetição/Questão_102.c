/*Escreva um programa que leia um número inteiro N e imprima todos os seus
divisores exatos.*/

#include <stdio.h>

void main(){
	int num, k, divisores;
	printf("Divisores exatos!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num>0){
		for(k=1;k<=num;k++){
			divisores = num % k;
			if(divisores==0){
				printf("%d\n", k);
			}
		}		
	}
	if(num<0){
		for(k=-1;k>=num;k--){
			divisores = num % k;
			if(divisores==0){
				printf("%d\n", k);
			}
		}
	}
	if(num<0){
		num = num * -1;
		for(k=1;k<=num;k++){
			divisores = num % k;
			if(divisores==0){
				printf("%d\n", k);
			}
		}
	}		
}
