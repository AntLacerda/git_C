/*Escreva um programa que leia um n�mero inteiro entre 0 e 999 e calcule o seu
reverso. Voc� deve sempre considerar que o n�mero lido tem tr�s algarismos. Desta
forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de
40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve
armazenar o valor do reverso em uma vari�vel antes de exibi-lo para o usu�rio.*/

#include <stdio.h>

void main(){
	int num;
	printf("Invertendo o n�mero!\n");
	printf("Digite um num inteiro entre 0 e 999: ");
	scanf("%d", &num);
	int centena = num /100;
	int dezena = (num % 100) / 10;
	int unidade = (num % 100) % 10;
	int invertido = (unidade * 100) + (dezena * 10) + (centena * 1);
	printf("O reverso eh %d.", invertido);
}
