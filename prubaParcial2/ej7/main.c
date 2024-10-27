#include <stdio.h>
#include <stdlib.h>

/*7)Ingresar un numero.si es 1 debera imprimir el duplicado de ese numero, si es 2 ,
 se debera imprimir un cartel que diga, es el numero 2. si es 3 se debera imprimir el
  triplicadodel numero, y si el numero noes ninguno de los mencionados debera imprimir el numero
   ingresado directamente */

int main(int argc, char *argv[]) {
	
	int num = 0;
	
	printf("ingresar un numero\n");
	scanf("%d",&num);
	
	switch(num){
		case 1:
		printf("el duplicado del numero es: %d",num*2);
		break;
		case 2:
			printf("es el numero 2");
		break;
		case 3:
			printf("el numero triplicado es: %d",num*3);
		break;
		default:
			printf("el numero es: %d",num);
	}
	return 0;
}