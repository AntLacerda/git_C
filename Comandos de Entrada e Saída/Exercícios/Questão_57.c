/*Escreva um programa que leia o valor de uma passagem em reais e em milhas e, em
seguida, leia o valor da passagem (em reais) que Caio deseja comprar e calcule quantas
milhas ele precisa juntar para que ele n�o precise pagar pela passagem. Para resolver
este programa, considere que a propor��o entre o valor da milha e o valor em reais � a
mesma para todos os v�os da companhia a�rea.*/

#include <stdio.h>

void main(){
	float vPassagemReal, vPassagemMilha, passagemDesejada;
	printf("Calculando quantidade de milhas necessarias!\n");
	printf("Digite o valor de uma passagem em reais: ");
	scanf("%f", &vPassagemReal);
	printf("Digite o valor correspondentes as milhas da passagem acima: ");
	scanf("%f", &vPassagemMilha);
	printf("Digite o valor da passagem desejada: ");
	scanf("%f", &passagemDesejada);
	float valorEmMilhas = (vPassagemMilha * passagemDesejada) / vPassagemReal;
	printf("O valor da passagem desejada correspondente em milhas eh de %.0f.", valorEmMilhas); 
}
