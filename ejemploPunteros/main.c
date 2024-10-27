#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void CambioDeCartas(int *pnum)
{
	*pnum=300;
}
void intercarmbioDeCartasPuntero(int *pnum1, int *pnum2)
{
	int aux=0;
	aux=*pnum1;
	*pnum1= *pnum2;
	*pnum2= aux;
	
}
void cambiaArreglo(int *parreglo, int pcant)
{
	for(int i=0;i<pcant;i++)
	{
	//*(parreglo + i)= 5;
	*(parreglo + i)= *(parreglo + i)+5;
	}
}
int main(int argc, char *argv[]) 
{
	int arreglo[]={2,1,8,3};
	cambiaArreglo(arreglo,4);
	for (int i=0;i<4;i++)
	{
		printf("%d|", arreglo[i]);
	}
/* ejemplo 1
	int numero=7;
	int *puntero;
	puntero= &numero;
	
	printf("el valor de numero es: %d\nEl valor de *puntero es: %d\n", numero, *puntero);
	//*puntero= 20;
	CambioDeCartas(&numero);
	printf("el valor de numero es: %d\nEl valor de *puntero es: %d", numero, *puntero);
	printf("\nla direccion de memoria del *puntero es: %p", puntero);
*/
/* ejemplo 2
int num1=4, num2=2;
intercarmbioDeCartasPuntero(&num1, &num2);
printf("numero 1 es %d, numero 2 es %d", num1,num2);
*/



	return 0;
}