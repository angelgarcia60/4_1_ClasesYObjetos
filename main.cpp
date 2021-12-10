/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2021-02-12
  Licencia: GNU-GPL
*/

/**
  Utilidad para la asignatura: Crear nuevos tipos de datos (clases) y datos (objetos)

  HISTORIA: Tengo 3 amigos, el mejor, el de siempre y el último que hice.
  Quiero saber si mi mejor amigo es más alto que el de siempre.
  Y quiero saber si mi último amigo es mayor de edad.
*/

#include "Amigo.h"
#include "Amigo.h"
#include <iostream>
using namespace std;

int main()
{
  Amigo miMejorAmigo("Santana", 23, 1.78);
  Amigo miAmigoDeSiempre("Diana", 31, 1.95);

  string nombre;
  int edad;
  double estatura;
  string auxiliar;

  cout << "¿Cómo se llama el último amigo que hiciste? ";
  getline(cin, nombre);

  cout << "¿Cuál es su edad? ";
  getline(cin, auxiliar);
  // Verificar el dato recibido tenga solo digitos
  edad = stoi(auxiliar);
  // Verificar el dato recibido entre 0 y 130
  
  cout << "¿Cuanto mide de estatura en metros? ";
  getline(cin, auxiliar);
  // Verificar el dato recibido tenga digitos +-.eE
  estatura = stod(auxiliar);
  // Verificar el dato recibido este 0 y 3 metros

  Amigo miUltimoAmigo(nombre, edad, estatura);    

  if(miMejorAmigo.esMasAltoQue(miAmigoDeSiempre.cuantoMides()))
    cout << miMejorAmigo.comoTeLlamas() << " es mas alto que " << miAmigoDeSiempre.comoTeLlamas() << endl;
  else
    cout << miAmigoDeSiempre.comoTeLlamas() << " es mas alto que " << miMejorAmigo.comoTeLlamas() << endl;

  if(miUltimoAmigo.esMenorQue(18))  // años
    cout << miUltimoAmigo.comoTeLlamas() << " es menor de edad" << endl;
  else
    cout << miUltimoAmigo.comoTeLlamas() << " es mayor de edad" << endl;
  
  return 0;
}
