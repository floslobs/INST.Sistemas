#include <stdio.h>
#include <stdlib.h>

/* ej 11) ejemplos While. ingresar nombre de la materia, nombre del alumno, las tres notas anuales,
 calcular el promedio y decir por pantalla si aprobo o no*/

int main(int argc, char *argv[]) 
{
	
	//declaro variables
	double n1=0, n2=0, n3=0, prom=0; 
	char nombre[20]="", materia[20]="";

	//se pide ingresar el nombre de la materia y del alumno
	printf("ingrese el nombre de la materia:\n");
	scanf("%s",&materia);

	printf("ingrese el nombre del alumno:\n");
	scanf("%s",&nombre);

	//se pide las 3 notas anuales

	
		while(n1 <= 0 || n1 > 10)
		{
			printf("ingrese la nota 1:\n");
			scanf("%lf",&n1); 
		}		
		while(n2 <= 0 || n2 > 10)
		{
			printf("ingrese la nota 2:\n");
			scanf("%lf",&n2); 
		}
		while(n3 <= 0 || n3 > 10){
			printf("ingrese la nota 3:\n");
			scanf("%lf",&n3); 
		}	
			prom = ((n1+n2+n3)/3);

		if(prom>=7){
	
			printf("%s APROBO %s",nombre, materia);
		}
		else{
	
			printf("%s DESAPROBO",nombre);
		}
	
	
	return 0;
}