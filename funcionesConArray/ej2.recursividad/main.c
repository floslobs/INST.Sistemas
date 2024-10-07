#include <stdio.h>
#include <stdlib.h>

/* recursividad: es cuando una funcion se llama asi misma */

//funcion recursiva
void contar(int pnum){
	
	if(pnum>0){
		
		printf("%d \n",pnum);
		contar(pnum - 1);
	}
}

//funcion factorial
int factorial(int pnum){
	
	if(pnum<=1){
		return 1;
	}else{
		return (pnum*factorial(pnum-1));
	}
}

int main(int argc, char *argv[]){
	
	int num=0;
	
	printf("ingresar numero: ");
	scanf("%d",&num);
	
	//contar(num);
	printf("%d\n",factorial(num));//se multiplican entre si
	
	return 0;
}