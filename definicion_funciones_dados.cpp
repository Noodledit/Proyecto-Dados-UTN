//#include <conio.h> // para usar _getch
//#include <ctime> // para usar el generador de numeros random
#include <iomanip>
#include <iostream>
//#include <limits> // Incluye este encabezado para numeric_limits
#include <string> // para usar strings :V
#include "declaracion_funciones_dados.h"
#include "rlutil.h" // funcion para colores
//#include <set>
//#include <algorithm>
//#include <vector>
#include <locale>


///=========================================================================================================================================================

string center(const string &text, int width)
{
    int len = text.length();
    int padding = width - len;
    int pad_left = padding / 2 + len;
    ostringstream oss;
    oss << setw(pad_left) << text << setw(width - pad_left) << "";
    return oss.str();
}

///=========================================================================================================================================================

void limpiarLinea()
{
    // Secuencia de escape ANSI para mover el cursor al inicio de la línea
    cout << "\r";
    // Secuencia de escape ANSI para limpiar la línea
    cout << "\x1B[2K";
}

///=========================================================================================================================================================

void limpieza()
{
    system("cls"); // Limpia la pantalla
}

///=========================================================================================================================================================

void fnReglas()
{

    rlutil::setColor(14);
    rlutil::setBackgroundColor(0);
    rlutil::locate(65, 13);
    cout << " 𝖔𝖇𝖏𝖊𝖙𝖎𝖛𝖔𝖘:                     ";
    rlutil::locate(65, 14);
    cout << " -𝖔𝖇𝖙𝖊𝖓𝖊𝖗 100 𝖕𝖚𝖓𝖙𝖔𝖘            ";
    rlutil::locate(65, 15);
    cout << " 𝖊𝖓 𝖑𝖆 𝖒𝖊𝖓𝖔𝖗 𝖈𝖆𝖓𝖙𝖎𝖉𝖆𝖉 𝖉𝖊 𝖗𝖔𝖓𝖉𝖆𝖘.";
    rlutil::locate(65, 16);
    cout<< " -𝖘𝖎 𝖘𝖆𝖈𝖆𝖘 𝖊𝖘𝖈𝖆𝖑𝖊𝖗𝖆𝖘            ";
    rlutil::locate(65, 17);
    cout << "  𝖌𝖆𝖓𝖆𝖘 𝖑𝖆 𝖕𝖆𝖗𝖙𝖎𝖉𝖆.             ";
    rlutil::locate(65, 18);
    cout << "                                ";
    rlutil::locate(65, 19);
    cout << "   𝖀𝖓 𝖙𝖚𝖗𝖓𝖔 𝖙𝖎𝖊𝖓𝖊 3 𝖎𝖓𝖙𝖊𝖓𝖙𝖔𝖘.   ";
    rlutil::locate(65, 20);
    cout << "    𝖘𝖊 𝖚𝖙𝖎𝖑𝖎𝖟𝖆𝖓 𝖘𝖊𝖎𝖘 𝖉𝖆𝖉𝖔𝖘.     ";
    rlutil::locate(65, 21);
    cout << "      𝕰 𝖑 𝖕𝖚𝖓𝖙𝖆𝖏𝖊 𝖋𝖎𝖓𝖆𝖑 𝖊𝖘      ";
    rlutil::locate(65, 22);
    cout << "    𝖊𝖑 𝖛𝖆𝖑𝖔𝖗 𝖒𝖆𝖝𝖎𝖒 𝖔 𝖔𝖇𝖙𝖊𝖓𝖎𝖉𝖔   ";
    rlutil::locate(65, 23);
    cout << "     𝖉𝖊 𝖑𝖔𝖘 3 𝕷𝖆𝖓𝖟𝖆𝖒𝖎𝖊𝖓𝖙𝖔𝖘.     ";

}

///=========================================================================================================================================================

void fnParticipantes(bool estado)
{

    int i;

    if (estado)
    {

        rlutil::setBackgroundColor(7);
        for (i=0; i<11; i++)
        {
            rlutil::locate(64, 13+i);
            cout << "                                  ";
        }

        rlutil::locate(69, 14);
        rlutil::setColor(0);
        rlutil::setBackgroundColor(10);
        cout <<" 𝓕𝓻𝓪𝓷𝓼𝓲𝓼";
        rlutil::setBackgroundColor(15);
        cout<<"𝓬𝓸❜𝓟𝓪𝓷𝓬𝓱";
        rlutil::setBackgroundColor(12);
        cout<<"𝓸❜𝓑𝓻𝓲𝓭 ";
        rlutil::locate(69, 16);
        rlutil::setColor(3);
        rlutil::setBackgroundColor(0);
        cout << " ❜𝓓𝓪𝓷𝓽𝓮❜";
        rlutil::setColor(15);
        cout << "𝓝𝓲𝓬𝓸𝓵𝓪𝓼 𝓑𝓵𝓪𝓷𝓬𝓸 ";
        rlutil::setColor(6);
        rlutil::locate(73, 18);
        rlutil::setBackgroundColor(1);
        cout <<" 𝓕𝓻𝓪𝓷";
        rlutil::setColor(1);
        rlutil::setBackgroundColor(6);
        cout <<"𝓬𝓸 𝓔𝓼";
        rlutil::setColor(6);
        rlutil::setBackgroundColor(1);
        cout <<"𝓹𝓪𝓭𝓪 ";
        rlutil::locate(68, 17);
        rlutil::setColor(14);
        rlutil::locate(73, 19);
        rlutil::setColor(15);
        cout << " (0 Descensos) ";

        rlutil::setColor(0);
        rlutil::setBackgroundColor(15);
        rlutil::locate(41, 19);
        cout << "3 - 𝖕𝖆𝖗𝖙𝖎𝖈𝖎𝖕𝖆𝖓𝖙𝖊𝖘.";
        rlutil::msleep(50);
        rlutil::setBackgroundColor(7);
        rlutil::locate(41, 19);
        cout << "3 - 𝕽𝖊𝖌𝖑𝖆𝖘.";
        rlutil::setBackgroundColor(7);
        cout << "        ";
        rlutil::setBackgroundColor(0);

    }
    else
    {
        fnReglas();


        rlutil::setBackgroundColor(15);
        rlutil::setColor(0);
        rlutil::locate(41, 19);
        cout << "3 - 𝕽𝖊𝖌𝖑𝖆𝖘.";
        rlutil::msleep(50);
        rlutil::locate(41, 19);
        rlutil::setBackgroundColor(7);
        rlutil::setColor(0);
        cout << "3 - 𝖕𝖆𝖗𝖙𝖎𝖈𝖎𝖕𝖆𝖓𝖙𝖊𝖘.";
        rlutil::setBackgroundColor(0);
    }


}
///=========================================================================================================================================================

