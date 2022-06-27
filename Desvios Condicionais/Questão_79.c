/*Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e
verifique a quantidade de raízes reais da equação.*/

#include <stdio.h>
#include <math.h>
void main(){
	int a, b, c;
	printf("Descobrindo se a equacao tem raizes reais!\n");
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	int delta = pow(b, 2) - (4 * a * c);
	if(delta<0){
		printf("A equacao nao possui raizes reais!");
	}
	else if(delta>0){
		printf("A equacao possui duas raizes reais!");
	}
	else{
		printf("A equacao possui uma raiz real!");
	}
}
