/*
 * Persona.h
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Persona{
public:
	string nome;
	string cognome;

	Persona(string nome, string cognome);
	virtual ~Persona();

	virtual void stampa();
};



#endif /* PERSONA_H_ */
