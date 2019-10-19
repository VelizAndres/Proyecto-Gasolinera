#pragma once
#include "Placa.h"

class Pila
{
public:
	//Atributo para la clase Pila
	Placa * Head = nullptr;
	int Elementos = 0;
	Pila();
	~Pila();
public:
	//Metodos y funciones para la clase pila
	void Apilar(Placa Numero);
	Placa  Desapilar();
};

