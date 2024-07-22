#include <stdio.h>
#include <stdlib.h>

/* ej 6) ingresar dos numeros dividirlos e imprimir el resultado*/

int main(int argc, char *argv[]) 
{
	double num1=0, num2=0, divi=0;
 	
 	//se pide ingresar dos numeros y se ingresan por teclado
 	printf("ingrese el numero 1:\n");
 	scanf("%lf",&num1);
 	
 	printf("ingrese el numero 2:\n");
 	scanf("%lf",&num2);
 	
 	// se hace la division, con la condicion que no se divida por 0
 	
 	while(num2==0)
	 {
	 	printf("Por favor ingrese el numero 2 nuevamente NO SE PUEDE DIVIDIR POR 0:\n");
 		scanf("%lf",&num2);
	 	
	 }
 
	 	
	 	divi = num1/num2;
	 	
	 	printf("la division es %lf",divi);
	 	
	 
	
	
	return 0;
}