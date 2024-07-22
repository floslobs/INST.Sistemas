#include <stdio.h>
#include <stdlib.h>

/* dividir dos numeros, teniendo en cuenta que no se puede dividir por 0*/

int main(int argc, char *argv[]) 
{
	
	
		//declaramos variables
 	double num1=0, num2=0, divi=0;
 	
 	//se pide ingresar un numero y se ingresa por teclado
 	printf("ingrese el numero 1:\n");
 	scanf("%lf",&num1);
 	
 	printf("ingrese el numero 2:\n");
 	scanf("%lf",&num2);
 	
 	
 	if(num2 == 0){
 		
 		printf("ERROR no se puede dividir por 0");	
	 }
	 else{
	 	
	 	divi = num1/num2;
	 	
	 	printf("la division es %lf",divi);
	 	
	 }
	
	return 0;
}