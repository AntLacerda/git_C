/*Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
cosseno.*/

#include <stdio.h>
#include <math.h>

void main(){
	float seno;
	printf("Calculando o valor do cosseno!\n");
	printf("Digite o valor do seno: ");
	scanf("%f", &seno);
	float resposta = 1 - (seno * seno);
	float cosseno = sqrt(resposta);
	printf("O valor do cosseno eh %.1f", cosseno); 
}
