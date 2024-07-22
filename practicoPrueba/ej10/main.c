#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int contado=0, cuo=0, cuoInteres=0, contInteres=0;
	
	printf("monto del producto\n");
	scanf("%d",&contado);
	do{
	
		printf("catidad de cuotas a pagar\n");
		scanf("%d",&cuo);
	
		if(cuo==3 || cuo==6 || cuo==12 || cuo==24){
		
			switch(cuo){
				case 3:
					contInteres=(contado * 0.03)+contado;
					cuoInteres= contInteres/3;
					
					
					break;
				case 6:
					contInteres=(contado * 0.10)+contado;
					cuoInteres= contInteres/6;
					
					
					break;
				
				case 12:
					
					contInteres=(contado * 0.30)+contado;
					cuoInteres= contInteres/12;					
				
					break;
				
				case 24:
					
					contInteres=(contado * 1.0)+contado;
					cuoInteres= contInteres/24;
					
				
					break;
			}
		}else{
			printf("cantidad de cuotas incorrestas, ingrese 3, 6, 12 o 24\n");
			
		}	
		
	}while(cuo!=3 && cuo!=6 && cuo!=12 && cuo!=24);
	printf("\n el importe final del producto con intereses es: $%d",contInteres);
					printf("\n el importe de cada cuota es: $%d",cuoInteres);
	return 0;
}