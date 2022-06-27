/*Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12
anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/

#include <stdio.h>

void main(){
	int idade;
	printf("Conferindo a idade!\n");
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	if(idade>=0&&idade<=12){
		printf("Crianca!");
	}
	else if(idade>=13&&idade<=17){
		printf("Adolescente!");
	}
	else if(idade>=18&&idade<=59){
		printf("Adulto!");
	}
	else if(idade>=60){
		printf("Idoso!");
	}
	else{
		printf("Idade invalida!");
	}
}
