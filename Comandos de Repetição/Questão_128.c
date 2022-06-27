/*Escreva um programa que leia o nome e o peso de 20 bois que participam de uma
exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso,
suponha que todos os bois têm pesos distintos.*/

#include <stdio.h>
const int quantidade = 20;
void main(){
	int peso, k, peso_mais_pesado=0, peso_mais_leve=0;
	char nome[20], nome_pesado[20], nome_leve[20];
	printf("Testagem de bois!\n");
	for(k=1;k<=quantidade;k++){
		printf("Nome do Boi: ");
		gets(nome);
		fflush(stdin);
		printf("Peso: ");
		scanf("%d", &peso);
		fflush(stdin);
		if(peso>peso_mais_pesado){
			peso_mais_pesado = peso;
			strcpy(nome_pesado, nome);
		}
		else{
			peso_mais_leve = peso;
			strcpy(nome_leve, nome);
		}
	}
	printf("O boi mais pesado foi %s com %dkg.\n", nome_pesado, peso_mais_pesado);
	printf("O boi mais leve foi %s com %dkg.", nome_leve, peso_mais_leve);
}
