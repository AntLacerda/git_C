/*Escreva um programa que leia o n�mero de pessoas que v�o participar de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser
um n�mero inteiro.*/

#include <stdio.h>
const float consumoPorPessoa = 250.0;
const float kg = 1000.0;
void main(){
	int pessoas;
	printf("Calculando o churras do fim de semana!\n");
	printf("Digite a quantidade de pessoas que vao participar: ");
	scanf("%d", &pessoas);
	float gramas = pessoas * consumoPorPessoa;
	int totalKg = gramas / kg;
	printf("Vai ser preciso %d kg de carne para %d pessoas.\n", totalKg, pessoas);
	if(totalKg>5){
		printf("O churras vai ser bom!");
	}
	else if(totalKg>10){
		printf("Esse churras vai ser do krl!");
	}
	else{
		printf("Churras tranquilo!");
	}
}
