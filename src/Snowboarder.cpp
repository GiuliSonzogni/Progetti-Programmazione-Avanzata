/*
 * Snowboarder.cpp
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#include <iostream>
#include <string>
#include <vector>
#include "Socio.h"
#include "Snowboarder.h"


Snowboarder::Snowboarder(string nome, string cognome):  Socio(nome, cognome){
}
Snowboarder::~Snowboarder(){
	cout<<"Distuggo Snowboarder"<<endl;
}
void Snowboarder::stampa(){ //override
	cout<<"Snowboarder "<< getID() << " "<< nome<<" "<< cognome<< endl;
}

void Snowboarder::setAttrezzatura(string snowboard, string attacchi, string casco){
	this->snowboard = snowboard;
	this->attacchi = attacchi;
	this->casco = casco;
}

string Snowboarder::getAttrezzatura(){
	string r = "Attrezzatura Snow di "+ nome +": Snowboarder " + snowboard +
				" - Attacchi " + attacchi +
				" - Casco " + casco + "\n" ;
	return r;
}


