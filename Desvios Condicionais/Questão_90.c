/*Escreva um programa que leia um n�mero inteiro entre 1 e 12 correspondente a um
m�s do ano e verifique o trimestre a que este m�s pertence. */

#include <stdio.h>

void main(){
	int num;
	printf("Verificando o trimestre!\n");
	printf("Digite o numero do mes correspondente: ");
	scanf("%d", &num);
	if(num>=1&&num<=3){
		printf("O mes esta no primeiro trimestre!");
	}
	else if(num>=4&&num<=6){
		printf("O mes esta no segundo trimestre!");
	}
	else if(num>=7&&num<=9){
		printf("O mes esta no terceiro trimestre!");
	}
	else if(num>=10&&num<=12){
		printf("O mes esta no quarto trimestre!");
	}
	else{
		printf("Valor digitado invalido!");
	}
}
