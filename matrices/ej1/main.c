#include <stdio.h>
#include <stdlib.h>

/* IMPRIMIR MATRIZ . con numeros aleatoris, ingresar cantidad de columnas y de filas. 
imprimir diagonal principal, triangulo inferior , triangulo superior. 
contar cuantos numeros para hay. */

int main(int argc, char *argv[])
{
	
	int num=0;
	int matriz[3][3];
	int cont=0;
	int cantF=0, cantC=0;
	srand(getpid());
	
	
	printf("Ingrese cantidad de columnas\n");
	scanf("%d",&cantC);
	printf("Ingrese cantidad de filas\n");
	scanf("%d",&cantF);
	//generar matriz
	for(int fila=0; fila<cantF; fila++){
		for(int colum=0; colum<cantC; colum++){
			num = rand() % 9;
			matriz[fila][colum]=num;
			if(num % 2== 0){
				
				cont++;
			}
		}
	}
	
	//imprimir matriz
	printf("Matriz\n\n");
	for(int fila=0; fila<cantF; fila++){
		for(int colum=0; colum<cantC; colum++){
			printf("|%d|",matriz[fila][colum]);
		}
		printf("\n");
	}
	
		//imprimir matriz de atras adelante
	printf("Matriz\n\n");
	for(int fila=cantF-1; fila>=0; fila--){
		for(int colum=cantC-1; colum>=0; colum--){
			printf("|%d|",matriz[fila][colum]);
		}
		printf("\n");
	}
	//imprimir diagonal principal
	printf("\nDiagonal\n\n");
	for(int fila=0; fila<cantF; fila++){
		for(int colum=0; colum<cantC; colum++){
			if(colum==fila){
				printf("|%d|",matriz[fila][colum]);
				
			}
		}
	}
	
	//imprimir triangulo inferior
	printf("\n\nTriangulo inferior\n\n");
	for(int fila=0; fila<cantF; fila++){
		for(int colum=0; colum<cantC; colum++){
			if(fila>colum){
				printf("|%d|",matriz[fila][colum]);
				
			}
		}
	}
	
	//imprimir triangulo superior
	printf("\n\nTriangulo superior\n\n");
	for(int fila=0; fila<cantF; fila++){
		for(int colum=0; colum<cantC; colum++){
			if(fila<colum){
				printf("|%d|",matriz[fila][colum]);
				
			}
		}
	}
	

	printf("\n\nHay %d numero pares",cont);
	
	
	return 0;
}