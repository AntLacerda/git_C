/*Escreva um programa que leia um único número entre 10000 e 99999 referente ao
número de um deputado estadual e identifique o partido pelo qual ele está
concorrendo. O número do partido pode ser identificado pelos dois primeiros
algarismos do número do candidato. Por exemplo, um candidato com número 13457
concorre pelo PT, que é o partido de número 13, enquanto que um candidato com
número 45879 concorre pelo PSDB, que é o partido de número 45. Neste programa,
considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45
(PSDB) e 65( PCdoB).*/

#include <stdio.h>

void main(){
	int num;
	printf("Identificando o partido!\n");
	printf("Digite o numero do candidato: ");
	scanf("%d", &num);
	int ultimoNumero = num / 10000;
	int penultimoNumero = (num % 10000) / 1000;
	int partido = (ultimoNumero * 10) + penultimoNumero;
	switch(partido){
		case 13:
			printf("O candidato %d eh do partido (PT)!", num);
			break;
		case 14:
			printf("O candidato %d eh do partido (PTB)!", num);
			break;	
		case 15:
			printf("O candidato %d eh do partido (PMDB)!", num);
			break;
		case 25:
			printf("O candidato %d eh do partido (DEM)!", num);
			break;
		case 45:
			printf("O candidato %d eh do partido (PSDB)!", num);
			break;
		case 65:
			printf("O candidato %d eh do partido (PCdoB)!", num);
			break;
		default:
			printf("Numero do partido invalido!");
	}
}
