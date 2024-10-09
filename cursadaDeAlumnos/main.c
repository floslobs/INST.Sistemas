#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//funcion cargar datos
void materias(int op){
	int tp=0, pres=0, aus=0;
	int mate=0, nota=0, nota1=0, cantParc=0;
	int suma=0;
	int prom=0, asistencias=0, asistencias2=0;
	
	switch(op){
		case 1:
			printf("Elija la materia\n");
			
			printf("1-Algebra\n");
			printf("2-Algoritmo y estructura de datos\n");
			printf("3-Analisis matematico 1\n");
			printf("4-Arquitectura de computadoras\n");
			printf("5-Ciencia tegnologia y sociedad\n");
			printf("6-Ingles\n");
			printf("7-practicas profecionalizante\n");
			printf("8-Sistemas y organizaciones\n");
			scanf("%d",&mate);
			switch(mate){
				case 1:
					
					asistencias = 64;
					asistencias2=asistencias*0.60;
					asistidos(pres);

				break;
				case 2:
					asistencias = 128;
					asistencias2=asistencias*0.60;
					asistidos(pres);
				break;
				case 3:
					asistencias = 64;
					asistencias2=64*0.60;
				break;
				case 4:
					asistencias = 64;
					asistencias2 = asistencias*0.60;
				break;
				//	case 1:
					
					//break;
					//case 1:
					//break;
					//case 1:
					//break;
					//case 1:
					//break;
			}
			
			
		
			printf("Cantidad de ausentes.  ");
			scanf("%d",&aus);
			printf("Cantidad de trabajos practicos\n");
			scanf("%d",&tp);
				
				for(int i=0; i<tp; i++){
					
					printf("Nota del tp nro %d\n",i+1);
					scanf("%d",&nota);
				}
			printf("Cantidad de parciales.  ");
			scanf("%d",&cantParc);
				for(int i=0; i<cantParc; i++){
					
					printf("Nota del parcial nro %d\n",i+1);
					scanf("%d",&nota1);
					
					suma= suma + nota1;
				}
				printf("suma %d\n",suma);
				
				prom= (suma / cantParc);
				
				printf("parciales prom %d\n",prom);
		break;
		case 2:
			printf("Elija la materia/n");
			printf("1-Algebra\n");
			printf("2-Algoritmo y estructura de datos\n");
			printf("3-Analisis matematico 1\n");
			printf("4-Arquitectura de computadoras\n");
			printf("5-Ciencia tegnologia y sociedad\n");
			printf("6-Ingles\n");
			printf("7-practicas profecionalizante\n");
			printf("8-Sistemas y organizaciones\n");
			scanf("%d",&mate);
			break;
	}
	
}

//funcion cargar asistencias
void asistidos(int asis){

	printf("Cantidad de presentes.  ");
			scanf("%d",&asis);
	
}
void promAsis(int porciento, int au){
	
	
//	if(porciento )
	
	////porcent = 128*0.60
}

int main(int argc, char** argv) 
{
	char nombre[20]="";
	char apellido[20]="";
	int opc=0;
	int opc1=0;

//	char buffer[100];
		//crea el Block de notas
	FILE *archivo = fopen("archivo.txt", "w");
		if (archivo == NULL)
		{
        	printf("No se pudo abrir el archivo.\n");
        	return 1;	
		}
	do{
		printf("0-Cargar, 1-Salir.\n");
		scanf("%d",&opc);
		
		//fgets(buffer, sizeof(buffer), stdin);
		
		if(opc==0){
		
		printf("Ingrese nombre Y apellido del alumno\n");
		scanf("%s",nombre);
		scanf("%s",apellido);
		printf("En que nivel se encuentra el alumno 1ro o 2do (ingrese 1 o 2)?  ");
		scanf("%d",&opc1);
		
		materias(opc1);
		fprintf(archivo, "Nombre: %s  Apellido: %s \n", nombre, apellido);

		}else{
			if(opc != 0 && opc !=1 ){
				printf("Opcion invalida vuelva a elegir \n");
			}
		}
		
	}while(opc != 1);
	
	
		fclose(archivo);
	return 0;
}
