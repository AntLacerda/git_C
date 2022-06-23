/*Seu Joaquim é um motorista que viaja todos os dias de Cajazeiras para João Pessoa
para fazer entregas para empresa na qual trabalha. Durante o percurso, ele para
realizar entregas em Sousa, Patos, Campina Grande e João Pessoa. Considerando que
seu Joaquim gasta 50 minutos no percurso de Cajazeiras para Sousa, 2 horas no
percurso entre Sousa e Patos, 2 horas e 30 minutos no percurso entre Patos e Campina
Grande e 2 horas no percurso entre Campina Grande e João Pessoa, e que cada
entrega demora exatamente 20 minutos, escreva um programa que leia o horário em
que seu Joaquim saiu de Cajazeiras (horas e minutos) e calcule o horário em que ele
chegará em cada cidade do itinerário.*/

#include <stdio.h>
const int entrega = 20;
void main(){
	int horas, minutos;
	printf("Calculando horarios de viagem!\n");
	printf("Digite o horario de partida (horas): ");
	scanf("%d", &horas);
	printf("Digite o horario de partida (minutos): ");
	scanf("%d", &minutos);
	int conversao = horas * 60;
	int somaTempo = conversao + minutos;
	int czParaSousa = 50 + somaTempo;
	int sousaParaPatos = czParaSousa + entrega + 120;
	int patosParaCampina = sousaParaPatos + entrega + 150;
	int campinaParaJp = patosParaCampina + entrega + 120;
	int tempoCz_SousaHoras = czParaSousa / 60;
	int tempoCz_SousaMinutos = czParaSousa % 60;
	int tempoSousa_PatosHoras = sousaParaPatos / 60;
	int tempoSousa_PatosMinutos = sousaParaPatos % 60;
	int tempoPatos_CampinaHoras = patosParaCampina / 60;
	int tempoPatos_CampinaMinutos = patosParaCampina % 60;
	int tempoCampina_JpHoras = campinaParaJp / 60;
	int tempoCampina_JpMinutos = campinaParaJp % 60;
	printf("HORARIOS\n");
	printf("SOUSA: %d horas e %d minutos.\n", tempoCz_SousaHoras, tempoCz_SousaMinutos);
	printf("PATOS: %d horas e %d minutos.\n", tempoSousa_PatosHoras, tempoSousa_PatosMinutos);
	printf("CAMPINA GRANDE: %d horas e %d minutos.\n", tempoPatos_CampinaHoras, tempoPatos_CampinaMinutos);
	printf("JOAO PESSOA: %d horas e %d minutos.\n", tempoCampina_JpHoras, tempoCampina_JpMinutos);
}
