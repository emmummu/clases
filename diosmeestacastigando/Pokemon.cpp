#pragma once

#include "Header.h"
using namespace std;
void Pokemon::tomarnombre() {
	cout << "que nombre le quieres poner a tu nuevo pokemon\n";
	cin >> nombre;
}




void Pokemon::seleccion(int osmosis) {
	if (osmosis == 1)
	{
		fisic_atack = 20;
		special_atack = 30;

		special_defence = 20;
		vida = 60;
		fisic_defence = 20;
	}
	else
	{
		fisic_atack = 15;
		special_atack = 35;

		special_defence = 17;
		vida = 90;
		fisic_defence = 23;
	}
}



int Pokemon::Pgrunido(Pokemon enemigo) {
	enemigo.fisic_atack -= 10;
	return 0;
}
int Pokemon::Pipactrueno(Pokemon enemigo) {
	return (special_atack * 40) / enemigo.special_defence;
}
int Pokemon::Pmalicioso(Pokemon enemigo){
	 enemigo.fisic_defence -= 10;
	 return 0;
}
int Pokemon::Pcolaferrea(Pokemon enemigo) {
	return(fisic_atack * 30) / enemigo.fisic_atack;
}
int Pokemon::PHUD(Pokemon enemigo) {
	int caca;
	cout << nombre << " PS: " << vida << endl;
	cout << "ESCOJE TU ATAQUE:" << endl;
	cout << "1.ipactrueno\n2. malicioso\n3. cola ferrea\n4. Gruñido\n";
	cin >> caca;

	switch (caca)
	{
	case 1:
		Pipactrueno(enemigo);
		break;
	case 2:
		Pmalicioso(enemigo);
		break;
	case 3:
		Pcolaferrea(enemigo);
		break;
	case 4:
		Pgrunido(enemigo);
		break;
	default:
		break;
	}
}
int Pokemon::CHUD(Pokemon enemigo) {
	int opt;
	cout << nombre << " PS: " << vida << endl;
	cout << "ESCOJE TU ATAQUE:" << endl;
	cout << "1.Paz mental\n2. Lanzallamas\n3. vuelo\n4. defensa ferrea\n";
	cin >> opt;

	switch (opt)
	{
	case 1:
		Cpazmental(enemigo);
		break;
	case 2:
		Clanzallamas(enemigo);
		break;
	case 3:
		Cvuelo(enemigo);
		break;
	case 4:
		Cdefensaferrea(enemigo);
		break;
	default:
		break;
	}
}


void Pokemon::tomardaño(int osmosis) {
	vida = -osmosis;
}


int Pokemon::Cpazmental(Pokemon enemigo) {
	special_atack += 20;
	return 0;
}
int Pokemon::Cdefensaferrea(Pokemon enemigo) {
	fisic_defence += 10;
	return 0;
}
int Pokemon::Clanzallamas(Pokemon enemigo) {
	return (special_atack * 45) / enemigo.special_defence;
}
int Pokemon::Cvuelo(Pokemon enemigo) {
	return(fisic_atack * 30) / enemigo.fisic_defence;

}
