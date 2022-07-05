/*Escreva um programa que permita que o usu�rio jogue o jogo do �arrochado�. Neste
jogo, o programa gera um n�mero aleat�rio entre 1 e 100 e o usu�rio deve
�arrochar� o n�mero gerado pelo computador. A cada jogada, os limites do jogo v�o
se estreitando de acordo com os valores digitados pelo usu�rio. O jogo acaba quando
o usu�rio consegue imprensar o n�mero gerado pelo computador (neste caso ele
ganha) ou quando o usu�rio entra com o n�mero gerado pelo computador (neste
caso ele perde). Em pascal, use a fun��o random ou randomize para a gera��o de
n�meros aleat�rios.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int num, num1, num2;
	printf("Jogo do arrochado!\n");
	srand(time(NULL));
	num = 1 + (rand() % 100);
	while(num1+1!=num&&num2-1!=num){
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
		printf("Digite o segundo numero: ");
		scanf("%d", &num2);
		if(num1+1==num&&num2-1==num){
			printf("Parabens, voce ganhou!");	
		}
		else if(num1==num||num2==num){
			printf("Voce perdeu, voce digitou %d!", num);
			break;
		}
		else{
			if(num1>num){
				printf("Diminua o numero 1!\n");
			}
			else{
				printf("Numero 1 no caminho certo, continue tentando!\n");
			}
			if(num2<num){
				printf("Aumente o numero 2!\n");
			}
			else{
				printf("Numero 2 no caminho certo, continue tentando!\n");
			}
		}
	}
}
