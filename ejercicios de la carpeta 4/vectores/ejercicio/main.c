#include <stdio.h>
#include <stdlib.h>

/* generar un vector A de 4 componentes con numeros ingresados por el usuario.
generar un segundo vector B  de 4 componentes.
generar un tercer vector C  que contenga el primer componente de A mas el primercomponente de B , el segundo componente de A mas el segundo de B y asi sucesivamente
generar un 4 vector D , QUE CONTENGA EL PRIMER COMP DE a POR EL ULTIMO DE b
restar componentes . imprimir de atras para delante. generar un 3 vector*/

int main(int argc, char *argv[]) 
{
	int num=0, vecA[4], vecB[4], vecC[4], vecD[4];
	int  contA=1, contB=1;
	srand(getpid());
	//generar vectoR A 
	for(int i=0; i<4; i++){    
	
		printf("Ingresar componente %d para A: ",contA);
		scanf("%d",&num);
		vecA[i]=num;
		contA++;
	}
	
	printf("\n");
	
	//generar vector B
	for(int f=0; f<4; f++){
		
		printf("Ingresar componente %d para B: ",contB);
		scanf("%d",&num);
		vecB[f]=num;
		contB++;
	}
	
	//generar vector C
	for(int i=0; i<4; i++){
		
		vecC[i]=vecA[i]+vecB[i];
	}
	
	int f=3;
	//generar vector D
	for(int i=0; i<4; i++){
		
		vecD[i]=vecA[i]*vecB[f];
		f--;
	}
	
	 printf("\n");
	 
	//imprimir componentes
	printf("Vector A: ");
	for(int i=0; i<4; i++){
		
		printf("%d|",vecA[i]);	
	}
	printf("\n");
	printf("Vector B: ");
	for(int i=0; i<4; i++){
		printf("%d|",vecB[i]);
	}
	printf("\n");
	printf("Vector C: ");
	for(int i=0; i<4; i++){
		printf("%d|",vecC[i]);
	}
	printf("\n");
	printf("Vector D: ");
	for(int i=0; i<4; i++){
		printf("%d|",vecD[i]);
	}
	
	printf("\n\n");
	
	//imprimir C de atras para adelante
	printf("Vector C de atras para adelante: ");
	for(int i=3; i>=0; i--){
		
		printf("%d|",vecC[i]);
	}
	
	return 0;
}