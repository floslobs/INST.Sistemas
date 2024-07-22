#include <stdio.h>
#include <stdlib.h>

/* 18) realizar el algoritmo para la facturacion de un producto, aplicando el iva 21%.
	 imprimiendo el importe total */

int main(int argc, char *argv[]) 
{
	
	//declaramos variables
	
	double prod=0, iva=0, total=0;
	char nombre[20]="";
	
	//pedimos que ingrese el importe del pructo a facturar
	printf("ingrese el nombre del producto \n");
	scanf("%s",&nombre);
	printf("Ingrese el importe del producto \n");
	scanf("%lf",&prod);
	
	//realizamos el calculo aplicando el iva
	
	iva= prod * 0.21;
	total= prod + iva;

	printf("EL total a facturar del producto %s es: $%lf",nombre,total);
	 
	return 0;
}