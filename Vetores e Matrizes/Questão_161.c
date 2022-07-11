#include <stdio.h>

/*Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é
ou não um palíndromo.*/

void main(){
	char vetor[20];
	int k, i=0, contador=0;
	printf("Conferindo se o vetor eh um palindromo!\n");
	for(k=0;k<20;k++){
		printf("Digite o %d caracter: ", k+1);
		scanf("%c", &vetor[k]);
		fflush(stdin);
	}
	for(k=19;k>=10;k--){
		if((int)vetor[k]==(int)vetor[i]){
			contador++;
		}
		i++;
	}
	if(contador==10){
		printf("O vetor ");
		for(k=0;k<20;k++){
			printf("%c ", vetor[k]);
		}
		printf("eh um palindromo!");
	}
	else{
		printf("O vetor ");
		for(k=0;k<20;k++){
			printf("%c ", vetor[k]);
		}
		printf("nao eh um palindromo!");
	}
}