void fnPuntuacion(bool estado)
{

    int i;

    if (estado)
    {
        rlutil::setBackgroundColor(12);
        for (i=0; i<3; i++)
        {
            rlutil::locate(65, 9+i);
            cout << "                                ";
        }
        rlutil::setColor(14);
        //rlutil::setBackgroundColor(4);
        rlutil::locate(67, 9);
        cout <<"𝕰𝖑 𝖕𝖚𝖓𝖙𝖆𝖏𝖊 𝖒 𝖆𝖝𝖎𝖒 𝖔 𝖊𝖘 𝖉𝖊: "<<maxPuntaje;
        rlutil::locate(69, 11);
        cout <<"𝕽𝖊𝖆𝖑𝖎𝖟𝖆𝖉𝖔 𝖕𝖔𝖗: "<<maxNombre;
    }
    else
    {
        rlutil::setBackgroundColor(7);
        rlutil::locate(65, 9);
        cout << "  𝕷𝖆 𝖛𝖎𝖉𝖆 𝖓𝖔 𝖊𝖘 𝖒𝖆𝖘...          ";
        rlutil::locate(65, 10);
        cout << "                                ";
        rlutil::locate(65, 11);
        cout << "      𝖖𝖚𝖊 𝖚𝖓 𝖏𝖚𝖊𝖌𝖔 𝖉𝖊 𝖆𝖟𝖆𝖗...   ";
    }




}

///=========================================================================================================================================================

void fnMarco()
{
    rlutil::setBackgroundColor(7);
    SetConsoleOutputCP(CP_UTF8);
    int Marco=6;
    rlutil::setColor(Marco);
    string pilares = "║                                                                                                ║\n";
    // Marco superior
    rlutil::locate(1, 1);
    cout << "╔════════════════════════════════════════════════════════════════════════════════════════════════╗";

    // Líneas repetidas
    fnImpresora(1, 2, pilares, 22);

    // Marco inferior
    rlutil::locate(1, 24);
    cout << "╚════════════════════════════════════════════════════════════════════════════════════════════════╝";

}


///=========================================================================================================================================================

void fnImpresora(int x, int y, const string& line, int count)
{
    for (int i = 0; i < count; ++i)
    {
        rlutil::locate(x, y + i);
        cout << line;
    }
}

///=========================================================================================================================================================



