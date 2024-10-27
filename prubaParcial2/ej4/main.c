#include <stdio.h>
#include <stdlib.h>

/* 4)Generar un vector de 4 componentes con numeros aleatorios. obtener el componente menor .
 obtener el producto de los 4 componentes. imprimir todos ls componentes pares. se debera implementar 
 funciones para obtener el componente menor, obtener el producto y para imprimir */

	
	//obtener el menor
	int obmenor(int vecc[], int pcant){
		int menor=9999;
		for(int i=0; i<4; i++){
		
			if(vecc[i]< menor){
			
				menor = vecc[i];
			}
		}
		return menor;
	}

	//producto
	int obproducto(int vecc[]){
		int producto=1;
		for(int i=0; i<4; i++){
		
			producto= producto * vecc[i];
		}
		return producto;
	}
	
	//imprimir
	void imprimir(int vecc[], int pcant, int menor, int producto ){
		
		printf("el numero menor es: %d",menor);
		printf("\n");
		printf("el producto es: %d",producto);
		printf("\n");
		printf("num par\n");
		for(int i=0; i<4; i++){
			if(vecc[i]%2==0){
				printf("%d|",vecc[i]);
			}
		}
		
	}

int main(int argc, char *argv[]) {
	
	int vec[4];
	int num=0;
	int menor = 0;
	int producto =0;
	srand(getpid());
	
	for(int i=0; i<4; i++){
		
		num= rand() % 101;
		
		vec[i]=num;
	}
	//vector generado aleatoriamente
	for(int i=0; i<4; i++){
		
		printf("%d|",vec[i]);
	}
	printf("\n");
	menor= obmenor(vec,4);
	producto= obproducto(vec);
	imprimir(vec,4, menor, producto);
	return 0;
}