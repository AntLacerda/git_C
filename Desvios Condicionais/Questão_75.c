/*Escreva um programa que leia tr�s n�meros distintos e identifique o n�mero que n�o
� nem o menor e nem o maior n�mero. */

#include <stdio.h>

void main(){
	int angulo1, angulo2, angulo3;
	printf("Descobrindo se o triangulo eh retangulo!\n");
	printf("Digite o valor do primeiro angulo: ");
	scanf("%d", &angulo1);
	printf("Digite o valor do segundo angulo: ");
	scanf("%d", &angulo2);	
	printf("Digite o valor do terceiro angulo: ");
	scanf("%d", &angulo3);
	if(angulo1==90||angulo2==90||angulo3==90){
		printf("O triangulo eh retangulo!");
	}
	else{
		printf("O triangulo nao eh retangulo!");
	}
}