void fnMenu()
{
    limpieza(); // Limpia la pantalla
    rlutil::locate(41,8);
    rlutil::setBackgroundColor(4);
    fnMarco();
    int Marco=6,Menu = 14,Opciones=0,Puntaje=12;

    SetConsoleOutputCP(CP_UTF8);
    rlutil::locate(1, 8);
    cout << "╠══════════════════════════════════╦══════════════════════════╦══════════════════════════════════╣";

    // Imprimir líneas vacías
    string lineaMedia = "║                          ║";
    fnImpresora(36, 9, lineaMedia, 5);

    rlutil::locate(36, 12);
    cout << "║                          ╠══════════════════════════════════╣";

    // Imprimir más líneas vacías
    fnImpresora(36, 13, lineaMedia, 11);//columna 36 fila 13 imprime lineaMedia x cantidad de veces

    rlutil::locate(1, 24);
    cout << "╚══════════════════════════════════╩══════════════════════════╩══════════════════════════════════╝";

    rlutil::setColor(Menu);
    rlutil::locate(2, 2);
    cout << " ██████╗░░█████╗░██████╗░░█████╗░░██████╗  ██████╗░██╗██████╗░░█████╗░████████╗░█████╗░░██████╗";
    rlutil::locate(2, 3);
    cout << " ██╔══██╗██╔══██╗██╔══██╗██╔══██╗██╔════╝  ██╔══██╗██║██╔══██╗██╔══██╗╚══██╔══╝██╔══██╗██╔════╝";
    rlutil::locate(2, 4);
    cout << " ██║░░██║███████║██║░░██║██║░░██║╚█████╗░  ██████╔╝██║██████╔╝███████║░░░██║░░░███████║╚█████╗░";
    rlutil::locate(2, 5);
    cout << " ██║░░██║██╔══██║██║░░██║██║░░██║░╚═══██╗  ██╔═══╝░██║██╔══██╗██╔══██║░░░██║░░░██╔══██║░╚═══██╗";
    rlutil::locate(2, 6);
    cout << " ██████╔╝██║░░██║██████╔╝╚█████╔╝██████╔╝  ██║░░░░░██║██║░░██║██║░░██║░░░██║░░░██║░░██║██████╔╝";
    rlutil::locate(2, 7);
    cout << " ╚═════╝░╚═╝░░╚═╝╚═════╝░░╚════╝░╚═════╝░  ╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚═════╝░";
    rlutil::setColor(15);
    rlutil::setBackgroundColor(0);
    rlutil::locate(7, 10);
    cout << "          ⣩⣮⣨⣲⣰⡀⠄⢄⡈⢔⠵⣐⣈⡉";
    rlutil::locate(7, 11);
    cout << "        ⣪⣾⣿⣿⣿⣿⣿⣿⡮⡼⣽⣧⡅⡭⣿⣶";
    rlutil::locate(7, 12);
    cout << "      ⡰⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣫⣿⣷⢚⡺⣿";
    rlutil::locate(7, 13);
    cout << "    ⡘⠄⠻⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡧⡾⣿⡳⣝⣞";
    rlutil::locate(7, 14);
    cout << "    ⠌⠖⢦⢂⢿⣿⣟⣍⣁⣉⣉⣉⠛⢿⣿⢎⢟⡇⡆⡢";
    rlutil::locate(7, 15);
    cout << "   ⢃⡄⠲⡐⣠⣿⣿⢯⡊⠊⠝⡙⠟⢿⣆⣻⣗⢜⡷⡐⡑";
    rlutil::locate(7, 16);
    cout << "  ⠢⣩⣶⣷⣽⣿⣿⣿⣿⣮⣌⡃⠅⠀⡀⠑⣷⣿⣪⣷⢑⢌";
    rlutil::locate(7, 17);
    cout << "  ⠹⣽⣿⠘⣋⠻⣾⣻⣿⣿⣿⣿⣿⣷⣖⡅⣯⣿⠮⣿⢀⠆";
    rlutil::locate(7, 18);
    cout << "  ⠑⡽⡞⢵⣷⣷⣷⣿⣿⣿⣿⣿⣿⣈⣽⡮⣺⢿⢓⢟⠄⠑";
    rlutil::locate(7, 19);
    cout << " ⠀⠁⡃⠀⠀⠀⠉⠻⢿⣿⣿⣿⣿⣿⣿⣿⣽⣞⣇⢧⢱⠐⠁";
    rlutil::locate(7, 20);
    cout << "  ⡑⣥⣢⣤⣠⣦⣲⣶⣾⣿⣿⣿⣿⣿⣿⡷⣳⠏⠋   ";
    rlutil::locate(7, 21);
    cout << "  ⢸⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢯⠋⢁⢠⢔  ⠀";
    rlutil::locate(7, 22);
    cout << " ⠀⡑⠙⠝⢟⢿⢿⢿⡿⣿⡿⣿⣟⡿⡺⢁⢢⣳⠝⠀   ";
    rlutil::locate(39, 9);
    rlutil::setBackgroundColor(7);
    rlutil::setColor(15);
    cout<<"   ▄   ▄▄▄▄▄▄▄   ▄\n";
    rlutil::locate(39, 10);
    cout<<"  ▀▀▄▄█████████▄▄▀▀\n";
    rlutil::locate(39, 11);
    cout<<"     █";
    rlutil::setBackgroundColor(0);
    cout<<"█ ▀███▀ ██\n";
    rlutil::locate(39, 12);
    rlutil::setBackgroundColor(7);
    cout<<"     ▄███";
    rlutil::setBackgroundColor(0);
    cout<<"█▀█";
    rlutil::setBackgroundColor(7);
    cout<<"███▄\n";
    rlutil::locate(39, 13);
    cout<<"   ▀█  ██";
    rlutil::setBackgroundColor(0);
    cout<<"▀█▀";
    rlutil::setBackgroundColor(7);
    cout<<"██  █▀\n";


    rlutil::setColor(Opciones);
    rlutil::setBackgroundColor(8);

    rlutil::locate(41, 15);
    cout << "1 - 𝖀𝖓 𝕵𝖚𝖌𝖆𝖉𝖔𝖗.";

    rlutil::locate(41, 17);
    cout << "2 - 𝕯𝖔𝖘 𝕵𝖚𝖌𝖆𝖉𝖔𝖗𝖊𝖘.";

    rlutil::locate(41, 19);
    cout << "3 - 𝖕𝖆𝖗𝖙𝖎𝖈𝖎𝖕𝖆𝖓𝖙𝖊𝖘.";

    rlutil::locate(41, 21);
    cout << "4 - 𝖕𝖚𝖓𝖙𝖚𝖆𝖈𝖎𝖔𝖓.";
    rlutil::locate(41, 23);
    cout << "5 - 𝖒 𝖔𝖉𝖔 𝖘𝖎𝖒 𝖚𝖑𝖆𝖉𝖔.";

    fnPuntuacion(false);

    fnReglas();

}
///=========================================================================================================================================================

