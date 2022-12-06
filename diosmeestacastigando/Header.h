#pragma once
#ifndef POKEMON
#define POKEMON
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Pokemon
{
public:
	string nombre;
	int fisic_atack = 0;
	int special_atack = 0;

	int fisic_defence = 0;
	int special_defence = 0;
	float experiencia = 0;
	int vida = 0;
	int* punterodemierda;


	void tomarnombre();
	void seleccion(int osmosis);
	int PHUD(Pokemon enemigo);
	int Pipactrueno(Pokemon enemigo);
	int Pmalicioso(Pokemon enemigo);
	int  Pgrunido(Pokemon enemigo);
	int Pcolaferrea(Pokemon enemigo);



	int CHUD(Pokemon enemigo);
	int Cpazmental(Pokemon enemigo);
	int Cdefensaferrea(Pokemon enemigo);
	int Clanzallamas(Pokemon enemigo);
	int Cvuelo(Pokemon enemigo);

	void tomardaño(int osmosis);

private:
};




#endif #pragma once
