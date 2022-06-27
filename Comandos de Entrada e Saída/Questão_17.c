/*Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
por cada metro quadrado de um projeto arquitetônico e calcule o custo final do
projeto.*/

#include <stdio.h>

void main(){
	float area, valor;
	printf("Vamos calcular o valor final do projeto arquitetonico!\n");
	printf("Digite o valor da area em metros quadrados: ");
	scanf("%f", &area);
	printf("Digite o valor do metro quadrado: ");
	scanf("%f", &valor);
	float valorFinal = area * valor;
	printf("o valor final eh R$ %.2f!", valorFinal);
}
