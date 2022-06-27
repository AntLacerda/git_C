/*Escreva um programa que leia um n�mero inteiro N e verifique se ele � um n�mero
perfeito. Um n�mero � perfeito quando ele � igual � soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o n�mero 6 (1+2+3) � um n�mero perfeito.*/

#include <stdio.h>

void main(){
	int num, k, divisores, contador=0, soma=0;
	printf("Numero perfeito!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(k=1;k<=num;k++){
		divisores = num % k;
		if(divisores==0){
			soma += k;
			printf("%d\n", soma);	
		}
	}
	soma -= num;
	if(soma==num){
		printf("O numero %d eh perfeito!", num);
	}
	else{
		printf("O numero %d nao eh perfeito!", num);
	}
	
}
