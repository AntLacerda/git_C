/*Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e
calcule todas as suas raízes reais.*/

#include <stdio.h>
#include <math.h>
void main(){
	int a, b, c;
	printf("Calculando uma equacao de segundo grau!\n");
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	printf("Digite o valor de c: ");
	scanf("%d", &c);
	int delta = pow(b, 2) - (4 * a * c);
	if(delta>0){
		int x1 = (-b + sqrt(delta)) / (2 * a);
		int x2 = (-b - sqrt(delta)) / (2 * a);
		printf("As raizes sao %d e %d!", x1, x2);
	}
	else if(delta==0){
		int x1 = (-b + sqrt(delta)) / (2 * a);
		int x2 = (-b - sqrt(delta)) / (2 * a);
		printf("As raizes sao %d e %d!", x1, x2);
	}
	else{
		printf("A equacao nao possui raizes!");
	}
}
