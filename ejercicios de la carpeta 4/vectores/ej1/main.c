#include <stdio.h>
#include <stdlib.h>

/* generar un vector de 5 componentes .
 sumar todos los componentes.
 dividir por 2los componentes mayores a 5.
  imprimir sololos componentes pares del vector. imprimir suma */

int main(int argc, char *argv[])
{
	int num=0, suma=0, div=0;
	int vec[5];
	srand(getpid());
	
	//generar matriz
	for(int i=0; i<5; i++){
		
		num=rand()%6;
		vec[i]=num;
	}
	
	//sumar componentes
	for(int i=0; i<5; i++){
		
		suma = suma + vec[i];
	}
	
	//dividir por 2 
	for(int i=0; i<5; i++){
		if(vec[i]>5){
			vec[i]=vec[i]/2;
		}
	}
	
	//imprimir pares y la suma. resultado de la divicion
	for(int i=0 ; i<4; i++){	
			
		if((vec[i])%2==0){
			
			printf("numero par %d \n",vec[i]);
			                          
		}
	}
	for(int i=0; i<5; i++){
		
		printf("%d",vec[i]);
	}
	printf("\nsuma %d",suma);
	
	
	
	return 0;
}