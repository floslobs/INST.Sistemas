#include <stdio.h>
#include <stdlib.h>

/*ingresar sueldo y categoria. en caso1 sueldo * 2, en caso2 sueldo + 15%, 
	en caso3 sueldo - 10%, caso4 sueldo / 4, caso5 sueldo, default no hacer nada */

int main(int argc, char *argv[])
 {
	//ingresamos variables
	int sueldo=0, cat=0;
	
	//pedimos ingresar sueldo y categoria
	printf("ingrese sueldo\n");
	scanf("%d",&sueldo);
	
	printf("ingrese categoria\n");
	scanf("%d",&cat);
	
	switch(cat){
		
		//en caso1 sueldo * 2
		case 1:
			sueldo = sueldo * 2;	
			break;
			//en caso 2 sueldo + 15% 
		case 2:
			sueldo = sueldo * 1.15;
			break;
			//sueldo -10%
		case 3:
			sueldo = sueldo * 0.9;
			break;
			//sueldo / 4
		case 4:
			sueldo = sueldo/4;
			break;
			//sueldo
		case 5:
			sueldo;
			break;
			//no se hace nada
		default:
			printf("no hacer nada";)	
	}
		//se imprimeel sueldo segun el caso
		printf("sueldo es %d",sueldo);
	
	return 0;
}