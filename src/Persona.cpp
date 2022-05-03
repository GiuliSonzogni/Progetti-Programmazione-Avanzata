/*
 * Persona.cpp
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */


#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"

using namespace std;

Persona::Persona(string nome, string cognome){
		this->nome = nome;
		this->cognome = cognome;
}

Persona::~Persona(){
	cout<<"Distruggo Persona"<<endl;
}
void Persona::stampa(){
		cout<<nome<<" "<< cognome<< endl;
}