// Validacion del ingreso del nombre
void fnNombreValido(char eleccion)
{
    string nombre1, nombre2;
    int puntMax, canTurnos;
    limpieza(); // Limpia la pantalla
    rlutil::hidecursor();
    fnMarco();
    rlutil::setColor(0);
    rlutil::locate(4,1);
    cout << "𝕯𝖆𝖉𝖔𝖘 𝖕𝖎𝖗𝖆𝖙𝖆𝖘";

    if (eleccion != '5')
    {
        rlutil::msleep(500);
        fnSans(15, 5);//                                    entrada de sans
        rlutil::msleep(1000);
        rlutil::locate(41,7);
        cout<<"ingrese un nombre para el Humano 1";
        rlutil::locate(41,8);
        rlutil::msleep(400);
        cout << "Maximo 11 caracteres.";
        rlutil::msleep(1000);
        rlutil::locate(41,10);
        cout << "Si es que no quieres pasar un mal rato...";
        rlutil::locate(46,12);
        cout << "Jugador 1: ___________";
        rlutil::showcursor();
        rlutil::locate(57,12);
        cin >> nombre1;
        rlutil::hidecursor();

        if (nombre1.length() > 11)
        {

            nombre1 = fnErrorName(nombre1);
        }
    }
    else
    {
        nombre1 = "Simulador!";
    }


    if (eleccion == '2')
    {

        rlutil::msleep(1000);
        rlutil::locate(41,14);
        cout<< "ingrese un nombre para el Humano rival";
        rlutil::locate(41,15);
        rlutil::msleep(400);
        cout << "Maximo 11 caracteres.";
        rlutil::msleep(500);
        rlutil::locate(41,17);
        cout<< "No querras pasar un mal rato tu tambien... no?";
        rlutil::locate(46,19);
        cout << "Jugador 2: ___________";
        rlutil::locate(57,19);
        rlutil::showcursor();
        cin >> nombre2;
        rlutil::hidecursor();

        if (nombre2.length() > 11)
        {
            nombre2 = fnErrorName(nombre2);
        }
        rlutil::msleep(400);
        rlutil::locate(27,22);
        cout << "ingresar cantidad de Rondas: ";
        rlutil::showcursor();
        cin >> canTurnos;
        rlutil::hidecursor();
    }

    rlutil::setBackgroundColor(0);
    fnTurnos(eleccion, nombre1, nombre2, canTurnos);
}

///=========================================================================================================================================================

string fnErrorName(string errorName)
{
    limpieza(); // Limpia la pantalla
    do
    {
        fnMarco();
        rlutil::locate(4,1);
        cout << "𝕯𝖆𝖉𝖔𝖘 𝖕𝖎𝖗𝖆𝖙𝖆𝖘\n";
        rlutil::setColor(0);
        fnImpresora(13, 2,"▄▄▄▄",1);
        fnImpresora(10, 3,"▒▒▄██████     ▄▄▄███▄",1);
        fnImpresora(8, 4,"▒▒▄██▀░░▀██▄    ████████▄",1);
        fnImpresora(6, 5,"▒▒▒███░░░░░░██       █ ▀▀███▄▄",1);
        fnImpresora(5, 6,"▒▒▄██▌░░░░░░░██      ▐▌      ▀█▄",1);
        fnImpresora(4, 7,"▒▒▒███░░▐█░█▌░██      █▌        ▀▌",1);
        fnImpresora(4, 8,"▒▒████░▐█▌░▐█▌██     ██",1);
        fnImpresora(3, 9,"▒▒▐████░▐░░░░░▌██     █",1);
        fnImpresora(2, 10,"▒▒▒▒████░░░▄█░░░██    ▐█",1);
        fnImpresora(2, 11,"▒▒▒▒████░░░██░░██▌    █▌",1);
        fnImpresora(2, 12,"▒▒▒▒████▌░▐█░ ███    ▒█  El nombre",1);
        fnImpresora(2, 13,"▒▒▒▒▐████░░▌ ███    ▒██ ingresado",1);
        fnImpresora(2, 14,"▒▒▒▒▒████░  ███    ▒█▌ supera la",1);
        fnImpresora(2, 15,"▒▒▒██████▌ ████   ▒██    cantidad",1);
        fnImpresora(2, 16,"▒▐████████████  ▒███    maxima de",1);
        fnImpresora(2, 17,"▒█████████████▄▄████    Caracteres",1);
        fnImpresora(2, 18,"██████████████████",1);
        fnImpresora(2, 19,"█████████████████▀ Esta vez ingrese",1);
        fnImpresora(2, 20,"█████████████████ correctamente su",1);
        fnImpresora(2, 21,"████████████████  Nombre:__________",1);
        fnImpresora(2, 22,"████████████████",1);
        fnImpresora(2, 23,"███████████████",1);
        rlutil::locate(27, 21);
        rlutil::showcursor();
        cin >> errorName;
        rlutil::hidecursor();

    }
    while (errorName.length() > 11);

    limpieza();
    rlutil::setColor(12);
    fnSans(15,5);
    return errorName;
}

///=========================================================================================================================================================

