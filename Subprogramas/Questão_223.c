/*Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar. A
verifica��o de ser realizada atrav�s de um subprograma.*/

void impar_par(int num){
	if(num%2==0){
		printf("O numero %d eh par.", num);
	}
	else{
		printf("O numero %d eh impar.", num);
	}
}

void main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	impar_par(numero);
}
