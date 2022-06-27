/*Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
transmiss�o da rede em KB/s e calcule o tempo aproximado necess�rio para a
transmiss�o do arquivo. A resposta deve ser dada atrav�s de uma mensagem na forma
X horas, Y minutos e Z segundos.*/

#include <stdio.h>
const int kb = 1024;
void main(){
	int mb, taxa;
	printf("Tempo de Download!\n");
	printf("Digite o tamanho do arquivo em MB: ");
	scanf("%d", &mb);
	printf("Digite a taxa de download: ");
	scanf("%d", &taxa);
	int conversao = mb * kb;
	int tempoTotal = conversao / taxa;
	int horas = tempoTotal / 3600;
	int minutos = (tempoTotal % 3600) / 60;
	int segundos = (tempoTotal % 3600) % 60; 
	printf("O seu download terminar� em %d horas %d minutos %d segundos.", horas, minutos, segundos);	
}
