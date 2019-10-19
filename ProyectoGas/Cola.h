#pragma once
#include "Placa.h"

class Cola
{
public:
	Cola();
	~Cola();
public:
	//Atributo para la clase Lista
	int Elementos = 0;
	Placa* Inicio = nullptr;
	Placa* Fin = nullptr;
	//Metodos y funciones para la clase Cola
	void Agregar_Cola(Placa Numero);
	Placa Retirar_Head();
};

