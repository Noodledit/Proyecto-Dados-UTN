#ifndef DECLARACION_FUNCIONES_DADOS_H_INCLUDED
#define DECLARACION_FUNCIONES_DADOS_H_INCLUDED
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

extern string maxNombre;
extern int maxPuntaje;

void limpiarLinea();

void fnPausaYlimpieza();

void fnReglas();

void fnParticipantes(bool estado);

void fnPuntuacion(bool estado);

void fnMenu();

void fnNombreValido(char eleccion) ;

string fnErrorName(string errorName) ;

void fnTurnos(char eleccion, string nombre1,string nombre2 = "",int canTurnos = 0);

int fnDados(char eleccion, bool &blEscalera, int VecTirada[6]);

void calavera();

void fnImpresora(int x, int y, const string& line, int count);

void fnMarco();

void fnSans(int x, int y);

#endif // DECLARACION_FUNCIONES_DADOS_H_INCLUDED


