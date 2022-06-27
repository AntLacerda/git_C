/*Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N].*/

#include <stdio.h>

void main(){
	int candidato, k, partido, primeiro_numero, segundo_numero, pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdb=0;
	for(k=1;k<=20;k++){
		printf("Digite o numero do candidato: ");
		scanf("%d", &candidato);
		primeiro_numero = candidato / 10000;
		segundo_numero = (candidato % 10000) / 1000;
		partido = (primeiro_numero * 10) + segundo_numero;
		if(partido==13){
			pt++;
		}
		else if(partido==14){
			ptb++;
		}
		else if(partido==15){
			pmdb++;
		}
		else if(partido==25){
			dem++;
		}
		else if(partido==45){
			psdb++;
		}
		else if(partido==65){
			pcdb++;
		}
	}
	printf("QUANTIDADE DE CANDIDATOS:\n");
	printf("PT: %d\n", pt);
	printf("PSDB: %d\n", ptb);
	printf("PMDB: %d\n", pmdb);
	printf("DEM: %d\n", dem);
	printf("PSDB: %d\n", psdb);
	printf("PCdoB: %d\n", pcdb);
}
