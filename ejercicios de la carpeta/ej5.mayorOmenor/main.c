#include <stdio.h>
#include <stdlib.h>

/* ej 5) ingresar dos numeros, imprimir el mayor y luego el menor */

int main(int argc, char *argv[])
 {
 	//declaramos variables
 	int num1=0, num2=0;
 	
 	//pedimos que se ingresen dos numeros 
 	printf("ingresar dos numeros para saber cual es el mayor y cual el menor:\n");
 	scanf("%d %d",&num1, &num2);
 	
 	//se evaluan los numeros para determinar cual es el mayor y cual el menor
 	if(num1>num2){
 		
 		printf("el primer numero %d es mayor al segundo %d",num1, num2);
	 }
	 else{
	 	printf(" el segundo numero %d es mayo al primero %d",num2, num1);
	 }

 	
	return 0;
}