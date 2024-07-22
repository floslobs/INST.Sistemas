#include <stdio.h>
#include <stdlib.h>

/* ej 12)ingresar el nombre de la materia, nombre del alumno, nota final, cantidad
 de asistencias y determinar si el alumno aprobo o no*/

int main(int argc, char *argv[]) 
{
		
//declaro variables
double n1=0, asis=0; 
char nombre[20]="", materia[20]="";

//se pide ingresar el nombre de la materia y del alumno
printf("ingrese el nombre de la materia:\n");
scanf("%s",&materia);

printf("ingrese el nombre del alumno:\n");
scanf("%s",&nombre);

//se pide nota final
printf("ingrese la nota final:\n");
scanf("%lf",&n1); 

//se pide cantidad de asistencias
printf("ingrese cantidad de asistencias:\n");
scanf("%lf",&asis);

	//se condiciona q tenga asistencia y nota
	if(n1>=4 && asis>=30){
	
	printf("%s APROBO %s",nombre, materia);
	}
	else{
	
	printf("%s DESAPROBO %s",nombre, materia);
	}
	
	
	return 0;
}