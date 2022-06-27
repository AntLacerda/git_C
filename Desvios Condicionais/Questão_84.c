/*Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela está
dentro da faixa de peso adequada, ou se está abaixo ou acima do peso. Caso a pessoa
esteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar
ou perder para ficar dentro da faixa adequada. Para resolver este programa, considere
que o IMC ideal para uma pessoa deve estar entre 18 e 25.*/

#include <stdio.h>

const int imcMin = 18; 
const int imcMax = 25;
void main(){
	float peso, altura;
	printf("Calculando o IMC!\n");
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	float imc = peso / (altura * altura) ;
	if(imc<imcMin){
		float pesoIdeal =  imcMin * (altura * altura) ;
		float peso_a_ganhar = pesoIdeal - peso; 
		printf("Voce esta abaixo do peso!\n");
		printf("Voce precisa ganhar %.2fKg!", peso_a_ganhar);
	}
	else if(imc>imcMax){
		float pesoIdeal = imcMax * (altura * altura);
		float peso_a_ganhar = peso - pesoIdeal;
		printf("Voce esta acima do peso!\n");
		printf("Voce precisa perder %.2fKg!", peso_a_ganhar);
	}
	else{
		printf("Parabens, voce esta na faixa de peso adequada!");
	}
}
