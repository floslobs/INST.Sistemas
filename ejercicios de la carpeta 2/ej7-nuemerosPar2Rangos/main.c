#include <stdio.h>
#include <stdlib.h>

/* 7-Contar y mostrar cuántos números pares hay en un rango dado utilizando un bucle while. */

int main(int argc, char *argv[]) 
{
	int r1=0, r2=0, contador=0, par=0;

	do{
	
		printf("decir el inicio del rango \n ");
		scanf("%d",&r1);
			printf("decir el final del rango \n ");
		scanf("%d",&r2);
		
			while(r1 <= r2){
			
			if( r1 % 2 == 0){
				contador++;
				printf("%d\n",r1);
			}
			
			r1++;
			
		}
		
		 printf("La cantida de numeros pares es: %d\n",contador);
	
	
	}while(r1>=r2);
		
	
	
	
	
	return 0;
}