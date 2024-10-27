#include <stdio.h>
#include <stdlib.h>

/* Cargar nombre, apellido del estudiante, elegir la materia (1er o 2do año), luego se debera 
cargar la cantidad de presentes y de ausentes. Cargar la cantidad de TP, la nota de cada una, la nota de 
cada parcial. debera imprimir apellido, nombre del alumno, porcentaje de asistencias, si promociona o no 
la cursada
(tener en cuenta cuales se promocionan). y finalmente si aprobo la cursada o no, su promedio (de las dos notas
 de parciales)*/

//funcion cargar datos
void materias(int op, FILE *archivo,int *asis, int *prom, int *mate){
	int matess=0;

	switch(op){
		
		case 1:
			do{
				printf("Elija la materia\n");
				printf("1-Algebra\n");
				printf("2-Algoritmo y estructura de datos\n");
				printf("3-Analisis matematico 1\n");
				printf("4-Arquitectura de computadoras\n");
				printf("5-Ciencia tegnologia y sociedad\n");
				printf("6-Ingles\n");
				printf("7-practicas profecionalizante\n");
				printf("8-Sistemas y organizaciones\n");
				scanf("%d",&matess);	
					
				if(matess < 1 || matess > 8 ){
						printf("\nOPCION IVALIDA\n");
				}
				
			}while(matess < 1 || matess > 8);
			
			*mate=matess;
			
		break;
		case 2:
			do{
		
				printf("Elija la materia\n");
				printf("1-Algoritmo y Estructura de Datos\n");
				printf("2-Analisis Matematico 2\n");
				printf("3-Base de datos\n");
				printf("4-Estadisticas\n");
				printf("5-Ingeniería de Software 1\n");
				printf("6-Ingles 2\n");
				printf("7-Sistemas Operativos \n");
				printf("8-Practicas Profesionalizantes 2\n");
				scanf("%d",&matess);
				
				if (matess < 1 || matess > 8) {
                    printf("\nOPCION INVALIDA\n");
                }
            } while (matess < 1 || matess > 8);
            *mate = matess;
		break;
		case 3:
			do{
			
				printf("Elija la materia\n");
				printf("1-Algoritmo y Estructura de Datos\n");
				printf("2-Aspectos legales de la Profesión\n");
				printf("3-Ingeniería de Software 2\n");
				printf("4-Ingles 3\n");
				printf("5-Practicas Profesionalizantes 3\n");
				printf("6-Redes y Comunicaciones\n");
				printf("7-Seminario de actualización\n");
				scanf("%d",&matess);
				
				 if (matess < 1 || matess > 8) {
                    printf("\nOPCION INVALIDA\n");
                }
            } while (matess < 1 || matess > 8);
            *mate = matess;
	}
	
	 switch (*mate) {
        case 1:
            fprintf(archivo, "Materia: Algebra\n");
            break;
        case 2:
            fprintf(archivo, "Materia: Algoritmo y estructura de datos\n");
            break;
        case 3:
            fprintf(archivo, "Materia: Analisis matematico 1\n");
            break;
        case 4:
            fprintf(archivo, "Materia: Arquitectura de computadoras\n");
            break;
        case 5:
            fprintf(archivo, "Materia: Ciencia tecnologia y sociedad\n");
            break;
        case 6:
            fprintf(archivo, "Materia: Ingles\n");
            break;
        case 7:
            fprintf(archivo, "Materia: Practicas profesionalizantes\n");
            break;
        case 8:
            fprintf(archivo, "Materia: Sistemas y organizaciones\n");
            break;
    }

	eleccion(asis, prom);          
            
}

