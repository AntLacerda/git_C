

/*Escreva um programa que leia o valor do salário bruto de um empregado e calcule o
seu salário líquido. Para calcular o valor do salário líquido, deve-se primeiramente
descontar uma taxa de 11%, correspondente ao valor da contribuição previdenciária.
Depois, do valor restante, deve-se descontar o valor do imposto de renda, que varia de
acordo com o valor do salário. O percentual que deve ser descontado para o imposto
de renda varia de acordo com a tabela abaixo.

Salário --------------------- Alíquota
até 1.903,98 ---------------- Isento
de 1.903,99 até 2.826,65 ---- 7,5%
de 2.826,66 até 3.751,05 ---- 15%
de 3.751,06 até 4.664,68 ---- 22,5%
a partir de 4.664,69 -------- 27,5%

*/

#include <stdio.h>

const float taxa = 0.11;
void main(){
	float salario;
	printf("Calculando salario liquido!\n");
	printf("Digite o seu salario bruto: ");
	scanf("%f", &salario);
	float valorTaxa = salario * taxa;
	float salarioSemTaxa = salario - valorTaxa;
	if(salarioSemTaxa>=1903.99&&salarioSemTaxa<=2826.65){
		float impostoDeRenda = salarioSemTaxa * 0.075;
		float salarioLiquido = salarioSemTaxa - impostoDeRenda;
		printf("Seu salario liquido eh R$%.2f.", salarioLiquido);
	}
	else if(salarioSemTaxa>=2826.66&&salarioSemTaxa<=3751.05){
		float impostoDeRenda = salarioSemTaxa * 0.15;
		float salarioLiquido = salarioSemTaxa - impostoDeRenda;
		printf("Seu salario liquido eh R$%.2f.", salarioLiquido);
	}
	else if(salarioSemTaxa>=3751.06&&salarioSemTaxa<=4664.68){
		float impostoDeRenda = salarioSemTaxa * 0.225;
		float salarioLiquido = salarioSemTaxa - impostoDeRenda;
		printf("Seu salario liquido eh R$%.2f.", salarioLiquido);
	}
	else if(salarioSemTaxa>=4664.69){
		float impostoDeRenda = salarioSemTaxa * 0.275;
		float salarioLiquido = salarioSemTaxa - impostoDeRenda;
		printf("Seu salario liquido eh R$%.2f.", salarioLiquido);
	}
	else{
		printf("Voce esta isento de IR!\n");
		printf("Seu salario liquido eh R$%.2f.", salarioSemTaxa);
	}
}
