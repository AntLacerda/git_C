/*Escreva um programa que leia o comprimento e a largura de uma cisterna e a
quantidade de litros que o usuário deseja armazenar na mesma e determine quantos
metros ele deve encher a cisterna para obter a quantidade de litros desejada. */

#include <stdio.h>

void main(){
	float comprimento, largura, litros;
	printf("Calculando a altura da cisterna!\n");
	printf("Digite o comprimento: ");
	scanf("%f", &comprimento);
	printf("Digite a largura: ");
	scanf("%f", &largura);
	printf("Digite a quantidade de litros: ");
	scanf("%f", &litros);
	float altura = litros / (largura * comprimento);
	printf("A altura da cisterna eh %.2f m", altura);
}
