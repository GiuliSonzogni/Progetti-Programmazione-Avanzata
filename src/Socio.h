/*
 * Socio.h
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#ifndef SOCIO_H_
#define SOCIO_H_

#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"

class Socio:public Persona{
private:
	static int newID;
    const int ID;
    friend class Istruttore;
public:

	Socio(string nome, string cognome);
	virtual ~Socio();

	int getID();

	virtual void stampa();
	virtual string getAttrezzatura() =0; //FUNZIONE ASTRATTA
};





#endif /* SOCIO_H_ */
