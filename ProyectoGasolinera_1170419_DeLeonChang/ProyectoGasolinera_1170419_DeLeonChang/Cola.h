#pragma once
#include "Nodo.h"
ref class Cola
{

	//CAMBIAR CLASS POR REF CLASS <nombre>
private:
	Nodo^ Primero;
	Nodo^ Ultimo;
public:
	bool EstaVacia();
	int Longitud();
	int MostrarEstado(int posicion);
	void Agregar(int valor);
	int Extraer();
	void OrdenInicial();
	int Mayor();
	int Buscar(int valor);
	int Digito(int posicion);
};

