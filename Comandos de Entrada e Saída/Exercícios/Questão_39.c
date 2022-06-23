/*Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
transmissão da rede em KB/s e calcule o tempo aproximado necessário para a
transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma
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
	printf("O seu download terminará em %d horas %d minutos %d segundos.", horas, minutos, segundos);	
}
