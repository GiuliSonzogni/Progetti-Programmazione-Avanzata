/*
 * Impiegato.cpp
 *
 *  Created on: 21 apr 2022
 *      Author: giuli
 */

#include <iostream>
#include <string>
#include <vector>
#include "Socio.h"
#include "Impiegato.h"


Impiegato::Impiegato(string nome, string cognome): Persona(nome, cognome), Matricola(++newMatricola){
}

void Impiegato::getStipendio(){
	cout<<"Stipendio 1000"<<endl;
}

void Impiegato::getLivello(){
	cout<<"Livello 1"<<endl;
}
int Impiegato::getMatricola(){
	return Matricola;
}

void Impiegato::stampa(){ //override
	cout<<"Impiegato "<< Matricola << " "<< nome<<" "<< cognome<< endl;
}


Impiegato::~Impiegato(){
		cout<<"Distruggo Impiegato"<<endl;
}

int Impiegato::newMatricola = 0;
