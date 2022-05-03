/*
 * Dipendente.h
 *
 *  Created on: 21 apr 2022
 *      Author: giuli
 */

#ifndef DIPENDENTE_H_
#define DIPENDENTE_H_

#include <iostream>
#include <string>
#include "Persona.h"

class Dipendente{
public:
	virtual void getStipendio() =0;
	virtual void getLivello() =0;
	virtual int getMatricola() =0;
};



#endif /* DIPENDENTE_H_ */
