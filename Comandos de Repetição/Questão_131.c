/*Escreva um programa que leia 10 números reais distintos e calcule o segundo maior
número lido.*/

#include <stdio.h>
const int quantidade = 5;
void main(){
	int num, maior=0, menor=0, atual=0, aux=0, k;
	printf("Calculando o segundo maior numero!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	for(k=2;k<=quantidade;k++){
		aux = maior;
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num>maior){
			maior = num;
		}
		if(num<menor){
			menor = num;
		}
	}
	printf("O segundo maior numero eh %d", aux);
}