void fnTurnos(char eleccion, string nombre1, string nombre2, int turnosIngresados)
{

    int i, j, puntParcial, ptsDados, jug1[2] {0,0}, jug2[2] {0,0}, cantTurnos = 0, tirada = 0,\
            Marco=6, Menu = 14, Opciones=15, Puntaje=0, vecDados[6], posicionY;
    string ganador, turno;
    bool blTurno = true, finalizando = false,escalera = false;


    while (!finalizando && !escalera)   // Mientras no se haya finalizado el juego
    {

        if (blTurno)
        {
            turno = nombre1;

            cantTurnos++;

        }
        else
        {
            turno = nombre2;

        }

        limpieza(); // Limpia la pantalla

        puntParcial = 0; // Puntaje parcial para el turno actual
        rlutil::setColor(Marco);
        fnMarco();
        posicionY = 7;

        fnImpresora(69, 1, "╦", 1);
        fnImpresora(69, 2, "║", 22);
        for (i=0; i<16; i+=4)
        {
            fnImpresora(69,6+i, "╠════════════════════════════╣", 1);//lineas
            if (i<12)
            {
                fnImpresora(74,8+i,"Esperando Tirada...", 1);
            }
        }
        fnImpresora(69, 24, "╩", 1);

        rlutil::locate(71,2);
        cout <<"Puntaje de "<<nombre1<<": "<<jug1[0];
        rlutil::locate(72,3);
        cout <<"Numero de intentos: "<< jug1[1] ;

        if (eleccion == '2')
        {
            rlutil::locate(71,4);
            cout <<"Puntaje de "<<nombre2<<": "<<jug2[0];
            rlutil::locate(72,5);
            cout <<"Numero de intentos: "<< jug2[1] ;
        }



        rlutil::locate(4,1);
        rlutil::setColor(14);
        cout << "𝕯𝖆𝖉𝖔𝖘 𝖕𝖎𝖗𝖆𝖙𝖆𝖘";
        rlutil::setColor(3);
        rlutil::msleep(300);
        rlutil::locate(5,3);
        cout << "Ronda numero " << cantTurnos;
        rlutil::locate(5,5);
        rlutil::msleep(1000);
        cout << " Es el turno de: " << turno;

        rlutil::msleep(1000);

        for (i = 0; i < 3; i++)   // Controla las 3 tiradas
        {
            rlutil::locate(5,7);
            cout << "Precione cualqueir tecla para la tirada nro: " << i+1;
            rlutil::anykey();
            ptsDados = fnDados(eleccion, escalera, vecDados); // Obtiene el puntaje de la tirada
            rlutil::locate(75,posicionY);
            cout << "La tirada fue de: ";
            rlutil::locate(74,1+posicionY);
            cout << "                   ";
            rlutil::locate(78,1+posicionY);
            for (j = 0; j<6; j++) //muestra los dados que salieron en la tirada
            {
                cout << vecDados [j]<<" ";
            }
            rlutil::locate(76,2+posicionY);
            posicionY += 4;

            if (escalera)
            {
                rlutil::setColor(10);
                cout << "Escalera!!!!!";
                rlutil::locate(71,21);
                cout << "El ganador es!: " << turno; // anuncia escalera y termina el juego
                finalizando = true;
                rlutil::locate(12,23);
                cout << "                                           ";
                rlutil::locate(12,23);
                cout << "Enter para volver al menu principal!";
                break;
            }

            cout << "sumados son: " << ptsDados;

            // Asigna el valor puntaje si es mayor que el actual o si es sexteto de 6
            if (puntParcial < ptsDados || ptsDados == 0)
            {
                puntParcial = ptsDados;
                tirada = i;
            }

        }

        // Actualiza los puntajes y cambia el turno
        if (blTurno && !escalera)
        {
            jug1[1] += tirada+1;
            jug1[0] += puntParcial; // Suma el puntaje parcial al total del jugador 1
            if (jug1[0]>100)
            {
                jug1[0]=100;
            }
            rlutil::locate(20,9);
            cout << "puntaje actual de: " << nombre1 << " es de: " << jug1[0];
            rlutil::locate(71,2);
            rlutil::setColor(5);
            cout <<"Puntaje de "<<nombre1<<": ";
            rlutil::setColor(9);
            cout << jug1[0];
        }
        else if (eleccion == '2' && !escalera)
        {
            jug2[1] += tirada+1;
            rlutil::locate(20,9);
            jug2[0] += puntParcial; // Suma el puntaje parcial al total del jugador 2
            if (jug2[0]>100)
            {
                jug2[0]=100;
            }
            cout << "puntaje actual de: " << nombre2 << " es de: " << jug2[0];
            rlutil::locate(71,4);
            rlutil::setColor(5);
            cout <<"Puntaje de "<<nombre2<<": ";
            rlutil::setColor(9);
            cout << jug2[0];
        }


        if (not escalera)
        {
            rlutil::msleep(500);
            rlutil::locate(20,23);
            cout << "puntaje de esta ronda fue: " << puntParcial; // muestra el puntaje final del turno
        }


        if (puntParcial > maxPuntaje)   // Verifica si se ha alcanzado un nuevo máximo de puntos
        {
            rlutil::locate(71,19);
            cout << "Alcanzo maxima puntuacion!";
            if (blTurno)
            {
                maxNombre = nombre1;
            }
            else
            {
                maxNombre = nombre2;
            }
            maxPuntaje = puntParcial;
        }


        // Verificación del puntaje para determinar el ganador
        if ((jug1[0] == 100 || jug2[0] == 100) || (eleccion == '2' && cantTurnos == turnosIngresados))
        {

            if (!blTurno || eleccion != '2')   // Si es el turno del jugador 2, permitimos terminar el juego
            {

                if (jug1[0] == jug2[0])
                {

                    rlutil::locate(80, 20);
                    rlutil::setColor(10);
                    cout << "Es Empate! ";
                    if (jug1[1]<jug2[1])
                    {
                        rlutil::locate(9, 23);
                        cout << "El ganador por cantidad de intentos es: "<< nombre1;

                    }
                    else
                    {
                        if (jug2[1]<jug1[1])
                        {
                            rlutil::locate(9, 23);
                            cout << "El ganador por cantidad de intentos es: "<< nombre2;
                        }
                        else
                        {
                            rlutil::locate(78, 21);
                            cout <<"no hay ganador";
                        }

                    }
                }
                else
                {
                    if (jug1[0] > jug2[0]&& eleccion == '2' && !escalera)
                    {
                        rlutil::locate(71, 21);
                        cout << "El ganador es: "<< nombre1;
                    }
                    else
                    {
                        if(jug1[0] < jug2[0]&& !escalera)
                        {
                            rlutil::locate(71, 21);
                            cout << "El ganador es: "<< nombre2;
                        }
                    }
                }

                if (eleccion == '1')
                {
                    rlutil::setColor(10);
                    rlutil::locate(75,20);
                    cout << "partida finalizada";
                    rlutil::locate(73,21);
                    cout << "cantidad de rondas: "<<cantTurnos+1;
                }

                finalizando = true;
            }
        }


        if (eleccion == '2')  // Alterna el turno entre los jugadores
        {
            blTurno = !blTurno;
        }



        rlutil::locate(75,23);
        rlutil::anykey("tiradas finalizadas");
        limpieza(); // Limpia la pantalla
    rlutil::setBackgroundColor(0);

    }
    fnMenu();
}

