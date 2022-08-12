/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a distância entre estes dois pontos. A distância entre dois pontos pode ser
determinada através da distância euclidiana. O cálculo da distância deve ser realizado
através de um subprograma, que deve receber como entrada os valores das
coordenadas x e y dos dois pontos. formula: raiz de (x1-x2)² + (y1-y2)²*/ 

#include <stdio.h>
#include <math.h>

float distancia(float x, float y, float p, float q){
	float calc = ((x - p)*(x - p))+((y - q)*(y - q));
	float resp = sqrt(calc);
	return resp; 
}

void main(){
	float x, y, p, q;
	printf("Digite a coodenada X: ");
	scanf("%f", &x);
	printf("Digite a coodenada Y: ");
	scanf("%f", &y);
	printf("Digite a coodenada P: ");
	scanf("%f", &p);
	printf("Digite a coodenada Q: ");
	scanf("%f", &q);
	float resultado = distancia(x, y, p, q);
	printf("A distancia eh de %f", resultado);	
}
