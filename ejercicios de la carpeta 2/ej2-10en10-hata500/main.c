#include <stdio.h>
#include <stdlib.h>

/* Mostrar de 10 en 10 todos los numeros que existen del 0 al 500 utilizando un bucle for */

int main(int argc, char *argv[]) 
{
	int num=0;
	for(int i=0; i<50; i++){
		
		 num= num + 10;
		
		printf("%d\n",num);
	}
	
	return 0;
}