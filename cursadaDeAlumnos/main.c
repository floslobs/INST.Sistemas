#include <stdio.h>
#include <stdlib.h>

/* Cargar nombre, apellido del estudiante, elegir la materia (1er, 2do o 3er año), luego se debera 
cargar la cantidad de presentes y de ausentes. Cargar la cantidad de TP, la nota de cada una, la nota de 
cada parcial. debera imprimir apellido, nombre del alumno, porcentaje de asistencias, si promociona o no 
la cursada
(tener en cuenta cuales se promocionan). y finalmente si aprobo la cursada o no, su promedio (de las dos notas
 de parciales)*/
void asistidos();
void eleccion();
void materias();	
int main(int argc, char** argv) 
{
	char nombreCompleto[50]="";
	char apellido[20]="";
	int opc=0;
	int opc1=0;
	int promAsis=0, asis=0, aus=0;
	int mate=0;
	int prom=0;

	// Apertura del archivo en modo escritura para guardar los datos
	FILE *archivo = fopen("archivo.txt", "w");
		if (archivo == NULL)
		{
        	printf("No se pudo abrir el archivo.\n");
        	return 1;	
		}
	do{
		printf("0-Cargar, 1-Salir.\n");
		scanf("%d",&opc);
       getchar(); // Para capturar el salto de línea que queda en el buffer después del scanf

		if(opc==0){
			// Ingreso de nombre y apellido del alumno
			printf("Ingrese nombre completo del alumno\n");
			fgets(nombreCompleto, sizeof(nombreCompleto), stdin);
			
			printf("Ingrese apellido del alumno:\n");
            fgets(apellido, sizeof(apellido), stdin);
			// Guardar en archivo
			fprintf(archivo, "Nombre completo: %s Apellido:  %s", nombreCompleto, apellido);
           
		    // Selección del nivel (1ro, 2do o 3ro)
			do {
					printf("En que nivel se encuentra el alumno 1ro, 2do o 3ro (ingrese 1, 2 o 3)? ");
					scanf("%d", &opc1);

					if(opc1 != 1 && opc1 != 2 && opc1 != 3) {//validar las opciones 1,2 o 3
					printf("Opcion invalida. Por favor ingrese 1, 2 o 3.\n");
					}

				} while (opc1 != 1 && opc1 != 2 && opc1 != 3);
                fprintf(archivo, "Nivel: %d\n", opc1);
            	// Selección del nivel (1ro, 2do o 3ro)                
				materias(opc1, archivo, &asis, &prom, &mate);
				asistidos(archivo, asis, mate, prom, opc1, nombreCompleto, apellido);
	
				fprintf(archivo, "-------------------------------------------\n");
		} else if (opc != 1) {
            printf("Opcion invalida. Vuelva a elegir.\n");
		}	
	}while(opc != 1);
	    // Cierre del archivo
		fclose(archivo);
	return 0;
}
//funcion materias de los 3 cursos
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
					
				if(matess < 1 || matess > 8 ){//validando rango de materias
						printf("\nOPCION IVALIDA\n");
				}
				
			}while(matess < 1 || matess > 8);
			
			*mate=matess;// Asigna el valor de matess a la direccion de memoria apuntada por mate
			
		break;
		case 2:
			do{
		
				printf("Elija la materia\n");
				printf("1-Algoritmo y Estructura de Datos\n");
				printf("2-Analisis Matematico 2\n");
				printf("3-Base de datos\n");
				printf("4-Estadisticas\n");
				printf("5-Ingenieria de Software 1\n");
				printf("6-Ingles 2\n");
				printf("7-Sistemas Operativos \n");
				printf("8-Practicas Profesionalizantes 2\n");
				scanf("%d",&matess);
				
				if (matess < 1 || matess > 8) {//validando rango de materias
                    printf("\nOPCION INVALIDA\n");
                }
            } while (matess < 1 || matess > 8);
            *mate = matess;
		break;
		case 3:
			do{
			
				printf("Elija la materia\n");
				printf("1-Algoritmo y Estructura de Datos\n");
				printf("2-Aspectos legales de la Profesion\n");
				printf("3-Ingenieria de Software 2\n");
				printf("4-Ingles 3\n");
				printf("5-Practicas Profesionalizantes 3\n");
				printf("6-Redes y Comunicaciones\n");
				printf("7-Seminario de actualizacion\n");
				scanf("%d",&matess);
				
				 if (matess < 1 || matess > 8) {//validando rango de materias
                    printf("\nOPCION INVALIDA\n");
                }
            } while (matess < 1 || matess > 8);
            *mate = matess;
	}
	
	switch (op) {
    case 1: // Primer año
        switch (*mate) {
            case 1: fprintf(archivo, "Materia: Algebra\n"); break;
            case 2: fprintf(archivo, "Materia: Algoritmo y estructura de datos\n"); break;
            case 3: fprintf(archivo, "Materia: Analisis matematico 1\n"); break;
            case 4: fprintf(archivo, "Materia: Arquitectura de computadoras\n"); break;
            case 5: fprintf(archivo, "Materia: Ciencia tecnologia y sociedad\n"); break;
            case 6: fprintf(archivo, "Materia: Ingles\n"); break;
            case 7: fprintf(archivo, "Materia: Practicas profesionalizantes\n"); break;
            case 8: fprintf(archivo, "Materia: Sistemas y organizaciones\n"); break;
        }
        break;
    case 2: // Segundo año
        switch (*mate) {
            case 1: fprintf(archivo, "Materia: Algoritmo y Estructura de Datos\n"); break;
            case 2: fprintf(archivo, "Materia: Analisis Matematico 2\n"); break;
            case 3: fprintf(archivo, "Materia: Base de datos\n"); break;
            case 4: fprintf(archivo, "Materia: Estadisticas\n"); break;
            case 5: fprintf(archivo, "Materia: Ingenieria de Software 1\n"); break;
            case 6: fprintf(archivo, "Materia: Ingles 2\n"); break;
            case 7: fprintf(archivo, "Materia: Sistemas Operativos\n"); break;
            case 8: fprintf(archivo, "Materia: Practicas Profesionalizantes 2\n"); break;
        }
        break;
    case 3: // Tercer año
        switch (*mate) {
            case 1: fprintf(archivo, "Materia: Algoritmo y Estructura de Datos\n"); break;
            case 2: fprintf(archivo, "Materia: Aspectos legales de la Profesion\n"); break;
            case 3: fprintf(archivo, "Materia: Ingenieria de Software 2\n"); break;
            case 4: fprintf(archivo, "Materia: Ingles 3\n"); break;
            case 5: fprintf(archivo, "Materia: Practicas Profesionalizantes 3\n"); break;
            case 6: fprintf(archivo, "Materia: Redes y Comunicaciones\n"); break;
            case 7: fprintf(archivo, "Materia: Seminario de actualizacion\n"); break;
        }
        break;
    default:
        fprintf(archivo, "Materia no valida\n");
        break;
	}
	eleccion(asis, prom);          
            
}

