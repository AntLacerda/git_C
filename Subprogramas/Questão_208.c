/* Escreva um programa que leia o valor do seno de um ângulo e calcule o valor
absoluto do seu cosseno. O cálculo deve ser realizado através de um subprograma.*/

#include <stdio.h>
#include <math.h>

float cosseno(float seno){
	float resp = sqrt(1 - (seno * seno));
	if(resp < 0){
		resp = resp * -1;
	}
	return resp;
}

void main(){
	float seno;
	printf("Digite o valor do seno: ");
	scanf("%f", &seno);
	float cos = cosseno(seno);
	printf("O cosseno do angulo eh %.2f", cos);
}
