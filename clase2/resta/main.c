#include <stdio.h>
#include <stdlib.h>

/* restar dos numeros */

int main(int argc, char *argv[]) 
{
	
		//declaramos variables
 	int num1=0, num2=0, resta=0;
 	
 	//se pide ingresar un numero y se ingresa por teclado
 	printf("ingrese el numero 1:\n");
 	scanf("%d",&num1);
 	
 	printf("ingrese el numero 2:\n");
 	scanf("%d",&num2);
 	
 	resta = num1-num2;
 	
 	printf("la resta es %d:\n",resta);
 	
	return 0;
}