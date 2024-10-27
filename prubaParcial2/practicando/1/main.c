#include <stdio.h>
#include <stdlib.h>

/* GENERAR MATRIZ . con numeros aleatorios, ingresar cantidad de columnas y de filas. 
imprimir diagonal principal, triangulo inferior , triangulo superior. 
contar cuantos numeros par hay. */

int main(int argc, char *argv[]) {
	
	int matriz[3][3];
	int cantF, cantC, num;
	srand(getpid());
	
	printf("ingresar cantidad de filas\n");
	scanf("%d",&cantF);
	printf("ingresar cantidad de columnas\n");
	scanf("%d",&cantC);
	
	for(int i=0; i<cantF; i++){
		for(int j=0; j<cantC; j++){
			
			num= rand() % 9;
			matriz[i][j]=num;
		}
	}
	//imprimir
	printf("matriz generada\n");
	for(int i=0; i<cantF; i++){
		for(int j=0; j<cantC; j++){
				printf("|%d|",matriz[i][j]);

		}
		printf("\n");
	}
	//diagonal
	printf("diagonal\n");

	for(int i=0; i<cantF; i++){
		for(int j=0; j<cantC; j++){
			if(i==j){
				printf("%d|",matriz[i][j]);
			}
		}
	}
	printf("\n");
	//imprimir  triangulo superior
	printf("triangulo superior\n");
	for(int i=0; i<cantF; i++){
		for(int j=0; j<cantC; j++){
				if(i<j){
				printf("%d|",matriz[i][j]);
			}
		}
	}
	for(int i=0; i<cantF; i++){
		for(int j=0; j<cantC; j++){
		}
	}
	return 0;
}