///=========================================================================================================================================================

int fnDados(char eleccion, bool &blEscalera, int VecTirada[6])  //esta funcion realiza la asignacion delos valores a los 6 dados
{
    int t, i, valor, puntos = 0, anterior = 0, ubiX = 6;
    bool blSexteto = false,vecEscalera[6] = {};
    blEscalera = true; // se marca escalera en true para hacer la debolucion de ser nesesario
    rlutil::locate(6,9);
    cout << "             ";
    for (t = 0; t < 6; t++)
    {
        if (eleccion == '5')
        {
            rlutil::showcursor();//muestra el cursor
            rlutil::locate(6,10);

            cout << "Ingrese el valor para el dado '" << t + 1 <<"':  ";
            rlutil::showcursor();
            rlutil::locate(41,10);
            cin >> VecTirada[t];
            rlutil::hidecursor();
            puntos += VecTirada[t];
            if (puntos>100)
            {
                puntos = 100;
            }
            // cout << puntos << "puntos";
        }
        else
        {

            rlutil::locate(ubiX,9);
            VecTirada[t] = rand() % 6 + 1;
            rlutil::msleep(300);
            cout << VecTirada[t] << " ";
            ubiX += 2;
            puntos += VecTirada[t];
            if (puntos>100)
            {
                puntos = 100;
            }
        }
    }
    rlutil::locate(6,10);

    cout << "                                     ";





    // Verificar si es un sexteto

    for (t=0; t<6; t++)
    {
        if (t == 0 || VecTirada [t] ==  anterior)
        {
            anterior = VecTirada[t];
            blSexteto = true;
        }
        else
        {
            blSexteto = false;
            break;

        }
    }

    if (blSexteto)
    {
        if (VecTirada[0] != 6)
        {
            rlutil::locate(76, 21);
            cout << "¡Es Sexteto!";
            fnSans(101, 10);
            puntos = VecTirada[0] * 10;
            rlutil::locate(16, 23);
            rlutil::anykey("precione cualquier tecla para continuar");
            rlutil::locate(76, 21);
            cout << "            ";
        }
        else
        {
            rlutil::locate(76, 21);
            cout << "¡Es Sexteto!";
            rlutil::msleep(700);
            cout << ".";
            rlutil::msleep(700);
            cout << ".";
            rlutil::msleep(700);
            cout << ".";
            rlutil::msleep(1300);
            rlutil::locate(78, 22);
            cout << "pero de 6...";
            fnSans(101, 10);
            rlutil::msleep(1000);
            rlutil::locate(103, 6);
            rlutil::setColor(0);
            rlutil::setBackgroundColor(15);
            cout << "Eso fue...";
            rlutil::locate(103, 7);
            cout << "desafortunado...";
            rlutil::msleep(2000);
            rlutil::setColor(11);
            rlutil::setBackgroundColor(0);
            rlutil::locate(76, 21);
            cout << "               ";
            rlutil::locate(78, 22);
            cout << "            ";
            rlutil::locate(103, 6);
            cout << "            ";
            rlutil::locate(103,7);
            cout << "                ";

            puntos = 0;
            blSexteto = false;
        }

    }




    for (i=0; i<6; ++i)
    {
        valor = VecTirada[i];
        if (vecEscalera[valor-1])
        {
            blEscalera = false; // Establece a false si encuentra un duplicado
            break; // Sale del bucle si encuentra un duplicado
        }
        vecEscalera[valor-1] = true; // Marca el valor como visto
    }
// blEscalera será true si todos los valores son distintos y false si hay duplicados



    return puntos;
}

///=========================================================================================================================================================

