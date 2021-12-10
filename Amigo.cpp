/*
  Archivo: Amigo.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2020-09-01
  Licencia: GNU-GPL
*/

#include"Amigo.h"


Amigo::Amigo(string nombre, int edad, double estatura)
{
  this->nombre = nombre;
  this->edad = edad;
  this->estatura = estatura;
}


/* También se pueden asignar argumentos de la función a atributos de la clase con una lista de construcción, así:

Amigo::Amigo(string nombre, int edad, double estatura) : nombre(nombre), edad(edad), estatura(estatura)
{
  // No hay que hacer nada
}

*/


Amigo::~Amigo()
{
  // No hay que hacer nada
}


string Amigo::comoTeLlamas()
{
  return nombre;
}


int Amigo::cuantosAnhosTienes()
{
  return edad;
}


double Amigo::cuantoMides()
{
  return estatura;
}


bool Amigo::esMenorQue(int ciertaEdad)
{
  if(edad < ciertaEdad)
    return true;
  else
    return false;


//  return edad < ciertaEdad; 
}


bool Amigo::esMasAltoQue(double ciertaEstatura)
{
  return this->estatura > ciertaEstatura; 
}


