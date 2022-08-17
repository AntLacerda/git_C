/*Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
índice de massa corporal, que deve ser calculado através de um subprograma.*/

#include <stdio.h>

float imc(float peso, float altura){
	float resp = (float)peso / (altura * altura);
	return resp;
}

void main(){
	float altura, peso;
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	float valor_imc = imc(peso, altura);
	printf("O valor do imc eh de %.2f", valor_imc);
}
