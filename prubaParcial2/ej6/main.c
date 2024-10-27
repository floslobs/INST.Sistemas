#include <stdio.h>
#include <stdlib.h>

/*6)Generar un vector con estos 5 componentes: A={4, 1, 8, 16, 3}.
obtener el producto de los 5 componentes. imprimir todos los componentes y el producto.
 utiliza funciones para imprimir y obtener el producto*/

int producto(int vect[], int pcant){
	int multipli=1;
	
	//se multiplican los numeros
	for(int i=0; i<5; i++){
		
		multipli=multipli*vect[i];
	}
	return multipli;
}

void imprimir(int vect[], int pcant){
	
	for(int i=0; i<5; i++){
		
		printf("%d|",vect[i]);
	}
		printf("\n");
	printf("el producto es: %d",producto(vect, pcant));
}
int main(int argc, char *argv[]) {
	
	int vec[5]={4, 1, 8, 16, 3};
	int multi=1;
	
	producto(vec,5);
	printf("vector generado\n");
	imprimir(vec, 5);

	
	
	
	return 0;
}