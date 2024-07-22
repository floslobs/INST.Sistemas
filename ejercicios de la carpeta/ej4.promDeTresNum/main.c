#include <stdio.h>
#include <stdlib.h>

/* ej 4) ingresar 3 numeros y obtener el promedio */

int main(int argc, char *argv[]) 
{
	//declaramos variables
	double n1=0, n2=0, n3=0, prom=0;
	
	//pedimos que se ingresen tres numeros para sacar el promedio
	printf("ingresar tres numenos para obtener el promedio:\n");
	scanf("%lf %lf %lf",&n1, &n2, &n3);
	
	// calculamos el promedio
	prom = (n1+n2+n3)/3;
	
	printf("el promedio de los numeros es %lf",prom);
	
	return 0;
}