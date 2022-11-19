/* El juego de dados conocido como “Chicos y Grandes”

A continuación se muestran las reglas para los jugadores.

1. Un jugador tira dos dados. Cada dato tiene seis caras. Las caras contienen 1, 2, 3, 4, 5 y 6 puntos.
2. Antes de tirar los dados el jugador debe elegir entre Chicos o Grandes
3. Una vez que los dados se hayan detenido, se calcula la suma de los puntos en las dos caras superiores. El rango de la
suma es de 2 a 12
4. • Si a la primera tirada, la suma es inferior a 7, el jugador que eligió Chicos gana.
5. • Si a la primera tirada la suma es superior a 7 el jugador que eligio Grandes gana.
6. • Si a la primera tirada la suma es 7, entonces la casa gana

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(){
	int n, d1, d2,opciones, chicos, grandes, res, suma;
	int vector[11]; // 2-12
	int i;
	
	printf("Digite el numero de jugadores que participaran en el juego:");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++){
	
	printf("\n Digite una de las opciones que desea 1.-Grandes o 2.-Chicos: "); scanf("%i", &opciones);
	switch(opciones){
		case 1:printf("\n Introdujo Grandes\n"); break;
		case 2: printf("\n Introdujo Chicos \n"); break;
		default : printf("Introdujo un opcion no valida \n");
		return 0; 
	}
	system("pause");
	srand(time(0));
		d1 = (rand() % (6 - 1 + 1)) + 1;
		d2 = (rand() % (6 - 1 + 1)) + 1;
		printf(" \n El valor de el primer dado es: %i \n", d1);
		printf(" \n El valor de el segundo dado es: %i \n", d2);
		
		res=d1+d2;
		printf("\n");
		
		printf("\n El resultado de las caras superiores de su tirada de dados es:%i\n ", res);
	}
	
	if(res<7){
		printf("\n Gana el jugador que eligio -Chico- \n");
	}
	else if(res>7){
		printf("\n Gana el jugador que eligio -Grandes- \n");
	} 
	else if(res==7){
		printf("\n La casa gana, todos los jugadores pierden");
	}
	

	system("pause");
	return 0;
}
