/*Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
índice de massa corporal.*/

#include <stdio.h>

void main(){
	float peso, altura;
	printf("Calculando o IMC!\n");
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	float imc = peso / (altura * altura);
	printf("O seu IMC eh %.2f.", imc);
}
