#include <stdio.h>
#include <stdlib.h>

/* 3)Utilizando al mennos un ciclo de repeticion exacto ingresar 3 numeros de tipo float,
 sumarle 2 a cada uno de ellos, y obtener su promedio. imprimir los numeros y el promedio
  si el mismo es mayor o igual a 20. */

int main(int argc, char *argv[]) {
	
	float num=0;
	float suma[3];
	float suma2=0;
	float prom=0;
	printf("ingrese tres numeros de tipo float\n");
	for(int i =0; i<3; i++){
		
		scanf("%f",&num);
		
		suma[i]= num + 2;
		
		suma2= suma2 + suma[i];
		
	}
	printf("los numeros con 2 sumados son: \n");
	 for(int i = 0; i < 3; i++){
        printf("%f\n", suma[i]);
    }
	
	 prom = suma2 / 3;
	
	if(prom >=20){
		printf("el promedio es igual o mayor a 20: %f",prom);
	}
	
	
	return 0;
}