/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos da sua diagonal principal.*/

void main(){
	int mat[5][5];
	int k, i, aux;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			if(k==i){
				printf("%d ", mat[k][i]);				
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}	
}
