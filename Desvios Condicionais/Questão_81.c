/*Escreva um programa que leia os valores das coordenadas x e y do centro de uma
circunferência e o valor do seu raio e, a seguir, leia as coordenadas x e y de um ponto e
verifique se este ponto está localizado dentro da circunferência.*/

#include <stdio.h>
#include <math.h>
void main(){
	int xCircun, yCircun, raio, cordX, cordY;
	printf("Verificando as coordenadas na circunferencia!\n");
	printf("Digite a coordenada X da circunferencia: ");
	scanf("%d", &xCircun);
	printf("Digite a coordenada y da circunferencia: ");
	scanf("%d", &yCircun);	
	printf("Digite o raio da circunferencia: ");
	scanf("%d", &raio);
	printf("Digite a coordenada X do vertice: ");
	scanf("%d", &cordX);
	printf("Digite a coordenada Y do vertice: ");
	scanf("%d", &cordY);
	int distancia = sqrt(pow((cordX - xCircun), 2) + pow((cordY - yCircun), 2));
	if(distancia==raio){
		printf("O ponto das coordenadas (%d, %d) eh um ponto da circunferencia!", cordX, cordY);
	}
	else if(distancia>raio){
		printf("O ponto das coordenadas (%d, %d) eh um ponto exterior a circunferencia!", cordX, cordY);
	}
	else{
		printf("O ponto das coordenadas (%d, %d) eh um ponto interior a circunferencia!", cordX, cordY);
	}
}
