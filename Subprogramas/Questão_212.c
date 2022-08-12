/*Escreva um programa que leia o número total de questões existentes em uma prova
e o número de questões que um candidato acertou e determine o seu percentual de
acertos e o seu percentual de erros. O cálculo deve ser realizado através de um
subprograma.*/

#include <stdio.h>

void leitura(char vet[], int tam){
	int k;
	for(k=0;k<tam;k++){
		printf("Questao %d: ", k+1);
		scanf("%c", &vet[k]);
		fflush(stdin);
	}
}

int conferencia(char respostas[], char gabarito[], int tam){
	int k, cont=0;
	for(k=0;k<tam;k++){
		if(respostas[k]==gabarito[k]){
			cont++;
		}
	}
	return cont;
}

void main(){
	int tam;
	printf("Digite a quantidade de questoes da prova: ");
	scanf("%d", &tam);
	fflush(stdin);
	char gaba[tam];
	char resp[tam];
	printf("Digite o gabarito da prova: \n");
	leitura(gaba, tam);
	fflush(stdin);
	printf("Digite as suas alternativas: \n");
	leitura(resp, tam);
	fflush(stdin);
	int resultado = conferencia(resp, gaba, tam);
	printf("O aluno acertou %d questoes!", resultado);
}
