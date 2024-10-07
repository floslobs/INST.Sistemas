#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// Función para mostrar el menu principal
void mostrarMenu() {
    int opc; 
    int opc2;
    do {
        // Mostrar las opciones del menu
        printf("     TRUCO\n");
        printf("ESTA POR COMENZAR EL JUEGO\n");
        printf("1. Ver reglas\n");
        printf("2. Jugar\n");
        printf("3. Salir\n");
    
        scanf("%d", &opc); // opcion elegida por el usuario

        // Segun la opcion seleccionada
        switch (opc) {
            case 1: 
                verReglas(); // funcion que muestra las reglas
                break;
            case 2: 
                iniciarJuego(); //funcion que inicia el juego
                
                break;
            case 3: 
                printf("Saliendo del juego...\n"); 
                exit(0); // Termina el programa
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n"); // Mensaje de error
        }
    } while (opc != 3); // Repetir hasta que el usuario elija salir
}

// Función para iniciar el juego
void iniciarJuego() {
    int puntos; 
    int opc2;
    char palo[40][10];
    int valor[40];
    printf("A cuantos puntos queres jugar a 15 o 30 ? ");
    scanf("%d", &puntos);//cantidad de puntos 
	switch(puntos){
		case 15:
			
			generarMazo(valor, palo);
			
			break;
		case 30:
			generarMazo(valor,palo);

			break;
		default:
			printf("jsak");
	}  
}

void generarMazo(int valores[40], char palos[40][10]) {
    int aux = 0;

    // Definimos los nombres de los palos
    char nombresPalos[4][10] = {"Basto", "Copa", "Oro", "Espada"};

    // Llenamos el mazo con los valores y palos
    for (int i = 0; i < 4; i++) { // Para cada palo
        for (int j = 1; j <= 7; j++) { // Valores del 1 al 7
            valores[aux] = j;
            strcpy(palos[aux], nombresPalos[i]); // Copia el nombre del palo
            printf("%d %s\n", valores[aux], palos[aux]); // Imprime el valor y el palo
            aux++;
        }
        for (int j = 10; j <= 12; j++) { // Valores del 10 al 12
            valores[aux] = j;
            strcpy(palos[aux], nombresPalos[i]); // Copia el nombre del palo
            printf("%d %s\n", valores[aux], palos[aux]); // Imprime el valor y el palo
            aux++;
        }
    }
}

void mezclarMazo(){
}

//funcion dar mano
void darMano(){
}


//funcion que muestra las cartas de cada jugador
void mostrarCarta(int nume, char palo[]){
//SE DIBUJA LA CARTA
	int eleccion=0;
	
	for(int i=0; i<3; i++){	
	
		printf("Carta%d\n",i+1);
		printf(" +-------+\n");
		printf(" |%d      |\n",nume);
		printf(" |       |\n");
		printf(" |%s |\n",palo);
		printf(" |       |\n");
		printf(" |      %d|\n",nume);
		printf(" +-------+\n");
	}
	
	printf("Elije que hacer\n");
	printf("4-ENVIDO---5-TRUCO---6-MAZO\n");
	printf("TIRAR CARTA-- 1, 2 o 3\n");
	scanf("%d",&eleccion);

}


//funcion dar manos
void ganador(int pjug1, int pjug2){
	
	
	
	if(pjug1>pjug2){
		printf("jugador 1 GANA!!");
	}else{
		if(pjug2>pjug1){
		printf("jugador 2 GANA!!");
		}
	}
}

