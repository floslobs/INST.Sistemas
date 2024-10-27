#include <stdio.h>
#include <stdlib.h>

/*5)Utilizando al menos un ciclo for crear un programa que permita el ingreso de 4 numeros positivos
 y de tipo int. luego sumarle 2 a cada uno, y obtener su promedio. imprimir cada numero(al que se le sumo 2) 
 y el promedio. este ultimo solo si es mayor o igual a 12 y menor a 100 */

int main(int argc, char *argv[]) {
	
	int vec[4];
	int suma[4];
	int suma2=0;
	int num=0;
	int prom=0;
	
	
	for(int i=0; i<4; i++){
		do{
			printf("ingrese numeros positvos\n");
			scanf("%d",&vec[i]);
			
		}while(vec[i]<=0);
	}
	printf("vector generado\n");
	for(int i=0; i<4; i++){
		
		printf("%d|",vec[i]);
	}
	
	
	for(int i=0; i<4; i++){
		
		suma[i]= vec[i] + 2;
		
		suma2= suma2 + suma[i];
	}
	printf("\n");
	printf("vector generado con la suma de 2\n");
	for(int i=0; i<4; i++){
		
		printf("%d|",suma[i]);
	}
	prom=suma2/4;
	printf("\n");
	if(prom >=12 && prom<100){
		printf("el promedio es: %d",prom);
		
	}
	return 0;
}