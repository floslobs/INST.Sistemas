#include <stdio.h>
#include <stdlib.h>

/* ej 1) ingresar dos numeros sumarlos e imprimir el resultado */

int main(int argc, char *argv[]) 
{
		//declaramos variables
 	int num1=0, num2=0, suma=0;
 	
 	//se pide ingresar dos numeros y se ingresan por teclado
 	printf("ingrese el numero 1:\n");
 	scanf("%d",&num1);
 	
 	printf("ingrese el numero 2:\n");
 	scanf("%d",&num2);
 	
 	//se hace la suma de los numeros
 	suma = num1+num2;
 	
 	printf("la suma es %d:\n",suma);
 	
	return 0;
}