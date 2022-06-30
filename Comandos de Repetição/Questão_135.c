/*Escreva um programa que simule uma votação. O programa deve computar o voto de
20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos
por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções
de voto são:
[1] João Borracheiro
[2] Zé do caminhão
[3] Maria da bodega
[4] Ana */

#include <stdio.h>

void main(){
	int k, cand_1=0, cand_2=0, cand_3=0, cand_4=0, nulos=0, voto;
	printf("ELEICAO 2022!\n");
	for(k=1;k<=20;k++){
		printf("Digite o numero do seu candidato!\n");
		printf("[1] Joao Borracheiro\n[2] Ze do Caminhao\n[3] Maria da Bodega\n[4] Ana\n");
		printf("Voto: ");
		scanf("%d", &voto);
		if(voto==1){
			cand_1++;
		}
		else if(voto==2){
			cand_2++;
		}
		else if(voto==3){
			cand_3++;
		}		
		else if(voto==4){
			cand_4++;
		}
		else{
			nulos++;
		}
	}
	printf("RESULTADO\n");
	printf("Joao Borracheiro: %d\n", cand_1);
	printf("Ze do Caminhao: %d\n", cand_2);
	printf("Maria da Bodega: %d\n", cand_3);
	printf("Ana: %d\n", cand_4);
	printf("Nulos: %d\n", nulos);
}
