#include "pch.h"
#include"Pila.h"
#include"Cola.h"


//AYUDA ADICIONAL

//WEB
//STACK OVERFLOW
//DISTINTOS REPOSITORIOS GITHUB
//WIKILIBROS


//TUTORIALES DE YOUTUBE
//TUTORIALES DE PROGRAMACION EXPLICADA 
//PROGRAMACION ATS
//COMO SE HACE
//YOUTICS

//CATEDRATICO KINAL
//PEDRO ARMAS



using namespace System;
//¨PARA QUE SIRVA STRING 
using namespace::System::IO;

int main(array<System::String^>^ args)
{
	//INSTANCIAR LAS CLASES
	Pila Pila1;
	Cola Cola1;
	//NUMERO INGREsADO
	double Numero;
	int Precio;
	//se EXTRAERAN 1x1
	int d1, d2, d3, d4;
	int PilaM, ColaM;

	//PARA CADA UNO DE LOS NUMEROS
	int n1, n2, n3, n4;
	String^ Extraido;
	// HISTORIAL
	String^ Pasos = "";

	//CREA LA PILA Y cola por primera vez
	Pila1.OrdenInicial();
	Cola1.OrdenInicial();

	//ASI SE REPITE :D
	bool Continuar = true;
	while (Continuar != false)
	{
		int Opcion;
		try
		{
			Console::WriteLine("BIENVENIDO A PETRO PLUS S,A.");
			Console::WriteLine("LE PONDRA PRECIO A LA GASOLINA SUPER");
			Console::WriteLine("Elija una opcion");
			Console::WriteLine("1. Ingresar otro precio");
			Console::WriteLine("2. BORRAR PRECIOS");
			Console::WriteLine("3. HISTORIAL/SALIR");
			Opcion = int::Parse(Console::ReadLine());
		}//SIN LOS PUNTOS NO SIRVE al:C
		catch (...)
		{
			Console::Clear();
			Console::WriteLine("No elegiste nada :C, try again");
			Console::WriteLine("Elija una opcion");
			Console::WriteLine("1. Ingresar otro precio");
			Console::WriteLine("2. BORRAR PRECIOS");
			Console::WriteLine("3. HISTORIAL/SALIR");
			Opcion = int::Parse(Console::ReadLine());
		}


		switch (Opcion)
		{
		case 1:
			try
			{
				Console::WriteLine("Ingrese el precio. FORMA [XX.XX]");
				Numero = double::Parse(Console::ReadLine());
				Precio = Numero * 100;
			}
			catch (...)
			{
				Console::WriteLine("Ingreso un dato erroneo, SE CERRARA D:");
			}

			//EXTRAEMOS CADA DIGITO como el problema de los billetes y monedas(intro a la progra)
			d4 = Precio % 10;
			Precio = Precio / 10;
			d3 = Precio % 10;
			Precio = Precio / 10;
			d2 = Precio % 10;
			Precio = Precio / 10;
			d1 = Precio % 10;

			//Verifica si existe el digito en la pila o en la cola y lo extrae
			//si no hay busca el mayor:vvvvvvvvvvvv 
			n1 = Pila1.Buscar(d1);
			Pasos +=  "\n Primer Digito ";
			if (n1 != -1)
			{
				d1 = Pila1.Digito(n1);
				Pasos += " Numero extraido: " + d1.ToString() + "";
			}
			else if ((n1 = Cola1.Buscar(d1)) != -1)
			{
				d1 = Cola1.Digito(n1);
				Pasos += " Numero extraido: " + d1.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d1 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d1.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d1 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d1.ToString() + "";
				}
				else
				{
					d1 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d1.ToString() + "";
				}
			}

			n2 = Pila1.Buscar(d2);
			Pasos += "Segundo Digito";
			if (n2 != -1)
			{
				d2 = Pila1.Digito(n2);
				Pasos += " Numero extraido: " + d2.ToString() + "";
			}
			else if ((n2 = Cola1.Buscar(d2)) != -1)
			{
				d2 = Cola1.Digito(n2);

				Pasos += " Numero extraido: " + d2.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d2 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d2.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d2 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d2.ToString() + "";
				}
				else
				{
					d2 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d2.ToString() + "";
				}
			}

			n3 = Pila1.Buscar(d3);
			Pasos += "Tercer Digito";
			if (n3 != -1)
			{
				d3 = Pila1.Digito(n3);
				Pasos += " Numero extraido: " + d3.ToString() + "";
			}
			else if ((n3 = Cola1.Buscar(d3)) != -1)
			{
				d3 = Cola1.Digito(n3);
				Pasos += " Numero extraido: " + d3.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d3 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d3.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d3 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d3.ToString() + "";
				}
				else
				{
					d3 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d3.ToString() + "";
				}
			}

			n4 = Pila1.Buscar(d4);
			Pasos += "Cuarto Digito";
			if (n4 != -1)
			{
				d4 = Pila1.Digito(n4);
				Pasos += " Numero extraido: " + d4.ToString() + "";
			}
			else if ((n4 = Cola1.Buscar(d4)) != -1)
			{
				d4 = Cola1.Digito(n4);
				Pasos += " Numero extraido: " + d4.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d4 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d4.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d4 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d4.ToString() + "";
				}
				else
				{
					d4 = Pila1.Digito(Pila1.Buscar(PilaM));

					Pasos += " Numero extraido: " + d4.ToString() + "";

				}
			}

			
			
			//MOSTRARA EL NUMERO EXTRAIDO 
			//ya validado de que si existan los numeros
			Extraido = d1.ToString() + d2.ToString() + "." + d3.ToString() + d4.ToString();

			Pasos += "\n Se queria " + Numero +" y se extrajo :"+ Extraido;
			Console::WriteLine( "Precio SUPER: Q" + Extraido );

			//Pila
			Console::WriteLine("Pila");
			
			for (int i = 0; i < Pila1.Longitud(); i++)
			{
				Console::WriteLine(Pila1.MostrarEstado(i));
			}
			/*
			Console::WriteLine("Cola");
			for (int i = Cola1.Longitud(); i > 0; i--)
			{
				Console::WriteLine(Pila1.MostrarEstado(i));
			}*/

			//Cola
			Console::WriteLine("Cola");
			for (int i = 0; i < Cola1.Longitud(); i++)
			{
				Console::WriteLine(Cola1.MostrarEstado(i));
			}
			Console::ReadKey();
			break;

		case 2:

			//LA DOCUMENTACION ES LA MISMA SOLO QUE EN LA OPCION UNO , solo que esa SEGUIRA USANDO LA PILA Y COLA
			//MIENTRAS QUE ESTE BORRARA Y LLENARA DE NUEVO LA PILA Y COLA
			Console::Clear();
			Pasos = "";
			
			Pila1.OrdenInicial();
			Cola1.OrdenInicial();

			//Pila
			Console::WriteLine("Estado de la Pila");
			for (int i = 0; i < Pila1.Longitud(); i++)
			{
				Console::WriteLine(Pila1.MostrarEstado(i));
			}

			//Cola
			Console::WriteLine("Estado de la Cola");
			for (int i = 0; i < Cola1.Longitud(); i++)
			{
				Console::WriteLine(Cola1.MostrarEstado(i));
			}

			try
			{
				Console::WriteLine("Ingrese el precio. FORMA [XX.XX]");
				Numero = double::Parse(Console::ReadLine());
				Precio = Numero * 100;
			}
			catch (...)
			{
				Console::WriteLine("Ingreso un dato erroneo, SE CERRARA D:");
			}

			
			d4 = Precio % 10;
			Precio = Precio / 10;
			d3 = Precio % 10;
			Precio = Precio / 10;
			d2 = Precio % 10;
			Precio = Precio / 10;
			d1 = Precio % 10;

			
			n1 = Pila1.Buscar(d1);
			Pasos += "\n Primer Digito ";
			if (n1 != -1)
			{
				d1 = Pila1.Digito(n1);
				Pasos += " Numero extraido: " + d1.ToString() + "";
			}
			else if ((n1 = Cola1.Buscar(d1)) != -1)
			{
				d1 = Cola1.Digito(n1);
				Pasos += " Numero extraido: " + d1.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d1 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d1.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d1 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d1.ToString() + "";
				}
				else
				{
					d1 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d1.ToString() + "";
				}
			}

			n2 = Pila1.Buscar(d2);
			Pasos += "Segundo Digito";
			if (n2 != -1)
			{
				d2 = Pila1.Digito(n2);
				Pasos += " Numero extraido: " + d2.ToString() + "";
			}
			else if ((n2 = Cola1.Buscar(d2)) != -1)
			{
				d2 = Cola1.Digito(n2);

				Pasos += " Numero extraido: " + d2.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d2 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d2.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d2 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d2.ToString() + "";
				}
				else
				{
					d2 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d2.ToString() + "";
				}
			}

			n3 = Pila1.Buscar(d3);
			Pasos += "Tercer Digito";
			if (n3 != -1)
			{
				d3 = Pila1.Digito(n3);
				Pasos += " Numero extraido: " + d3.ToString() + "";
			}
			else if ((n3 = Cola1.Buscar(d3)) != -1)
			{
				d3 = Cola1.Digito(n3);
				Pasos += " Numero extraido: " + d3.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d3 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d3.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d3 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d3.ToString() + "";
				}
				else
				{
					d3 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d3.ToString() + "";
				}
			}

			n4 = Pila1.Buscar(d4);
			Pasos += "Cuarto Digito";
			if (n4 != -1)
			{
				d4 = Pila1.Digito(n4);
				Pasos += " Numero extraido: " + d4.ToString() + "";
			}
			else if ((n4 = Cola1.Buscar(d4)) != -1)
			{
				d4 = Cola1.Digito(n4);
				Pasos += " Numero extraido: " + d4.ToString() + "";
			}
			else
			{
				PilaM = Pila1.Mayor();
				ColaM = Cola1.Mayor();
				if (PilaM > ColaM)
				{
					d4 = Pila1.Digito(Pila1.Buscar(PilaM));
					Pasos += " Numero extraido: " + d4.ToString() + "";
				}
				else if (ColaM > PilaM)
				{
					d4 = Cola1.Digito(Cola1.Buscar(ColaM));
					Pasos += " Numero extraido: " + d4.ToString() + "";
				}
				else
				{
					d4 = Pila1.Digito(Pila1.Buscar(PilaM));

					Pasos += " Numero extraido: " + d4.ToString() + "";

				}
			}



			//MOSTRARA EL NUMERO EXTRAIDO 
			//ya validado de que si existan los numeros
			Extraido = d1.ToString() + d2.ToString() + "." + d3.ToString() + d4.ToString();

			Pasos += "\n Se queria " + Numero + " y se extrajo :" + Extraido;
			Console::WriteLine("Precio SUPER: Q" + Extraido);

			
			Console::WriteLine("Pila");
			for (int i = 0; i < Pila1.Longitud(); i++)
			{
				Console::WriteLine(Pila1.MostrarEstado(i));
			}

			
			Console::WriteLine("Cola");
			for (int i = 0; i < Cola1.Longitud(); i++)
			{
				Console::WriteLine(Cola1.MostrarEstado(i));
			}

			Console::ReadKey();
			break;

		case 3:
			Console::Clear();
			Console::WriteLine("HISTORIAL");
			Console::WriteLine(Pasos);
			Continuar = false;
			break;
		}
	}


	Console::WriteLine("GRACIAS POR USAR NUESTRO SISTEMA <3");

	Console::ReadKey();
	return 0;
}
