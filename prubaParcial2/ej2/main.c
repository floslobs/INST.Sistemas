#include <stdio.h>
#include <stdlib.h>

/* 2)Generar un vector de 6 componentes con numeros aleatorios de tipo int . sumar todos los compnentes.
 imprimir la suma y todos los componentes mayores o iguales a 5.se debera implementar funciones al
  menos para sumar y para imprimir */

//funcion suma
void sumar(int vect[], int pcant){
	
	int sum=0, i=0;
	
	while(i<6){
		
		sum= sum + vect[i];
		
		i++;
	}
	printf("la suma es: %d",sum);
}
//funcio imprimir
void imprimir(int vect[]){
	int i=0;
	
	printf("los componentes del vector mayores o iguales a 5 son:\n");
	while(i<6){
		
		if(vect[i] >= 5){
		
		printf("%d|",vect[i]);
		}
		i++;
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	
	int vec[6];
	int suma=0;
	int num=0;
	int i=0, j=0;
	
	
	srand(getpid());
	
	while(i<6){
		
		num = rand() % 51;
	
		vec[i]=num;
		
		i++;
	}
	printf("los componentes del vector son:\n");
	while(j<6){
	 
		printf("%d|",vec[j]);
		
		j++;
	}
	printf("\n");
	imprimir(vec);
	sumar(vec,6);
	
	return 0;
}