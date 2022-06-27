/*Escreva um programa que leia quatro números reais e verifique se eles formam, na
ordem em que foram digitados, uma progressão aritmética, uma progressão
geométrica, os dois tipos de progressão ou nenhum tipo de progressão.*/

#include <stdio.h>

void main(){
	int num1, num2, num3, num4;
	printf("Conferindo se eh caso de PA ou PG!\n");
	printf("Digite uma sequencia de quatro numeros: ");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	int razao = num2 - num1;
	int primeiro_termo_pa = num1 + razao;
	int segundo_termo_pa = primeiro_termo_pa + razao;
	int terceiro_termo_pa = segundo_termo_pa + razao;
	
	int razao_pg = num2 / num1;
	int primeiro_termo_pg = num1 * razao_pg;
	int segundo_termo_pg = primeiro_termo_pg * razao_pg;
	int terceiro_termo_pg = segundo_termo_pg * razao_pg;
	
	
	if(num2==primeiro_termo_pa&&num3==segundo_termo_pa&&num4==terceiro_termo_pa&&num2==primeiro_termo_pg&&num3==segundo_termo_pg&&num4==terceiro_termo_pg){
		printf("Os numeros %d %d %d %d formam tanto uma PA quanto uma PG!", num1, num2, num3, num4);
	}
	else if(num2==primeiro_termo_pa&&num3==segundo_termo_pa&&num4==terceiro_termo_pa){
		printf("Os numeros %d %d %d %d formam uma PA!", num1, num2, num3, num4);
	}
	else if(num2==primeiro_termo_pg&&num3==segundo_termo_pg&&num4==terceiro_termo_pg){
		printf("Os numeros %d %d %d %d formam uma PG!", num1, num2, num3, num4);
	}
	else{
		printf("Os numeros %d %d %d %d nao formam nem uma PA e nem uma PG!", num1, num2, num3, num4);
	}
}
