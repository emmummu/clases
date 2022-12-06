#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main() {
	Pokemon jugador1;
	Pokemon jugador2;
	cout << "Bienvenido a Pokemon Showdown\n";
	int option;
	int ns;
	int daño;

	cout << "Jugador 1 elija su pokemon\n";
	cout << "1. Pikachu\n2. Charizard\n";
	cin >> option;
	switch (option)
	{
	case 1:

		jugador1.seleccion(option);
		jugador1.tomarnombre();
		break;
	case 2:

		jugador1.seleccion(option);
		jugador1.tomarnombre();
		break;
	default:
		break;
	}

	cout << "Jugador 2 elija su pokemon\n";
	cout << "1. Pikachu\n2. Charizard\n";
	cin >> ns;
	switch (ns)
	{
	case 1:
		jugador2.seleccion(ns);
		jugador2.tomarnombre();
		break;
	case 2:

		jugador2.seleccion(ns);
		jugador2.tomarnombre();
		break;
	default:
		break;
	}

	do {
		if (option == 1) {
		daño=jugador1.PHUD(jugador2);
		jugador2.tomardaño(daño);
		}
		else {
			daño=jugador1.CHUD(jugador2);
			jugador2.tomardaño(daño);
		}
		if (ns == 1) {
			daño=jugador2.PHUD(jugador1);
			jugador1.tomardaño(daño);
		}
		else
		{
			daño= jugador2.CHUD(jugador1);
			jugador1.tomardaño(daño);
		}
	} while (jugador1.vida >= 0 || jugador2.vida >= 0);
}