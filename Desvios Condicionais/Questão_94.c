/*Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso
das cédulas maiores.*/

#include <stdio.h>

void main(){
	int num;
	printf("Sacando o dinheiro!\n");
	printf("Digite o valor que deseja sacar(Valor max de saque = R$1000,00): ");
	scanf("%d", &num);
	int notas_de_cem = num / 100;
	int notas_de_cinquenta = (num % 100) / 50;
	int notas_de_vinte = ((num % 100) % 50) / 20;
	int notas_de_dez = (((num % 100) % 50) % 20) / 10;
	printf("Notas de R$100: %d\n", notas_de_cem);
	printf("Notas de R$50: %d\n", notas_de_cinquenta);
	printf("Notas de R$20: %d\n", notas_de_vinte);
	printf("Notas de R$10: %d\n", notas_de_dez);
}

	
