#include <stdio.h>
#include <stdlib.h>

/* hacer un programa que ingresando dia y mes de nacimiento te diga de que horoscopo sos */

int main(int argc, char *argv[]) 
{
	
	
	/*Aries: del 21 de marzo al 19 de abril.
	Tauro: del 20 de abril al 20 de mayo.
	Géminis: del 21 de mayo al 20 de junio.
	Cáncer: del 21 de junio al 22 de julio.
	Leo: del 23 de julio al 22 de agosto.
	Virgo: del 23 de agosto al 22 de septiembre.
	Libra: del 23 de septiembre al 22 de octubre.
	Escorpio: del 23 de octubre al 21 de noviembre.
	Sagitario: del 22 de noviembre al 21 de diciembre.
	Capricornio: del 22 de diciembre al 19 de enero.
	Acuario: del 20 de enero al 18 de febrero.
	Piscis: del 19 de febrero al 20 de marzo.*/
	
	int mes=0, dia=0, anio=0;
	

	do{
		printf("Ingrese su dia de nacimiento\n");
		scanf("%d",&dia);
		printf("Ingrese su mes de nacimiento\n");
		scanf("%d",&mes);
		printf("Ingrese su anio de nacimiento\n");
		scanf("%d",&anio);	
			if(mes<0 || mes>12 || dia<0 || dia>31){
				printf("NO INGRESO UNA FECHA VALIDA, VUELVA A INGRESAR\n");
			}
	}while(mes<0 || mes>12 || dia<0 || dia>31);
			

			
	if(mes==1 && dia>=20 || mes==2 && dia <=18){	
					printf("Sos de ACUARIO\n");
	}else if(mes==2 && dia>=19 || mes==3 && dia <=20){
					printf("Sos de PISCIS\n");
	}else if(mes==3 && dia>=21 || mes==4 && dia <=19){
					printf("Sos de ARIES\n");
	}else if(mes==4 && dia>=20 || mes==5 && dia <=20){
					printf("Sos de TAURO\n");
	}else if(mes==5 && dia>=21 || mes==6 && dia <=20){
					printf("Sos de GEMINIS\n");
	}else if(mes==6 && dia>=21 || mes==7 && dia <=22){
					printf("Sos de CANCER\n");
	}else if(mes==7 && dia>=23 || mes==8 && dia <=22){
					printf("Sos de LEO\n");
	}else if(mes==8 && dia>=23 || mes==9 && dia <=22){
					printf("Sos de VIRGO\n");
	}else if(mes==9 && dia>=23 || mes==10 && dia <=22){
					printf("Sos de LIBRA\n");
	}else if(mes==10 && dia>=23 || mes==11 && dia <=21){
					printf("Sos de ESCORPIO\n");
	}else if(mes==11 && dia>=22 || mes==12 && dia <=21){
					printf("Sos de SAGITARIO\n");
	}else if(mes==12 && dia>=22 || mes==1 && dia <=19){
					printf("Sos de CAPRICORNIO\n");	
	}
	
	/*					HOROSCOPO CHINO
		LA RATA (1936, 1948, 1960, 1972, 1984, 1996, 2008)
		EL BUEY (1937, 1949, 1961, 1973, 1985, 1997, 2009)
		EL TIGRE (1938, 1950, 1962, 1974, 1986, 1998, 2010)
		EL CONEJO (1939, 1951, 1963, 1975, 1987, 1999, 2011)
		EL DRAGÓN (1940, 1952, 1964, 1976, 1988, 2000, 2012)
		LA SERPIENTE (1941, 1953, 1965, 1977, 1989, 2001, 2013)
		EL CABALLO (1942, 1954, 1966, 1978, 1990, 2002, 2014)
		LA CABRA (1943, 1955, 1967, 1979, 1991, 2003, 2015)
		EL MONO (1944, 1956, 1968, 1980, 1992, 2004, 2016)
		EL GALLO (1945, 1957, 1969, 1981, 1993, 2005, 2017)
		EL PERRO (1946, 1958, 1970, 1982, 1994, 2006, 2018)
		EL CERDO (1947, 1959, 1971, 1983 1995, 2007, 2019)
	*/
	
	if(anio==1936 || anio==1948 || anio==1960 || anio==1972 || anio==1984 || anio==1996 || anio==2008){
		printf("Tu horoscopo chino es LA RATA");
	}else if(anio==1937 || anio==1949 || anio==1961 || anio==1973 || anio==1985 || anio==1997 || anio==2009){
		printf("Tu horoscopo chino es EL BUEY");
	}else if(anio==1938 || anio==1950 || anio==1962 || anio==1974 || anio==1986 || anio==1998 || anio==2010){
		printf("Tu horoscopo chino es EL TIGRE");
	}else if(anio==1939 || anio==1951 || anio==1963 || anio==1975 || anio==1987 || anio==1999 || anio==2011){
		printf("Tu horoscopo chino es EL CONEJO ");
	}else if(anio==1940 || anio==1952 || anio==1964 || anio==1976 || anio==1988 || anio==2000 || anio==2012){
		printf("Tu horoscopo chino es EL DRAGÓN");
	}else if(anio==1941 || anio==1953 || anio==1965 || anio==1977 || anio==1989 || anio==2001 || anio==2013){
		printf("Tu horoscopo chino es LA SERPIENTE");
	}else if(anio==1942 || anio==1954 || anio==1966 || anio==1978 || anio==1990 || anio==2002 || anio==2014){
		printf("Tu horoscopo chino es EL CABALLO");
	}else if(anio==1943 || anio==1955 || anio==1967 || anio==1979 || anio==1991 || anio==2003 || anio==2015){
		printf("Tu horoscopo chino es LA CABRA");
	}else if(anio==1944 || anio==1956 || anio==1968 || anio==1980 || anio==1992 || anio==2004 || anio==2016){
		printf("Tu horoscopo chino es EL MONO");
	}else if(anio==1945 || anio==1957 || anio==1969 || anio==1981 || anio==1993 || anio==2005 || anio==2017){
		printf("Tu horoscopo chino es EL GALLO");
	}else if(anio==1946 || anio==1958 || anio==1970 || anio==1982 || anio==1994 || anio==2006 || anio== 2018){
		printf("Tu horoscopo chino es EL PERRO");
	}else if(anio==1947 || anio==1959 || anio==1971 || anio==1983 || anio==1995 || anio==2007 || anio==2019){
		printf("Tu horoscopo chino es EL CERDO");
	}
	
	
	
	
	
	
	
	return 0;
}