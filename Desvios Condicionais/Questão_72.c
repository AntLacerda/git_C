/*Jo�o resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo
m�s ir� poupar 25% do seu sal�rio, at� conseguir juntar um bom valor para ser dado
como entrada. Com base nestas informa��es, escreva um programa que receba como
entrada o valor do sal�rio atual de Jo�o e o valor que ele deseja juntar como entrada e
calcule quanto tempo ele ter� que trabalhar para conseguir juntar o valor desejado. A
resposta deve ser dada na forma x anos e y meses.*/

#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("Identificando o maior numero!\n");
	printf("Digite tres numeros distintos: \n");
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	printf("Terceiro numero: ");
	scanf("%d", &num3);
	if(num1>num2&&num1>num3){
		printf("%d eh o maior numero!\n", num1);
	}
	else if(num2>num1&&num2>num3){
		printf("%d eh o maior numero!\n", num2);
	}
	else{
		printf("%d eh o maior numero!\n", num3);
	}
	
	if(num1>num2&&num1>num3&&num2>num3){
		printf("%d eh o menor numero!\n", num3);
	}
	else if(num2>num1&&num2>num3&&num3>num1){
		printf("%d eh o menor numero!\n", num2);
	}
	else{
		printf("%d eh o menor numero!\n", num1);
	}
}
