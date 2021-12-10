/*
  Archivo: Amigo.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2020-12-17
  Licencia: GNU-GPL
*/

/**
  CLASE: Amigo
  INTENCIÓN: quiero guardar el nombre, edad y estatura de un amigo para luego hacerle las preguntas:
  - el nombre
  - la edad
  - la estatura 
  - si es menor que una cierta edad
  - si supera una cierta estatura
  RELACIONES: ninguna
*/

#ifndef AMIGO_H
#define AMIGO_H

#include<string>
using namespace std;

class Amigo
{
  private:
  string nombre;
  int edad;
  double estatura;

  public:
  /**
  Constructor. Da valores iniciales a los atributos internos
  */
  Amigo(string, int , double );
  /**
  Destructor. No hace nada
  */
  virtual ~Amigo();
  /**
  Pregunta y retorna su nombre.
  */
  virtual string comoTeLlamas();
  /**
  Pregunta y retorna su edad.
  */
  virtual int cuantosAnhosTienes();
  /**
  Pregunta y retorna su estatura.
  */
  virtual double cuantoMides();
  /**
  Averigua si es mayor que una edad dada. Por defecto, 18 años.
  */
  virtual bool esMenorQue(int edad=18);
  /**
  Averigua si es más alto que una cierta altura.
  */
  virtual bool esMasAltoQue(double ciertaEstatura);
};

#else
class Amigo; // Declaración adelantada
#endif
