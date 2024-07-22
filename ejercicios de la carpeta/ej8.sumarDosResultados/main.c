#include <stdio.h>
#include <stdlib.h>

/* ej 8) ingresar dos numeros, al primer numero sumarle 4, al segundo numero sumarle6,
 sumar ambos resultados e imprimirlos */

int main(int argc, char *argv[]) 
{
	//declaramos varibles
	int n1=0, n2=0, sn1=0, sn2=0, suma=0;
	
	//pedimos que ingrese dos numeros por teclado
	printf("ingrese dos numeros:\n");
	scanf("%d %d",&n1, &n2);
	
	//a los numeros le sumamos otros numeros
	sn1= n1+4;
	sn2= n2+6;
	suma= sn1+sn2;
	
	printf("el total de la suma de los numeros es %d",suma);
	
	
	return 0;
}