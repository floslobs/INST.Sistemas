#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])

 {
 	
 	int menor=0, num1=0, num2=0, mayor=0;
 	
 	scanf("%d",&num1);
 	scanf("%d",&num2);
 	
 	if(num1>num2){
 		mayor=num1*2;
 		menor=num2*5;
 		printf("el mayor es el primer numero: %d --multiplicacion-- %d\n",num1, mayor);
 		printf("el menor es el segundo numero: %d --multiplicacion-- %d\n",num2, menor);

	 }else{
	 	mayor=num2*2;
 		menor=num1*5;
	 		printf("el menor es el primer numero: %d --multiplicacion-- %d\n",num1, menor);
	 	printf("el mayor es el segundo numero: %d --multiplicacion-- %d\n",num2, mayor);
 	
	 }

	return 0;
}