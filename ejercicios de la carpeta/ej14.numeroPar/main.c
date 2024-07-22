#include <stdio.h>
#include <stdlib.h>

/* ej 14) ingresar un numero y decir si es par o no */

int main(int argc, char *argv[]) 
{
	//declaro variables
	
	int num=0;
	
	printf("ingrese un numero:\n");
	scanf("%d",&num);
	
	if(num % 2 == 0){
		
		printf("el numero es PAR");
		
	}
	else{
		
		printf("el numero es IMPAR");
	}
	
	return 0;
}