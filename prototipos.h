#ifndef PROTOTIPOS_H
#define PROTOTIPOS_H
#include "estructuras.h"

//Funciones de la primera parte.
void limpiar_pantalla();
void logo();
void bienvenida();
void init_tablero(Tablero &tablero);
void generar_celda(Tablero &tablero);
int calcular_puntaje(Juego &juego);
int calcular_sumatoria(Tablero &tablero);
void print_tablero(Juego &juego);
bool hay_movimientos_disponibles(Juego &juego);
bool mover_celdas(Juego &juego, char direccion);
bool replay_f(Juego &juego);
void jugar(Juego &juego, Juego juegos[]);

//Funciones de la segunda parte
void mostrar_menu(); 
int ejecucion_menu(int &opcion);

void mostrar_submenu_1(); 
void ejecucion_submenu1(char &subopcion, Usuario usuarios[]);

void mostrar_submenu_2(); 
void ejecucion_submenu2(char &subopcion, Usuario usuarios[], Juego Juegos[]);

void inicializar_usuarios(Usuario usuarios[]);
void inicializarPartidas(Juego juegos[]);
void alta_usuarios();
bool login(Usuario usuarios[], Juego &juego);

void listado_usuarios_alias(Usuario usuarios[]);
void listado_partidas_usuario(Juego partidas[], Usuario usuarios[]);
void listado_partidas_fecha(Juego partidas[], Usuario usuarios[]);

#endif
