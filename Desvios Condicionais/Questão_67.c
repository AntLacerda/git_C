/*. Escreva um programa que leia o valor de um ano e verifique se ele � ou n�o bissexto.
Um ano � bissexto se ele for divis�vel por quatrocentos ou se se ele for divis�vel por 4
mas n�o for divis�vel por 100.*/

#include <stdio.h>

void main(){
	int ano;
	printf("Calculando ano bissexto!\n");
	printf("Digite o ano: ");
	scanf("%d", &ano);
	int dezena = ((ano % 1000) % 100) / 10;
	int unidade = ((ano % 1000) % 100) % 10;
	if(dezena==0&&unidade==0){
		int restoAno00 = ano % 400; 
		if(restoAno00==0){
			printf("O ano de %d eh Bissexto.", ano);
		}
		else{
			printf("O ano de %d nao eh Bissexto.", ano);
		}
	}
	else{
		int resto = ano % 4;
		if(resto==0){
			printf("O ano de %d eh Bissexto.", ano);
		}
		else{
			printf("O ano de %d nao eh Bissexto.", ano);
		}
	}
}
