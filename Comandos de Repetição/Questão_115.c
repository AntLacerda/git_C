/*Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que estão dentro da faixa de peso adequada.*/

#include <stdio.h>
const int participantes = 20;
void main(){
	int k, abaixo=0, acima=0, normal=0;
	float imc, peso, altura;
	printf("Percentual da faixa de peso!\n");
	for(k=1;k<=20;k++){
		printf("Peso do candidato %d: ", k);
		scanf("%f", &peso);
		printf("Altura do candidato %d: ", k);
		scanf("%f", &altura);
		imc = (float)peso / (altura * altura);
		if(imc<18){
			abaixo++;
		}
		else if(imc>=18&&imc<=25){
			normal++;
		}
		else if(imc>25){
			acima++;
		}
	}
	float porc_abaixo = (100 * abaixo) / participantes;
	float porc_normal = (100 * normal) / participantes;
	float porc_acima = (100 * acima) / participantes;
	printf("TRIAGEM:\n");
	printf("ABAIXO DO PESO: %.1f\n", porc_abaixo);
	printf("PESO NORMAL: %.1f\n", porc_normal);
	printf("ACIMA DO PESO: %.1f\n", porc_acima);
}
