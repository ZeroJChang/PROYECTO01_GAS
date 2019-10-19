#pragma once
#include "Nodo.h"
ref class Pila
{
private:
	//ATM VIDEOS
	//CAMBIAR CLASS POR REF CLASS <nombre>
	Nodo^ Primero;


	//TODAS LAS VALIDACIONES 
public:
	bool EstaVacia();
	int Longitud();
	int MostrarEstado(int posicion);
	void Push(int valor);
	int Pop();
	void OrdenInicial();
	int Mayor();
	int Buscar(int valor);
	int Digito(int posicion);
};

