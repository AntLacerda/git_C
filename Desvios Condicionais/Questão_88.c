/*Escreva um programa que leia um �nico n�mero entre 10000 e 99999 referente ao
n�mero de um deputado estadual e identifique o partido pelo qual ele est�
concorrendo. O n�mero do partido pode ser identificado pelos dois primeiros
algarismos do n�mero do candidato. Por exemplo, um candidato com n�mero 13457
concorre pelo PT, que � o partido de n�mero 13, enquanto que um candidato com
n�mero 45879 concorre pelo PSDB, que � o partido de n�mero 45. Neste programa,
considere os seguintes n�meros de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45
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
