#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#define TAMANIO 4
#define LARGOU 10
#define LARGON 20
#define LARGOA 30
#define LARGOL 20
#define LARGOC 8
#define MAXUSUARIOS 10
#define MAXPARTIDAS 100

typedef struct _tablero{
	int matriz[TAMANIO][TAMANIO];
}Tablero;

typedef struct _fecha{
	int dia;
	int mes;
	int ano;
}Fecha;

typedef struct _alias{
	char palabra[LARGOU];  
}Alias; 

typedef struct _nombre{
	char palabra[LARGON];  
}Nombre; 

typedef struct _apellido{
	char palabra[LARGOA];  
}Apellido;

typedef struct _localidad{
	char palabra[LARGOL]; 	
}Localidad; 

typedef struct _digito{
	int numero[LARGOC];  
	int largodigito;  
}Digito; 

typedef struct _usuario{
	Alias alias;
	Digito cedula;	
	Nombre nombre;
	Apellido apellido;
	Localidad localidad;
	Fecha fecha_nac;
	char estado;
}Usuario;

typedef struct _hora{
	int horas;
	int minutos;
}Hora;

typedef struct _juego{
	Tablero tablero;
	Usuario usuario;
	int puntaje = 0;
	int sumatoria;
	Fecha fecha_partida; 
	Hora hora_partida;
	char estado ='S'; //C = COMENZADO, P= PERDIDO POR EL USUARIO, G = GANADO POR EL USUARIO, A= ABORTADA POR EL USUARIO, S = SIN COMENZAR
	bool replay = true;	
}Juego;



#endif
