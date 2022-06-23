/*Carlos chegou ao aeroporto para fazer o check-in do seu vôo. Ao entrar na fila de
passageiros, ele percebeu que a empresa aérea tinha 5 guichês para fazer o check-in
dos passageiros, e que estes guichês eram numerados de 1 a 5. Considerando que os
guichês iam começar a realização dos check-ins no exato momento em que Carlos
entrou na fila, e que cada check-in é realizado em exatamente 15 minutos, escreva um
programa que leia um número inteiro positivo que corresponde à posição de Carlos na
fila e determine o número do guichê no qual ele será atendido e o tempo que ele vai
ter que esperar para ser atendido.*/

#include <stdio.h>

void main(){
	int posicao;
	printf("Tempo e giche!\n");
	printf("Digite a sua posicao na fila: ");
	scanf("%d", &posicao);
	int giche = ((posicao - 1) % 5) + 1;
	int tempo =  ((posicao - 1) / 5) * 15;
	printf("Seu giche sera o %d e o tempo de espera sera %d minutos.", giche, tempo);
}
