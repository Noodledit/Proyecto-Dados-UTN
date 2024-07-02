#include <iostream>
#include <string>
//#include <time.h>
#include "rlutil.h"
//#include <limits> // Incluye este encabezado para numeric_limits
#include "declaracion_funciones_dados.h"
#include <locale>
//#include <conio.h>

string maxNombre = "No Name";
int maxPuntaje = 0,salir=1;

using namespace std;

int main(){
    locale::global(std::locale(""));//para usar acentos
    srand(time(NULL));
    char opcion;
    int Marco=6,Menu = 14,Opciones=15,Puntaje=0; // Asignacion de colores general
    bool estado=false, blPulsado4=false;
        fnMenu();
       //fnInterfas(Marco, Menu, Opciones);

    do
    {

        rlutil::hidecursor();


        if(kbhit()) { // Verifica si se ha presionado una tecla
            opcion = getch(); // Obtiene la tecla presionada sin necesidad de presionar Enter
            rlutil::locate(49, 23); // Mueve el cursor a la columna 49, fila 23
           // rlutil::setBackgroundColor(4);

            int canTurnos=0,i;
            string nombre1, nombre2;

            switch (opcion)
            {
                case '1'://1 jugador
                                rlutil::setBackgroundColor(15);

                            rlutil::locate(41, 15);
                            rlutil::setColor(0);
                        cout << "1 - 𝖀𝖓 𝕵𝖚𝖌𝖆𝖉𝖔𝖗.";
                        rlutil::msleep(300);
                    rlutil::setBackgroundColor(0);
                    rlutil::setColor(Menu);
                    fnNombreValido(opcion);
                    rlutil::anykey(); // Agrega una pausa esperando cualquier tecla
                    break;

                case '2'://2 jugadores
                                rlutil::setBackgroundColor(15);
                            rlutil::locate(41, 17);
                            rlutil::setColor(0);
                        cout << "2 - 𝕯𝖔𝖘 𝕵𝖚𝖌𝖆𝖉𝖔𝖗𝖊𝖘.";
                        rlutil::msleep(300);
                    rlutil::setBackgroundColor(0);
                    fnNombreValido(opcion);
                    rlutil::anykey(); // Agrega una pausa esperando cualquier tecla
                    break;

                case '3'://Participantes
                    //rlutil::anykey(); // Agrega una pausa esperando cualquier tecla

                    estado = !estado;
                    fnParticipantes(estado);
                    break;

                case '4'://Puntaje
                            rlutil::locate(41, 21);
                            rlutil::setBackgroundColor(15);
                            rlutil::setColor(0);
                        cout << "4 - 𝖕𝖚𝖓𝖙𝖚𝖆𝖈𝖎𝖔𝖓.";
                                rlutil::msleep(50);
                            rlutil::locate(41, 21);
                            rlutil::setBackgroundColor(7);
                        cout << "4 - 𝖕𝖚𝖓𝖙𝖚𝖆𝖈𝖎𝖔𝖓.";
                    blPulsado4 = !blPulsado4;
                    fnPuntuacion(blPulsado4);
                    break;

                case '5'://Simulacion
                            rlutil::setBackgroundColor(15);
                            rlutil::setColor(0);
                        rlutil::locate(41, 23);
                        cout << "5 - 𝖒 𝖔𝖉𝖔 𝖘𝖎𝖒 𝖚𝖑𝖆𝖉𝖔.";
                        rlutil::msleep(300);
                        rlutil::setBackgroundColor(0);
                    fnNombreValido(opcion);
                    rlutil::anykey(); // Agrega una pausa esperando cualquier tecla
                    break;

                case '0':
                        salir = 0;
                    break;
                default:
                    break;
            }
        }
    } while (salir != 0);

    return 0;
}
