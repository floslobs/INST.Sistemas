#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void sumaNumeros(){
	
int num1=2;
int num2=4;
int suma=0;

suma=num1+num2;

printf("la suma es %d \n",suma);


}
int main(int argc, char *argv[]) {
	
	sumaNumeros();
	sumaNumeros();
	sumaNumeros();
	
	return 0;
}*/

//suma Numeros con Parametros
/*void sumaNumerosconParametros(int pnum1, int pnum2, int psuma){
	
psuma=pnum1+pnum2;

printf("la suma dentro de la funcion es %d \n",psuma);

}
int main(int argc, char *argv[]) {
	
int num1=0;
int num2=0;
int suma=0;

printf("ingrese numeros\n");
scanf("%d",&num1);
scanf("%d",&num2);
	
	sumaNumerosconParametros(num1,num2,suma);
	
return 0;
}*/


//suma Numeros con Parametros y Retorno
int sumaNumerosconParametrosyRetorno(int pnum1, int pnum2, int psuma){
	
psuma=pnum1+pnum2;

return psuma;
}

//funcion resta
int restaRetorno(int pnum1, int pnum2, int presta){
	
presta=pnum1-pnum2;

return presta;
}

//funcion division 
double divisionRetorno(double pnum1, double pnum2, double pdivision){
		
	pdivision = (pnum1 / pnum2);
		printf("Dentro de la funcion la divicion es: %lf\n",pdivision);

return pdivision;
}

// funcion multiplicacion
int multiplicacionRetorno(int pnum1, int pnum2, int pmulti){
		
	pmulti=pnum1*pnum2;

return pmulti;
}

/*void numeroParRetorno(int pnum){
	
	if((pnum % 2==0)){
		printf("el numero %d es par\n",pnum);
	}else{
		printf("el  numero %d es  impar\n",pnum);
	}*/
int numeroParRetorno(int pnum){
	
	resto=0;
	if((pnum % 2==0)){
		printf("el numero %d es par\n",pnum);
	}else{
		printf("el  numero %d es  impar\n",pnum);
	}
		
	
}

double promRetorno(int psuma, double promedio){
	
	
	 promedio = psuma/2;
	 	printf("Dentro de la funcion el promedio es: %lf\n",promedio);

	return promedio;
	
}

int ingreseNum(int pnum){
	
	printf("ingrese el primer numero\n");
	scanf("%d",&pnum);
	return pnum;
}

int main(int argc, char *argv[]) {

int num1=0;
int num2=0;	
	
	num1=ingreseNum(num1);
		numeroParRetorno(num1);

	num2= ingreseNum(num2);	
		numeroParRetorno(num2);


int suma=0;
int resta=0;
double division=0;
int multi=0;
double prom=0;

	//ingreseNum(num1);
	//ingreseNum(num2);
	resta=restaRetorno(num1,num2,resta);
	suma= sumaNumerosconParametrosyRetorno(num1,num2,suma);
	multi=multiplicacionRetorno(num1,num2,multi);
	
	printf("fuera de la funcion la resta es: %d\n",resta);
	printf("fuera de la funcion la suma es: %d\n",suma);
	printf("fuera de la funcion la multiplicacion es: %d\n",multi);
	divisionRetorno(num1,num2,division);
	prom=promRetorno(suma,prom);
return 0;
}