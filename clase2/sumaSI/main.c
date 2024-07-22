#include <stdio.h>
#include <stdlib.h>

/* sumar con condicional si */

int main(int argc, char *argv[])
 {
 		//se pide ingresar un numero y se ingresa por teclado
 	printf("ingrese el numero 1:\n");
 	scanf("%d",&num1);
 	
 	printf("ingrese el numero 2:\n");
 	scanf("%d",&num2);
 	
 	suma = num1+num2;
 	
 	if(suma>10){
 		//se ejecuta si la condicion es verdadera
 		printf("la suma es mayo a 10\n");
	 }
	 else{
	 	//se ejecuta si la condicion es falsa
	 	printf("la suma es mayor a 10:\n");
	 }
	 
	 printf("la suma es %d:\n",suma);
 	
 	
	return 0;
}