void fnSans(int x, int y)
{
    int i,s;



    //rlutil::setBackgroundColor(0);
    for (s=0; s<6; s++)
    {
        switch (s)
        {
        case 0:
            rlutil::msleep(100);
            rlutil::setBackgroundColor(0);
            fnImpresora(x+7, y+ 1,"⠀⠀⠀⠀ ",13);
            break;
        case 1:
            rlutil::msleep(100);
            rlutil::setBackgroundColor(0);
            fnImpresora(x+5, y+ 1,"⠀⠀⠀⠀⠀⠀    ",13);
            break;
        case 2:

            rlutil::msleep(100);
            rlutil::setBackgroundColor(0);
            fnImpresora(x, y+ 1,"⠀⠀⠀⠀⠀⠀        ⠀⠀⠀⠀⠀ ",13);
            break;
        case 3:
            rlutil::msleep(500);
            rlutil::setColor(8);
            fnImpresora(x, y+ 1,"⠀⠀⠀⠀⠀⠀   ⣶",1);
            fnImpresora(x, y+ 2,"⠀⠀⠀⠀⠀   ⣿⣿⣿⣿",1);
            fnImpresora(x, y+ 3,"⠀⠀⠀⠀⠀   ⠀⣿⢿⠁",1);
            fnImpresora(x, y+ 4,"⠀⠀⠀⠀⠀   ⣴⣏⣈⣷",1);
            fnImpresora(x, y+ 5,"⠀⠀⠀⠀    ⡂⠦⠶⠰",1);
            fnImpresora(x, y+ 6,"⠀⠀⠀   ⠦⣉⠉⣉⣉⠉⠉⣠",1);
            fnImpresora(x, y+ 7,"⠀     ⠤⠀⡁⣬⣍⢐⠁",1);
            fnImpresora(x, y+ 8,"⠀      ⠰⡀⣿⣿⢐⢂",1);
            fnImpresora(x, y+ 9,"⠀⠀     ⠤⠴⠍⠉⠠⠇",1);//⣡⣶⣷⡆⢰
            fnImpresora(x, y+10,"⠀⠀ ⠀   ⠀⠀⠀⠀⠀⢰",1);//▄█▀▌▀▐
            fnImpresora(x, y+11,"⠀⠀ ⠀    ⠀  ⠀⠸",1);
            fnImpresora(x, y+12,"⠀⠀   ⠘⠤      ⠷",1);
            fnImpresora(x, y+13,"⠀⠀ ⣞⣿⣷  ⠀⠀    ⣴⣿⣷",1);//■
            break;
        case 4:
            rlutil::msleep(100);
            rlutil::setColor(7);
            fnImpresora(x, y+ 1,"⠀⠀⠀⠀⠀⠀   ⣶⣶⣶",1);
            fnImpresora(x, y+ 2,"⠀⠀⠀⠀⠀  ⣿⣿⣿⣿⣿⣿⣿",1);
            fnImpresora(x, y+ 3,"⠀⠀⠀⠀⠀ ⠁ ⠀⣿⢿⠁ ⠀⠙",1);
            fnImpresora(x, y+ 4,"⠀⠀⠀⠀⠀  ⢦⣴⣏⣈⣷⣤⠺",1);
            fnImpresora(x, y+ 5,"⠀⠀⠀⠀   ⣅⡂⠦⠶⠰⢐⣴",1);
            fnImpresora(x, y+ 6,"⠀⠀⠀  ⠑⠦⣉⠉⣉⣉⠉⠉⣠⠜⠁",1);
            fnImpresora(x, y+ 7,"⠀   ⢸⠤⠤⠀⡁⣬⣍⢐⠁⠀ ⡜",1);
            fnImpresora(x, y+ 8,"⠀  ⠀⠈⠁⠀⠰⡀⣿⣿⢐⢂⡜⠉⢐",1);
            fnImpresora(x, y+ 9,"⠀    ⡄⠤⠤⠴⠍⠉⠠⠇⠤⠤",1);//⣡⣶⣷⡆⢰
            fnImpresora(x, y+10,"⠀⠀ ⠀ ⡟⡀⠀⠀⠀⠀⠀⢰⡆",1);//▄█▀▌▀▐
            fnImpresora(x, y+11,"⠀⠀ ⠀ ⡇⢸⠁⠀⡜⢡⠀⠸⡇",1);
            fnImpresora(x, y+12,"⠀⠀   ⠘⠤⠤⠤⠃⠘⠤⠤⠷⠄",1);
            fnImpresora(x, y+13,"⠀⠀ ⣞⣿⣷  ⠀⠀   ⡛⣴⣿⣷",1);//■
            break;
        case 5:
            rlutil::msleep(100);
            rlutil::setColor(15);
            fnImpresora(x, y+ 1,"⠀⠀⠀⠀⠀⠀⢀⣤⣴⣶⣶⣶⣤⣄⠀⠀⠀⠀⠀ ",1);
            fnImpresora(x, y+ 2,"⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀ ",1);
            fnImpresora(x, y+ 3,"⠀⠀⠀⠀⠀⠏⠁ ⠀⣿⢿⠁ ⠀⠙⠇⠀⠀⠀ ",1);
            fnImpresora(x, y+ 4,"⠀⠀⠀⠀⠀⢸⡷⢦⣴⣏⣈⣷⣤⠺⣯⠀⠀⠀⠀ ",1);
            fnImpresora(x, y+ 5,"⠀⠀⠀⠀⣠⡜⢶⣅⡂⠦⠶⠰⢐⣴⠏⣠⠦⠀⠀ ",1);
            fnImpresora(x, y+ 6,"⠀⠀⠀⡜⠉⠑⠦⣉⠉⣉⣉⠉⠉⣠⠜⠁⠀⢣⠀ ",1);
            fnImpresora(x, y+ 7,"⠀⢀⡜⠀⢸⠤⠤⠀⡁⣬⣍⢐⠁⠀ ⡜⠀⠀⢣ ",1);
            fnImpresora(x, y+ 8,"⠀⠺⡀⠀⠈⠁⠀⠰⡀⣿⣿⢐⢂⡜⠉⢐⠀ ⡜ ",1);
            fnImpresora(x, y+ 9,"⠀⠀⠈⠂⢠⡄⠤⠤⠴⠍⠉⠠⠇⠤⠤⡼⠠⡜ ",1);//⣡⣶⣷⡆⢰
            fnImpresora(x, y+10,"⠀⠀ ⠀⢠⡟⡀⠀⠀⠀⠀⠀⢰⡆⠀⡇⠀⠀⠀ ",1);//▄█▀▌▀▐
            fnImpresora(x, y+11,"⠀⠀ ⠀⡜⡇⢸⠁⠀⡜⢡⠀⠸⡇ ⢡⠀⠀⠀ ",1);
            fnImpresora(x, y+12,"⠀⠀  ⠷⠘⠤⠤⠤⠃⠘⠤⠤⠷⠄⠚⠀⠀⠀ ",1);
            fnImpresora(x, y+13,"⠀⠀ ⣞⣿⣷⡜⡂⠀⠀ ⢀⣞⡛⣴⣿⣷⡆⠀ ",1);//■
            fnImpresora(x+7, y+ 3,"⠠",1);
            rlutil::setColor(9);
            fnImpresora(x+12, y+ 3,"❂",1);
            rlutil::msleep(50);
            fnImpresora(x+12, y+ 3,"⠠",1);
            break;

        default:
            break;
        }


    }
}

