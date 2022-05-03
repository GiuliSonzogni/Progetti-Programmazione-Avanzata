/*
 * Snowboarder.h
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#ifndef SNOWBOARDER_H_
#define SNOWBOARDER_H_


#include <iostream>
#include <string>
#include <vector>
#include "Socio.h"

class Snowboarder: virtual public Socio{
private:
	//attrezzatura
	string snowboard; //marca modello
	string attacchi; //marca modello
	string casco;

public:
	Snowboarder(string nome, string cognome);
	virtual ~Snowboarder();
	virtual void stampa();
	void setAttrezzatura(string snowboard, string attacchi, string casco);
	string getAttrezzatura();
};





#endif /* SNOWBOARDER_H_ */
