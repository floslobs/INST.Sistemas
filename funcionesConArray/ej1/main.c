#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//void sumarArray(int pArray[], int pCant){
//	int suma=0;
	//for(int i=0; i<pCant; i++){
		
	//	suma=suma+pArray[i];
	//}
	//printf("la suma es %d",suma);
//}
//llenar vector
void vector(int pArray[], int pcant){

	printf("llenar vector\n");
	for(int i=0; i<4; i++){
	
		scanf("%d",&pArray[i]);
	}
	
	printf("\nfinalizo la carga del arreglo\n\n");
	
		printf("Vector ");
	for(int i=0; i<4; i++){
		 printf("%d | ", pArray[i]);
	}
   
}

//funcion del mayor
void mayor(int pArray2[], int mayorr){
	
		for(int i=0; i<4; i++){
		
			if(pArray2[i] > mayorr){
			mayorr=pArray2[i];
			}		
		}
		printf("\n\nel mayor es %d\n",mayorr);
}

//funcion del menor
void menor(int pArray2[], int menorr){
	
		for(int i=0; i<4; i++){
		
			if(pArray2[i] < menorr){
			menorr=pArray2[i];
			}		
		}
		printf("el menor es %d\n",menorr);
}

//contador de numeros pares
int cuentaPares(int pArray[], int pcont){
	
 	pcont=0;
	for(int i=0; i<4; i++){
		if((pArray[i] % 2==0)){
			pcont++;	
		}
	}
		printf("los numeros pares son %d \n",pcont);
return pcont;
}

//vector ordenado de menor a mayor
void orden(int pArray[],int n  ){
	
	int aux=0;
	for(int i = 1; i < n -1 ; i++) {//i en 1 para ordenar
        for(int j = 0; j < n -1 ; j++) {
            if(pArray[j] > pArray[j + 1]) {
                aux = pArray[j];
                pArray[j] = pArray[j + 1];
                pArray[j + 1] = aux;
            }
    	}
	}
	printf("Vector ordenado de menor a mayor\n");
	for(int i=0; i<n; i++){
		 printf("%d | ", pArray[i]);
	}
	
}
//obtener mayor, obtener menor, promedio, cuente numeros pares, ordene asendente
int main(int argc, char *argv[])
 {
	int array[]={1,4,2,7};
	//sumarArray(array,4);
	int array2[4];
	int mayorrr=-9999;
	int menorrr=9999;
	int n=4;
	cuentaPares(array,4);
	vector(array2,4);
	mayor(array2,4);
	menor(array2,4);
	cuentaPares(array2,4);
	orden(array2,4);
	
	return 0;
	}