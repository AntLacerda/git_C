/*Escreva um programa que leia dez n�meros inteiros e calcule a diferen�a entre os
dois maiores n�meros digitados pelo usu�rio.*/

#include <stdio.h>
const int quantidade = 10;
void main(){
	int num, num_maior1, num_maior2, k;
	printf("Diferenca dos maiores!\n");
	printf("1 numero: ");
	scanf("%d", &num);
	num_maior1 = num;
	num_maior2 = num;
	for(k=2;k<=quantidade;k++){
		printf("%d numero: ", k);
		scanf("%d", &num);
		if(num>num_maior1){
			num_maior1 = num;
		}
		if(num>num_maior2&&num<num_maior1){
			num_maior2 = num;
		}
	}
	int diferenca = num_maior1 - num_maior2;
	printf("A diferenca entre %d e %d eh %d.", num_maior1, num_maior2, diferenca);	
}
