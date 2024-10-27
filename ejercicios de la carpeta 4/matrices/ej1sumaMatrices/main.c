#include <stdio.h>
#include <stdlib.h>

/* -generar matriz A numeros aleatorios 4*4
   -generar matriz B numeros aleatorios 4*4
   -generar matriz C 1er componnte de A + 1er componente de B 
   FUNCIONES imprimir a, b, c*/

//FUNCION IMPRIMIR MATRICES
void imprimirM(int matrizA[4][4], int matrizB[4][4], int matrizC[4][4]){
	
	printf("Matriz A\n\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("|%d|",matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B\n\n");
	for(int a=0; a<4; a++){
		for(int b=0; b<4; b++){
			printf("|%d|",matrizB[a][b]);
		}
		printf("\n");
	}
	
	printf("Matriz C\n\n");
	for(int c=0; c<4; c++){
		for(int d=0; d<4; d++){
		printf("|%d|",matrizC[c][d]);
		}
		printf("\n");
	}
	
	printf("Matriz de reverza C\n\n");
	for(int c=0; c<4; c++){
		for(int d=0; d<4; d--){
		printf("|%d|",matrizC[c][d]);
		}
		printf("\n");
	}
}

//funcion suma matrizA
void sumaMaA(){
}
int main(int argc, char *argv[])
{
		int matrizA[4][4];
		int matrizB[4][4];
		int matrizC[4][4];
		int num=0;
		int suma=0;
	
	//generar matrizA
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			num = rand() % 60;
			matrizA[i][j]=num;
		}
	}
	
	//generar matriz B
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			num = rand() % 60;
			matrizB[i][j]=num;
		}
	}
	
	//generar matriz C
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			
			matrizC[i][j]= matrizA[i][j] + matrizB[i][j];
			
		}
	}
	imprimirM(matrizA, matrizB, matrizC);
		srand(getpid());
		

		
	return 0;
}