///=========================================================================================================================================================

void calavera()
{
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡿⠿⠉⠉⠉⠉⠙⢿⣿⣿⣿⣿⠏⠉⠉⠉⠉⠹⠿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⢠⣤⡀⠀⢸⣿⣿⣿⣿⠀⠀⢠⡄⠀⠀⠀⢹⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⢹⣦⣀⠀⠀⠉⠀⠀⣼⣿⠉⢹⣿⡄⠀⠈⠁⠀⢀⣀⣤⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠿⡏⠙⣠⣾⣿⡆⠀⠀⢸⣿⣦⡘⠙⠿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡟⠛⠀⡉⠛⢻⢿⣿⣷⣶⣶⣾⣿⣿⡿⠛⠃⠈⠛⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣦⡁⠸⢦⡄⢠⣤⠀⣤⣤⢠⣤⠀⠇⣠⣾⣿⠟⠀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⢠⣴⣶⣦⡀⠀⠻⣿⣷⣶⣤⡅⠘⠛⠀⠛⠛⠈⢩⣤⣶⣿⡿⠃⢠⣸⣿⠛⠃⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠄⠉⠉⠿⠿⣶⣄⠀⠉⠉⠹⠿⠛⠛⠛⠛⠛⠻⠻⠉⠉⠁⠀⣀⠿⠟⠁⠀⠈⣄⡀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠈⠛⠷⣤⣄⠀⠐⢦⣤⣤⣤⡶⠀⠀⠀⠀⡴⠿⠏⠃⠀⠠⠄⠀⠈⠻⠆⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⡐⠉⠀⠀⠀⢸⡇⠀⠀⠀⠀⡏⠉⠙⠂⠀⠙⠛⠛⠀⠲⡞⠃⠈⠁⠀⠀⠀⠀⡇⠀⠀⠀⠀⠸⣦⡀⠀⠀⠀\n";
    cout << "⠀⣔⠃⠀⠀⠀⠀⠀⣇⠀⣀⣀⡀⡧⠤⢼⠀⢸⣿⣿⣦⠀⣤⠦⠆⠀⠀⠀⣀⢠⠾⡇⠀⠀⠀⠀⠀⠈⣧⠀ \n";
    cout << "⢰⣿⠀⠀⠀⠀⠀⠀⡟⠃⠈⠁⠀⢠⡆⢠⡄⢸⣿⣿⣿⠀⣧⣠⣄⢀⡐⠂⠋⠈⠀⣧⡀⠀⠀⠀⠀⠀⢩⠀\n";
    cout << "⠈⢿⣄⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⢸⡏⢀⡁⢸⣿⣿⣿⠀⣇⣀⠁⡘⠇⠀⠀⠀⠀⢈⡁⠀⠀⠀⠀⠀⣸⠀⠀\n";
    cout << "⠀⠀⠙⢷⣤⡀⠀⡇⠀⠀⠀⠀⠀⠀⢰⡏⡇⠸⠿⠿⠿⠀⡏⢸⡄⠃⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⣠⡞⠋⠀⠀\n";
    cout << "⠀⠀⠀⠀⠙⠇⢀⣧⣴⣄⠀⠀⠀⠀⢸⣷⣷⣶⡆⠦⠠⠀⠡⣬⣀⣀⡀⠀⢀⣀⣴⡿⠃⢴⡶⠄⠉⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠉⠙⠙⠂⠂⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠘⠃⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⡐⠀⠀⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⢈⡇⠀⣿⡇⠀⠀⠀⠀⠀⠀⢠⠑⡄⠀⠀⠀⠀⣿⣇⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⡄⠁⢠⣿⠃⠀⠀⠀⠀⠀⠀⣸⠀⢣⠀⠀⠀⠀⣿⣿⡇⠀⠀⠀⢱⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⡇⠀⢸⣿⠀⠀⠀⠀⠀⠀⢸⡉⠀⢸⠀⠀⠀⠀⠉⣿⡇⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠧⠠⠼⠟⢀⣀⣀⣀⣀⡀⠸⠇⠀⠸⠀⣀⣀⣀⣀⣿⣧⠀⠠⠤⠼⠇⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠁⠀⠀⠀⠈⠉⠉⢉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠀⢀⣼⣿⣿⣧⣄⠻⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣼⣿⣿⣿⠟⠃⣠⣴⣿⣷⣤⡄⠀⠀⠀⠀⠀\n";
    cout << "⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⠧⠀⣥⡀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣥⣤⣤⡀⣶⠿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀\n";
}
