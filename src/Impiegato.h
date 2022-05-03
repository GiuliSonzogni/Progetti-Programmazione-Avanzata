/*
 * Impiegato.h
 *
 *  Created on: 21 apr 2022
 *      Author: giuli
 */

#ifndef IMPIEGATO_H_
#define IMPIEGATO_H_

#include <iostream>
#include <string>
#include "Dipendente.h"

class Impiegato: public Dipendente, public Persona{
	//eredita da parsona e dalla classe astratta Dipendente che mi impone l'implementazione di alcuni metodi
	private:
	static int newMatricola;
	const int Matricola;
public:
	Impiegato(string nome, string cognome);
	virtual ~Impiegato();
	void getStipendio();
	void getLivello();
	int getMatricola();
	virtual void stampa();
};


#endif /* IMPIEGATO_H_ */
