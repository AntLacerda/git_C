/*Escreva um programa que leia três números inteiros positivos e calcule o MMC dos
números lidos.*/

#include <stdio.h>

void main(){
	int num1, num2, num3, k=2, mmc=1;
	printf("Calculando o MMC!\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	while(num1!=1||num2!=1||num3!=1){
		while(num1%k==0||num2%k==0||num3%k==0){
			if(num1%k==0){
				num1 = num1 / k;
			}
			if(num2%k==0){
				num2 = num2 / k;
			}
			if(num3%k==0){
				num3 = num3 / k;
			}
			mmc = mmc * k;
		}
		k++;
	}
	printf("O mmc eh %d.", mmc);
}
