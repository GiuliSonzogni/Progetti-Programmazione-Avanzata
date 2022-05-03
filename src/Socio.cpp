/*
 * Socio.cpp
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#include <iostream>
#include <string>
#include "Socio.h"


Socio::Socio(string nome, string cognome):  Persona(nome, cognome), ID(++newID){
}

Socio::~Socio(){
	cout<<"Distruggo Socio"<<endl;
}

int Socio::getID(){
	return ID;
}

void Socio::stampa(){ //override
	cout<<"Socio "<< ID << " "<< nome<<" "<< cognome<< endl;
}

int Socio::newID = 0;


