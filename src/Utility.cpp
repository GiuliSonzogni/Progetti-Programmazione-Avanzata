/*
 * Utility.cpp
 *
 *  Created on: 21 apr 2022
 *      Author: giuli
 */
#include <iostream>
#include <string>
#include "Istruttore.h"
#include "Utility.h"

string Utility::TipiCorsoToString(TIPI_CORSO t){
	string tipo;
	switch(t){
	case PRINCIPIANTE:
		tipo = "Principiante";
		break;
	case INTERMEDIO:
		tipo = "Intermedio";
		break;
	case AVANZATO:
		tipo = "Avanzato";
		break;
	}
	return tipo;
}


