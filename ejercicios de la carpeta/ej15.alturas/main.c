#include <stdio.h>
#include <stdlib.h>

/*ej 15) ingresar la altura de tres personas y decir quien es el mas
 	alto y quien el mas bajo*/

int main(int argc, char *argv[])
 {
 	//variables
 	
 	double a=0,b=0,c=0;
 	char p1[20]="";
 	char p2[20]="";
 	char p3[20]="";
 	
 	printf("Ingrese nombre de primera persona:\n");
 	scanf("%s",&p1);
 	printf("Ingrese altura de %s:\n",p1);
 	scanf("%lf",&a);
 	printf("Ingrese nombre de segunda persona:\n");
 	scanf("%s",&p2);
 	printf("Ingrese altura de %s:\n",p2);
 	scanf("%lf",&b);
 	printf("Ingrese nombre de tercera persona:\n");
 	scanf("%s",&p3);
 	printf("Ingrese altura de %s:\n",p3);
	scanf("%lf",&c);
	
	if(a>b && a>c  )
	if(b>c)
	{
		printf("%s es mas alto con %.2lf , %s es mas bajo con %.2lf:\n",p1,a,p3,c);
	}
 	else{
 		printf("%s es mas alto con %.2lf , %s es mas bajo con %.2lf:\n",p1,a,p2,b);
	 }
	 
	if(b>a && b>c  )
	if(a>c)
	{
		printf("%s es mas alto con %.2lf , %s es mas bajo con %.2lf:\n",p2,b,p3,c);
	}
 	else{	
 		printf("%s es mas alto con %.2lf , %s es mas bajo con %.2lf:\n",p2,b,p1,a);
	 }
	 
	if(c>a && c>b  )
	if(a>b)
	{	
		printf("%s es mas alto con %.2lf , %s es mas bajo con %.2lf:\n",p3,c,p2,b);
	}
 	else{
 		printf("%s es mas alto con %.2lf , %s es mas bajo con %.2lf:\n",p3,c,p1,a);	
	 }
	 
	return 0;
}