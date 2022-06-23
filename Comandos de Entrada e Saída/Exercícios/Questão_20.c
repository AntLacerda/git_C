/*Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado.*/

#include <stdio.h>
const valorMetro = 300.00;
void main(){
	float largura, comprimento;
	printf("Calculando o valor do terreno!\n");
	printf("Digite a largura do terreno em metros: ");
	scanf("%f", &largura);
	printf("Digite o comprimento do terreno em metros: ");
	scanf("%f", &comprimento);
	float area = (largura * comprimento);
	float valorFinal = valorMetro * area;
	printf("O valor do terreno eh R$%.2f", valorFinal);
}
