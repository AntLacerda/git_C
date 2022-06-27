/*Escreva um programa que leia o número de gols marcados pelo time da casa e o
número de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time
da casa, pelo time visitante ou se terminou empatado.*/

#include <stdio.h>

void main(){
	int timeCasa, timeVisitante;
	printf("Resultado do jogo!\n");
	printf("Digite a quantidade de gols do time da Casa: ");
	scanf("%d", &timeCasa);
	printf("Digite a quantidade de gols do time Visitante: ");
	scanf("%d", &timeVisitante);
	if(timeCasa>timeVisitante){
		printf("Vitoria do TIME DA CASA! %d x %d", timeCasa, timeVisitante);
	}
	else if(timeCasa<timeVisitante){
		printf("Vitoria do TIME VISITANTE! %d x %d", timeCasa, timeVisitante);
	}
	else{
		printf("O jogo EMPATOU! %d x %d", timeCasa, timeVisitante);
		
	}
}
