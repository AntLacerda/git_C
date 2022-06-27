/*Escreva um programa que leia três números distintos e identifique o número que não
é nem o menor e nem o maior número. */

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
