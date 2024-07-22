#include <stdio.h>
#include <stdlib.h>

/* ej 9 ) ingresar los lados de un terreno, calcular su perimetro e imprimirlo solo si el
resultado es mayo a diez */

int main(int argc, char *argv[])
 {
 	//declaramos variables
 	double l1=0,l2=0, l3=0, l4=0, perim=0;
 	
 	//pedimos que ingrese los cuatro lados del terreno
 	printf("ingrese los cuatro lados del terreno:\n");
 	scanf("%lf %lf %lf %lf",&l1, &l2, &l3, &l4);
 	
 	// calculamos el perimetro
 	perim= l1+l2+l3+l4;
 	
 	// condicionamos, si perimetro es mayo a 10 imprimir por pantalla
 	if(perim>10){
 		
 		printf("el perimetro es %lf",perim);
 		
	 }
	return 0;
}