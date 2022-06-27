/*Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e
calcule o percentual de mulheres que tem entre 18 e 21 anos.*/

#include <stdio.h>
const int participantes = 20;

void main(){
	int k, idade, percentual=0, valor;
	char nome[50];
	char sexo[20];
	printf("Pesquisa com participantes!\n");
	for(k=1;k<=participantes;k++){
		printf("Nome: ");
		gets(nome);
		fflush(stdin);
		printf("Sexo: ");
		gets(sexo);
		fflush(stdin);
		valor = (int)sexo[0];
		printf("Idade: ");
		scanf("%d", &idade);
		fflush(stdin);
		if(valor==102||valor==70){
			if(idade>=18&&idade<=21){
			percentual++;						
			}
		}
	}
	printf("%d\n", percentual);
	float media = (100 * (float)percentual) / participantes;
	printf("A media de mulheres que tem entre 18 e 21 anos eh de %.2f%%.", media);
}