//funcion eleccion de datos
void eleccion(int *asis, int *prom){
	
	int tp=0;
	int nota=0, nota1=0, cantParc=0;
	int suma=0;
	int aus=0;

			//tomamos datos
			printf("Ingrese cantidad de presentes: ");
			scanf("%d",asis);
			
			printf("Cantidad de ausentes: ");
			scanf("%d",&aus);
			
			printf("Cantidad de trabajos practicos\n");
			scanf("%d",&tp);
			
			// Registrar las notas de los trabajos practicos (TP)
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
				//cargamos notas de los parciales
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

				
				
}
//funcion cargar asistencias
void asistidos(FILE *archivo, int asis, int mate, int prom, int opc1, char *nom, char *ape){
	double promAsis=0;
	int totalClases=64;
	
	printf("Nombre y Apellido: %s %s\n",nom, ape);
	// Verificamos las condiciones para determinar el total de clases
	 if ((mate == 2 && opc1 == 1) || (mate == 1 && opc1 == 2) || (mate == 8 && opc1 == 2)){
    // Si se cumple alguna de las condiciones anteriores, asignamos 128 a totalClases
	    totalClases = 128;
    } else if (mate == 1 && opc1 == 3) {
    	    // Si la materia es 1 y la opcion es 3, tambien asignamos 128 a totalClases
        totalClases = 128;
    } else if (mate == 5 && opc1 == 3) {
    	 // Si la materia es 5 y la opción es 3, asignamos 192 a totalClases
        totalClases = 192;
    }
    
    // Calcular porcentaje de asistencias
    promAsis = (double)asis * 100 / totalClases;
     printf("Promedio de asistencias: %.2lf%%\n", promAsis);
    printf("Promedio de parciales: %d\n", prom);
    
    // Verificar condiciones de aprobacion
    if (promAsis >= 60 && prom >= 4) {  // Condiciones minimas para aprobar
        // Materias que no se promocionan
        if ((opc1 == 1 && (mate == 1 || mate == 3 || mate == 4 || mate == 8)) ||
            (opc1 == 2 && (mate >= 1 && mate <= 8)) ||
            (opc1 == 3 && (mate >= 1 && mate <= 7))) {
            printf("APROBO LA CURSADA.\n");
            fprintf(archivo, "APROBO LA CURSADA.\n");
        }
        // Materias que se pueden promocionar
        else if ((mate == 5 || mate == 6 || mate == 7) && promAsis >= 70) {
            if (prom >= 7) {
                printf("POMOCIONO LA MATERIA!\n");
                fprintf(archivo, "POMOCIONO LA MATERIA!\n");
            } else {
                printf("APROBO LA CURSADA.\n");
                fprintf(archivo, "APROBO LA CURSADA.\n");
            }
        } else {
            printf("APROBO LA CURSADA.\n");
            fprintf(archivo, "APROBO LA CURSADA.\n");
        }
    } else {
        printf("DESAPROBO LA CURSADA.\n");
        fprintf(archivo, "DESAPROBO LA CURSADA.\n");
    }

    // Escribir la asistencia en el archivo
    fprintf(archivo, "Promedio de asistencias: %.2lf%%\n", promAsis);
    fprintf(archivo, "Promedio de parciales: %d\n", prom);
}
	




