#include <stdio.h>
#include <stdlib.h>

/* ej.4)ingresar 100 numerose imprimir el mayor */

int main(int argc, char *argv[]) 
{
	int num=0, mayor=0;
	srand(getpid());
	
	for(int i=0; i<100; i++){
	
		num = rand() % 100+1;//numeros generados del 1 al 10
		 printf("%d-",num);
		if(num>mayor){
			
			mayor=num;
		}
	}
	printf("\n el mayor es: %d",mayor);
	return 0;
}