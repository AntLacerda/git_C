/*Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada
valor lido, calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos
das conversões devem ser realizados através de subprogramas.*/

#include <stdio.h>

float fahrenheit(int celsius){
	float resp = (celsius * 1.8) + 32;
	return resp;
}

int kelvin(int celsius){
	int resp = celsius + 273;
	return resp;
}

void main(){
	int valores_celsius[5];
	int k;
	for(k=0;k<5;k++){
		printf("Digite o valor em Celsius: ");
		scanf("%d", &valores_celsius[k]);		
	}
	for(k=0;k<5;k++){
		float valor_fah = fahrenheit(valores_celsius[k]);
		int valor_kel = kelvin(valores_celsius[k]);
		printf("\n");
		printf("Celsius: %d\n", valores_celsius[k]);
		printf("Fahrenheit: %.2f\n", valor_fah);
		printf("Kelvin: %d\n", valor_kel);
	}
}
