#include <stdio.h>
#include <stdlib.h>

/* arreglos */

int main(int argc, char *argv[]) 
{
	/*
	declarar y asignar valores a un arreglo
	int arreglo[]={0,2,8,5};
	*/
	
	//declaro vector con 4 componentes
	int arreglo2[4];
	double suma=0;
	double prom=0;
	int mayor = -9999;
	int menor = 9999;
	int multi=1;
	int aux=0;
	//arreglo2[0]=8;
	//arreglo2[1]=3;
	
	//llenamos vector
	for(int i=0; i<4; i++){
		scanf("%d",&arreglo2[i]);
	}
	
	printf("\nfinalizo la carga del arreglo\n\n");
	
	//suma de componentes
	for(int i=0; i<4; i++){
		
		suma= suma+arreglo2[i];

		printf("%d| ",arreglo2[i]);
		
	}
	
	//ordenamos el vector de menor a mayor
	for(int i = 0; i < 4 ; i++) {
        for(int j = 0; j < 4 ; j++) {
            if(arreglo2[j] > arreglo2[j + 1]) {
                aux = arreglo2[j];
                arreglo2[j] = arreglo2[j + 1];
                arreglo2[j + 1] = aux;
            }
    	}
	}
	printf("Vector ordenado de menor a mayor");
	for(int i=0; i<4; i++){
		 printf("%d | ", arreglo2[i]);
	}
   
   
	
	for(int i=0; i<4; i++){
		
		if(arreglo2[i] > mayor){
			mayor=arreglo2[i];
		}
	}
		
	//definimos cual es el menor
	for(int i=0; i<4; i++){
		
		if(arreglo2[i] < menor){
			menor=arreglo2[i];
		}
	}
	
	// Inicializamos la variable resta con el primer elemento
	int resta=arreglo2[0];
	
	for(int i=1; i<4; i++){
		
	/*	resta -= arreglo2[i];
	
	*/
	//se recorre el vector desde el segundo elemento, 
	//restando cada valor de arreglo2 a resta.
		resta = resta - arreglo2[i];

		
	}
	//multiplicamos los componentes
	for(int i=0; i<4; i++){
		
		multi= multi*arreglo2[i];
		
	}

	 
	
	
	printf("\n\nLa suma es: %lf ",suma);
	printf("\n\nLa resta es: %d ",resta);
	printf("\n\nLa multiplicacion es: %d ",multi);
	prom= suma/4;
	printf("\n\nEl promedio es: %lf",prom);
	printf("\n\nEl mayor es: %d",mayor);
	printf("\n\nEl menor es: %d",menor);

	
	
	
	return 0;
}