// Funcion para mostrar las reglas del juego
void verReglas() {
   
    printf("Reglas del Truco Argentino\n\n");
    printf("Introduccion:\n");
    printf("Objetivo del juego:\n");
    printf("El truco argentino se juega a 2 jugadores o por parejas y se utiliza la baraja espaniola de 40 cartas.\n");
    printf("El objetivo es ganar un numero determinado de chicos (1, 2 o 3 chicos).\n");
    printf("Cada chico se puede jugar a 15 o 30 puntos. La primera mitad de los puntos se les llama (malas),\n");
    printf("y a la segunda (buenas).\n");
    printf("Los puntos se consiguen mediante los trucos y los envites, que son apuestas que se van realizando en el transcurso de las diferentes manos de cada ronda.\n\n");
    printf("Valor de las cartas (de mayor a menor):\n");
    printf("1. As de espadas (la mayor)\n");
    printf("2. As de bastos\n");
    printf("3. Siete de espadas (manilla de espadas)\n");
    printf("4. Siete de oros (manilla de oros)\n");
    printf("5. Treses\n");
    printf("6. Doses\n");
    printf("7. As de oros y as de copas (ases falsos)\n");
    printf("8. Doces\n");
    printf("9. Onces\n");
    printf("10. Dieces\n");
    printf("11. Siete de copas y siete de bastos (sietes falsos o malos)\n");
    printf("12. Seises\n");
    printf("13. Cincos\n");
    printf("14. Cuatros\n\n");
    printf("Como jugar al truco argentino:\n");
    printf("Al principio de la partida se decide por sorteo automatico el jugador que es mano,\n");
    printf("es decir, el que empieza a jugar. En la siguiente ronda (si la hay) empezaria el jugador situado a la derecha del actual.\n");
    printf("En cada ronda, se reparten 3 cartas a cada jugador y todos tiran una carta por turnos.\n");
    printf("El jugador con la carta de mayor valor ganara dicha mano y tirara primero en la siguiente (en caso de empate, el jugador anterior sera el primero en tirar).\n");
    printf("La primera pareja o jugador que gana 2 manos, gana la ronda.\n");
    printf("Por ejemplo, si una pareja gana la primera mano y empata la segunda, gana la ronda.\n\n");
    printf("Casos especiales:\n");
    printf("1. Si se empata la primera mano, ganara aquel jugador o pareja que gane cualquiera de las dos manos restantes.\n");
    printf("2. Si se gana una mano, se pierde otra y se empata la 3ra, gana el jugador o pareja que ha ganado la primera mano.\n");
    printf("3. Si se empatan las 3 manos seguidas, ganara la ronda el jugador mano.\n\n");
    printf("El truco:\n");
    printf("El truco es una apuesta que se puede realizar en cualquier momento de la partida y la cobra el ganador de la ronda.\n");
    printf("La pareja o jugador contrario debe responder con una de las siguientes opciones:\n");
    printf("1. No quiero. Rechaza el truco y la pareja contraria gana la ronda.\n");
    printf("2. Quiero. Acepta la apuesta, la cual se resolvera al final de la ronda.\n");
    printf("3. Retruco, Vale cuatro. Sube la apuesta y pasa el turno a la pareja contraria para que decida.\n");
    printf("Apuesta y puntos:\n");
    printf("1. Si no hay apuesta: 1 punto al ganador de la ronda.\n");
    printf("2. Truco: 2 puntos.\n");
    printf("3. Retruco: 3 puntos.\n");
    printf("4. Vale cuatro: 4 puntos.\n\n");
    printf("El envido:\n");
    printf("Esta apuesta la gana el jugador que consigue ligar 2 cartas del mismo palo cuya suma sea la mas alta.\n");
    printf("En este caso, los sietes son las cartas de mayor valor, y los ases las mas bajas.\n");
    printf("Ademas, solo se puede realizar en la primera mano y siempre antes del truco.\n");
    printf("Si se tienen 2 cartas del mismo palo, se suma su valor + 20.\n");
    printf("La puntuacion mas alta del envido es 33 (7+6+20=33).\n");
    printf("Las figuras o cartas negras (sota, caballo y rey) valen 0 puntos para el envido.\n");
    printf("Si se tienen 2 figuras del mismo palo, la puntuacion de envido es 20.\n");
    printf("Si nadie tiene 2 cartas del mismo palo, se cuenta la carta mas alta.\n");
    printf("En caso de empate, gana el jugador que va de mano.\n");
    printf("Ejemplo: un 7 de copas pierde contra un 3 y un 1 de espadas (3+1+20=24 de envido).\n\n");
    printf("En el envido es importante saber si se esta en (buenas) o (malas).\n");
    printf("En (buenas), al menos un jugador o pareja ya tiene la mitad de puntos.\n");
    printf("En (malas), todavia nadie ha llegado a la mitad.\n\n");
    printf("La pareja o jugador contrario debe responder con una de las siguientes opciones:\n");
    printf("1. No quiero. Rechaza la apuesta y la pareja que ha envidado suma los puntos apostados hasta ese momento.\n");
    printf("2. Quiero. Acepta la apuesta, que se resolvera al final de la ronda.\n");
    printf("3. Envido, Real envido, Falta. Sube la apuesta y pasa el turno al jugador o pareja contraria para que decida.\n\n");
    printf("Puntuacion conseguida en el envido:\n");
    printf("Apuesta(s)                              No quiero          Quiero\n");
    printf("Envido                                  1 punto            2 puntos\n");
    printf("Real envido                             1 punto            3 puntos\n");
    printf("Falta                                   1 punto            Ver regla mas abajo\n");
    printf("Envido + Envido                         2 puntos           4 puntos\n");
    printf("Envido + Real envido                    2 puntos           5 puntos\n");
    printf("Envido + Falta                          2 puntos           Ver regla mas abajo\n");
    printf("Real envido + Falta                     3 puntos           Ver regla mas abajo\n");
    printf("Envido + Envido + Real envido           4 puntos           7 puntos\n");
    printf("Envido + Real envido + Falta            5 puntos           Ver regla mas abajo\n");
    printf("Envido + Envido + Real envido + Falta   7 puntos           Ver regla mas abajo\n\n");
    printf("La falta es la apuesta maxima del envido y la puntuacion depende del estado de la partida:\n");
    printf("1. Si se esta en (malas), el jugador o pareja ganadora del envite gana el chico.\n");
    printf("2. Si se esta en (buenas), el jugador o pareja ganadora se lleva los puntos que le faltan al jugador o pareja con mas puntos para conseguir el chico.\n");
    printf("Ejemplo: en una partida a 30 puntos, una pareja tiene 10 puntos y la otra 20; en la falta se apostarian 10 puntos por estar en (buenas) (30-20=10).\n\n");
    printf("El envido se juega antes que el truco, por tanto, si una pareja llega a los puntos de un chico sumando los puntos del envido, gana el chico y el truco no se tiene en cuenta.\n");
    printf("Ejemplo: en una partida a 30 puntos, una pareja tiene 28 puntos y la otra 26; la primera gana un envido de 2 puntos y la segunda gana un truco de 4 puntos; gana la primera pareja con el envido.\n\n");
    printf("Jugar las cartas tapadas:\n");
    printf("Tirar una carta tapada puede resultar util para enganiar a los contrarios y esconder tu jugada.\n");
    printf("Atencion! Si tiras una carta tapada, esa carta pierde su valor (todas las cartas le ganan y solo puede empatar con otra carta tapada).\n\n");
    printf("La flor:\n");
    printf("Se tiene flor cuando se consiguen ligar 3 cartas del mismo palo.\n");
    printf("La puntuacion de una flor es la misma que en el envido: se suma el valor de las cartas mas 20 puntos (teniendo en cuenta que las figuras valen 0).\n\n");
   


}
  
int main(int argc, char *argv[]) {
	

 int valores[40];
char palos[40][10]; // Arreglo para almacenar el nombre de los palos
char palo1, palo2;

    
	
	mostrarMenu();
	verReglas();
	iniciarJuego();
	generarMazo(valores, palos);

	int manoJug1[3];
	int manoJug2[3];


	

    
	return 0;
}  


