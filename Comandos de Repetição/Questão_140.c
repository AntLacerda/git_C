/*Escreva um programa que leia vários números inteiros e calcule a média dos
números pares e a média dos números ímpares. O processamento deverá ser
encerrado quando for lido o valor 0, que não deverá ser processado. */

#include <stdio.h>

void main(){
	int num, soma_impar=0, soma_par=0, quant_impar=0, quant_par=0;
	printf("Media de numeros impar e par separadamente!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	while(num!=0){
		if(num%2==0){
			soma_par = soma_par + num;
			quant_par++;
		}
		else{
			soma_impar = soma_impar + num;
			quant_impar++;
		}
		printf("Digite outro numero (0 para encerrar): ");
		scanf("%d", &num);
	}
	float media_par = (float)soma_par / quant_par;
	float media_impar = (float)soma_impar / quant_impar;
	printf("MEDIA DOS NUMEROS PARES: %.2f\n", media_par);
	printf("MEDIA DOS NUMEROS IMPARES: %.2f", media_impar);
}
