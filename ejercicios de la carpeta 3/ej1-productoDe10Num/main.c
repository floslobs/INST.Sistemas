#include <stdio.h>
#include <stdlib.h>

/* 1) ingresar 10 numeros , obtener el producto imprimirlo */

int main(int argc, char *argv[]) 
{
	int num=0, multi=1;
	
	srand(getpid());

	
	for(int i=0; i<10; i++){
			num = rand() % 10+1; //siempre es un numero mas del rango ejemplo entre 0 y 10
		
				multi= multi * num;
			
				printf("%d \n",num);
		
	
	}
	
	printf("la multiplicacion de los numeros es: %d \n",multi);
	
	return 0;
}