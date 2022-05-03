/*
 * Sciatore.cpp
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */


#include <iostream>
#include <string>
#include <vector>
#include "Socio.h"
#include "Sciatore.h"


Sciatore::Sciatore(string nome, string cognome):  Socio(nome, cognome){
}
Sciatore::~Sciatore(){
	cout<<"Distruggo Sciatore"<<endl;
}

void Sciatore::stampa(){ //override
	cout<<"Sciatore "<< getID() << " "<< nome<<" "<< cognome<< endl;
}

void Sciatore::setAttrezzatura(string sci, string attacchi, string bacchette, string casco){
	this->sci = sci;
	this->attacchi = attacchi;
	this->bacchette = bacchette;
	this->casco = casco;
}

string Sciatore::getAttrezzatura(){
	string r = "Attrezzatura Sci di "+ nome +" : Sci " + sci +
				" - Attacchi " + attacchi +
				" - Casco " + casco +
				"- Bacchette " + bacchette +"\n";
	return r;
}


