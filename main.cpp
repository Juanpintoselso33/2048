#include <iostream>
#include <cstdlib>
#include <ctime>
#include "prototipos.h"

using namespace std;


int main(int argc, char *argv[]) {		
	int opcion= 0;
	char subopcion= ' ';
	
	Usuario usuarios[MAXUSUARIOS];
	Juego juegos[MAXPARTIDAS];
	
	inicializar_usuarios(usuarios);
	inicializarPartidas(juegos);
	cargarDatos(usuarios, juegos);
	
	do{
		fflush(stdin);
		ejecucion_menu(opcion);
		switch (opcion){
		case 1:
		{		
			ejecucion_submenu1(subopcion, usuarios);
			break;
		}				
		case 2:
		{
			Juego juego;
			if(login(usuarios, juego)){
				jugar(juego, juegos);
			}				
			break;
		}					
		case 3:
		{			
			ejecucion_submenu2(subopcion, usuarios, juegos);
			break;
		}	
		case 4:
		{
			break;
		}
		default:
			printf("Opción no válida. Por favor, intente de nuevo.\n");
			break;
		}
	}while(opcion !=4);
	
	return 0;
}