//funcion eleccion
void eleccion(int *asis, int *prom){
	
	int tp=0;
	int nota=0, nota1=0, cantParc=0;
	int suma=0;
	int aus=0;

	
			printf("Ingrese cantidad de presentes: ");
			scanf("%d",asis);
			
			printf("Cantidad de ausentes:  ");
			scanf("%d",&aus);
			
			printf("Cantidad de trabajos practicos\n");
			scanf("%d",&tp);
			
			for(int i=0; i<tp; i++){
				do{	
					printf("Nota del tp nro %d\n",i+1);
					scanf("%d",&nota);
					
					if (nota < 0 || nota > 10) {
               		 printf("Nota invalida. Debe estar entre 0 y 10.\n");
            		}
				}while(nota < 0 || nota > 10);
			}
			
			printf("Cantidad de parciales.  ");
			scanf("%d",&cantParc);
			
				for(int i=0; i<cantParc; i++){
					do{
						printf("Nota del parcial nro %d\n",i+1);
						scanf("%d",&nota1);
						if(nota1 < 0 || nota1 > 10){
						   printf("Nota invalida. Debe estar entre 0 y 10.\n");
            			}
					}while(nota1 < 0 || nota1 > 10);
					suma= suma + nota1;

				}
				
  			 	if (cantParc > 0) {
      	 				 *prom = suma / cantParc; // Calcula el promedio de parciales
  			 	} else {
       				 *prom = 0; // Si no hay parciales, el promedio es 0
   				}

				printf("parciales prom %d\n",*prom);
				
}
//funcion cargar asistencias
void asistidos(FILE *archivo, int asis, int mate, int prom, int opc1){
	double promAsis=0;
	int totalClases=64;
	
	 if ((mate == 2 && opc1 == 1) || (mate == 1 && opc1 == 2) || (mate == 8 && opc1 == 2)){
        totalClases = 128;
    } else if (mate == 1 && opc1 == 3) {
        totalClases = 128;
    } else if (mate == 5 && opc1 == 3) {
        totalClases = 192;
    }
    
    // Calcular porcentaje de asistencias
    promAsis = (double)asis * 100 / totalClases;
    
    // Verificar condiciones de aprobación
    if ((mate == 1 || mate == 3 || mate == 4 || mate == 8) && promAsis >= 60 && prom >= 4) {
        printf("Aprobo la cursada!!\n");
    } else if ((mate == 5 || mate == 6 || mate == 7) && promAsis >= 70) {
        if (prom >= 7) {
            printf("Promociono la materia!!\n");
        } else if (prom >= 4) {
            printf("Aprobo la cursada!!\n");
        } else {
            printf("Desaprobo la cursada\n");
        }
    } else if (mate == 2 && promAsis >= 60 && prom >= 4) {
        printf("Aprobo la cursada!!\n");
    } else {
        printf("Desaprobo la cursada\n");
    }
    
	//escribir la asistencia en el archivo
	fprintf(archivo, "Promedio de asistencias: %lf\n",prom);
	
	
}


int main(int argc, char** argv) 
{
	char nombre[20]="";
	char apellido[20]="";
	int opc=0;
	int opc1=0;
	int promAsis=0, asis=0, aus=0;
	int mate=0;
	int prom=0;


	FILE *archivo = fopen("archivo.txt", "w");
		if (archivo == NULL)
		{
        	printf("No se pudo abrir el archivo.\n");
        	return 1;	
		}
	do{
		printf("0-Cargar, 1-Salir.\n");
		scanf("%d",&opc);
				
		if(opc==0){
		
			printf("Ingrese nombre Y apellido del alumno\n");
			scanf("%s",nombre);
			scanf("%s",apellido);
			fprintf(archivo, "Nombre: %s  Apellido: %s\n", nombre, apellido);

			printf("En que nivel se encuentra el alumno 1ro, 2do o 3ro (ingrese 1, 2 o 3)?");
			scanf("%d",&opc1);
			
			if(opc1 ==1 || opc1 ==2 || opc1==3){
                fprintf(archivo, "Nivel: %d\n", opc1);
				materias(opc1, archivo, &asis, &prom, &mate);
				
				asistidos(archivo, asis, mate, prom, opc1);
			}else{
				printf("opcion invalida\n");
			}

		} else if (opc != 1) {
            printf("Opcion invalida. Vuelva a elegir.\n");
		}	
	}while(opc != 1);
	
	
		fclose(archivo);
	return 0;
}

