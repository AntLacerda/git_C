/*Escreva um programa que imprima todos os palíndromos existentes no intervalo
[1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a
direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002,
1221, 8888.*/

#include <stdio.h>

void main(){
	int k, i, unidade, dezena, centena, milhar;
	printf("Imprimindo todos os palindromos do intervalo de [1000, 9999]!\n");
	for(k=1000;k<=9999;k++){
		unidade = k % 10;
		dezena = (k / 10) % 10;
		centena = ((k / 10) / 10) % 10;
		milhar = ((k / 10) / 10) / 10;
		if(milhar==unidade&&centena==dezena){
			printf("%d\n", k);
		}
	}
}
