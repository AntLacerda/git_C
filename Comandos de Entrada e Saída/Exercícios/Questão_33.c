/*Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um
dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos
por cada candidato. Para resolver este programa, considere que não houve votos
brancos e nem nulos.*/

#include <stdio.h>
#include <string.h>

void main(){
	char nomeCanUm[50], nomeCanDois[50], nomeCanTres[50];
	int votosCanUm, votosCanDois, votosCanTres;
	printf("Calculando percentual da votacao!\n");
	printf("NOME DO CANDIDATO: ");
	gets(nomeCanUm);
	printf("QUANTIDADE DE VOTOS: ");
	scanf("%d", &votosCanUm);
	fflush(stdin);  //O comando fflush(stdin); tem sempre que vir após o scanf sendo desnecessário antes!
	
	printf("NOME DO CANDIDATO: ");
	gets(nomeCanDois);
	printf("QUANTIDADE DE VOTOS: ");
	scanf("%d", &votosCanDois);
	fflush(stdin);
		
	printf("NOME DO CANDIDATO: ");
	gets(nomeCanTres);
	printf("QUANTIDADE DE VOTOS: ");
	scanf("%d", &votosCanTres);
	fflush(stdin);
	
	int totalVotos = votosCanUm + votosCanDois + votosCanTres;
	float porCanUm = (votosCanUm * 100.0) / totalVotos;
	float porCanDois = (votosCanDois * 100.0) / totalVotos;
	float porCanTres = (votosCanTres * 100.0) / totalVotos;
	printf("%s: %.1f%% dos votos.\n", nomeCanUm, porCanUm);
	printf("%s: %.1f%% dos votos.\n", nomeCanDois, porCanDois);
	printf("%s: %.1f%% dos votos.\n", nomeCanTres, porCanTres);
}
