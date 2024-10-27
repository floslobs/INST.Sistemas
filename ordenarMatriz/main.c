#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//funcion ordenar matriz
void ordenarMatriz(int matriz[3][3]){
	
	int aux;
	
	//3*3 porque es matriz de 3
	for(int i=0; i<3*3; i++){
		for(int j=0; j<3*3-1; j++){
			if(matriz[j/3][j%3] > matriz[(j+1)/3][(j+1)%3]){
				
				aux=matriz[j/3][j%3];
				matriz[j/3][j%3] = matriz[(j+1)/3][(j+1)%3];
				matriz[(j+1)/3][(j+1)%3] = aux;
			}
		}
	}
}
void imprimirMatriz(int matriz[3][3]){
	
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			
			printf("%d ",matriz[f][c]);
			
		}
		printf("\n");
	}
	
}
int main(int argc, char *argv[]) 
{
	
	int matriz[3][3] = {
		{9, 2, 3},
		{6, 5, 4},
		{7, 1, 8}
	};
	
	//matriz original
	printf("Matriz original:\n");
	imprimirMatriz(matriz);
	
	ordenarMatriz(matriz);
	
	//matriz ordenada
	printf("Matriz ordenada:\n");
	imprimirMatriz(matriz);
	return 0;
}