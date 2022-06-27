/*Escreva um programa que leia o valor de um mês e de um ano e verifique a
quantidade de dias do mês informado pelo usuário.*/

#include <stdio.h>

void main(){
	int mes, ano;
	printf("Dias de um mes específico!\n");
	printf("Digite um mes: ");
	scanf("%d", &mes);
	printf("Digite um ano: ");
	scanf("%d", &ano);
	int bissexto = ano % 4;
	if(bissexto==0){
		switch(mes){
			case 1:
				printf("O mes de janeiro do ano %d possui 31 dias.", ano);
				break;
			case 2:
				printf("O mes de fevereiro do ano %d possui 29 dias.", ano);
				break;
			case 3:
				printf("O mes de marco do ano %d possui 31 dias.", ano);
				break;
			case 4:
				printf("O mes de abril do ano %d possui 30 dias.", ano);
				break;
			case 5:
				printf("O mes de maio do ano %d possui 31 dias.", ano);
				break;
			case 6:
				printf("O mes de junho do ano %d possui 30 dias.", ano);
				break;
			case 7:
				printf("O mes de julho do ano %d possui 31 dias.", ano);
				break;
			case 8:
				printf("O mes de agosto do ano %d possui 31 dias.", ano);
				break;
			case 9:
				printf("O mes de setembro do ano %d possui 30 dias.", ano);
				break;
			case 10:
				printf("O mes de outubro do ano %d possui 31 dias.", ano);
				break;
			case 11:
				printf("O mes de novembro do ano %d possui 30 dias.", ano);
				break;
			case 12:
				printf("O mes de dezembro do ano %d possui 31 dias.", ano);
				break;
			default:
				printf("Mes digitado invalido!");
		}
	}
	else{
		switch(mes){
			case 1:
				printf("O mes de janeiro do ano %d possui 31 dias.", ano);
				break;
			case 2:
				printf("O mes de fevereiro do ano %d possui 28 dias.", ano);
				break;
			case 3:
				printf("O mes de marco do ano %d possui 31 dias.", ano);
				break;
			case 4:
				printf("O mes de abril do ano %d possui 30 dias.", ano);
				break;
			case 5:
				printf("O mes de maio do ano %d possui 31 dias.", ano);
				break;
			case 6:
				printf("O mes de junho do ano %d possui 30 dias.", ano);
				break;
			case 7:
				printf("O mes de julho do ano %d possui 31 dias.", ano);
				break;
			case 8:
				printf("O mes de agosto do ano %d possui 31 dias.", ano);
				break;
			case 9:
				printf("O mes de setembro do ano %d possui 30 dias.", ano);
				break;
			case 10:
				printf("O mes de outubro do ano %d possui 31 dias.", ano);
				break;
			case 11:
				printf("O mes de novembro do ano %d possui 30 dias.", ano);
				break;
			case 12:
				printf("O mes de dezembro do ano %d possui 31 dias.", ano);
				break;
			default:
				printf("Mes digitado invalido!");
		}
	}
}
