/*. Escreva um programa que imprima os seis primeiros pares de n�meros primos
g�meos. Dois n�meros s�o chamados de primos g�meos se eles forem primos e a
diferen�a entre os dois for igual a 2. (Por exemplo, 11 e 13 s�o primos g�meos).*/

#include <stdio.h>

void main(){
	int k, i, j, divisao=0, contador1=0, contador2=0, num1=0, contador3=0;
	printf("Numeros primos gemeos!\n");
	for(i=3;i>0;i++){
		for(j=1;j<=i;j++){
			divisao = i % j;
			if(divisao==0){
				contador1++;
			}
		}
		if(contador1==2){
			contador2++;
			if(num1==i-2){
				printf("(%d, %d) ", num1, i);
			}
			num1 = i;
		}
		contador1 = 0;
		if(contador2==2){
			contador3++;
			contador2 = 0;
		}
		if(contador3==7){
			break;
		}
	}
}
