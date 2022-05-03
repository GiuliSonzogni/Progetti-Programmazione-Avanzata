/*
 * Sciatore.h
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#ifndef SCIATORE_H_
#define SCIATORE_H_


#include <iostream>
#include <string>
#include <vector>
#include "Socio.h"

class Sciatore: virtual public Socio{
private:
	//attrezzatura
	string sci; //marca modello
	string attacchi; //marca modello
	string bacchette;
	string casco;

public:
	Sciatore(string nome, string cognome);
	virtual ~Sciatore();
	virtual void stampa();
    void setAttrezzatura(string sci, string attacchi, string bacchette, string casco);
	string getAttrezzatura();
};



#endif /* SCIATORE_H_ */
