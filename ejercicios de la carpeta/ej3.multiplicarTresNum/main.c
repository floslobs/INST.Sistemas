#include <stdio.h>
#include <stdlib.h>

/* ej 3) ingresar tres numeros multiplicarlos entre si e imprimir el resultado */

int main(int argc, char *argv[]) 
{
	
	//deeclaramos variables
	int n1=0, n2=0, n3=0, multi=0;
	
	//pedimos que se ingresen tres numeros por teclado
	printf("ingrese tre numeros:\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	//hacemos la multiplicacion por los tre numeros
	multi = n1*n2*n3;
	
	printf("la multiplicacion de los numeros es %d",multi);
	
	
	return 0;
}