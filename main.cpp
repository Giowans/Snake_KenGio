#include <iostream>
#include <fstream>
#include "snakegame.h"
using namespace std;

int main(int argc, char *argv[])
{
    SnakeGame snakeGame;

    return 0;
}
/*
#include <iostream>
#include <fstream>//permite manejar flujos de archivos
#include "personas.h"

using namespace std;

int main(int argc, char *argv[])
{
    ofstream outputFile("personas.txt", ios::app);
    ifstream inputFile("personas.txt", ios::app);
    Personas personita;
    personita.setNombre("Giovanni uwu");
    personita.setEdad(20);
    personita.setEstatura(1.78);
    if (!outputFile.is_open()) 
    {
        cout << "No se pudo abrir el archivo de escritura"<<endl;
    }
    else
    {
        outputFile<<personita<<endl;
    }
    outputFile.close();
    if (!inputFile.is_open()) 
    {
        cout<<"No se pudo abrir el archivo de lectura..."<<endl;
    }
    else
    {
        Personas p;
        while(inputFile >>p)
        {
           cout << p <<endl; 
        }
        
    }
    inputFile.close();
    return 0;
}
*/