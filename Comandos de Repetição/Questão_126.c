/*Escreva um programa que leia o termo inicial e a raz�o de uma PA e, a seguir, leia um
n�mero N e verifique se o n�mero N pertence � progress�o.*/

#include <stdio.h>

void main(){
	int termo_inicial, razao, num, k;
	printf("Conferindo se o numero faz parte da PA!\n");
	printf("Digite o termo inicial: ");
	scanf("%d", &termo_inicial);
	printf("Digite a razao: ");
	scanf("%d", &razao);
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(razao>0){
		while(termo_inicial<num){
			termo_inicial += razao;
		}	
		if(termo_inicial==num){
			printf("O numero %d faz parte da PA!", num);
		}
		else{
			printf("O numero %d nao faz parte da PA", num);
		}	
	}
	if(razao<0){
		while(termo_inicial>num){
			termo_inicial += razao;
		}
		if(termo_inicial==num){
			printf("O numero %d faz parte da PA!", num);
		}
		else{
			printf("O numero %d nao faz parte da PA", num);
		}	
	}
}

