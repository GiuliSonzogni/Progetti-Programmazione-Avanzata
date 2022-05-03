/*
 * Istruttore.cpp
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include "Istruttore.h"
#include "Snowboarder.h"
#include "Utility.h"

using namespace std;

Istruttore::Istruttore(string nome, string cognome): Socio(nome, cognome), Sciatore(nome, cognome), Snowboarder(nome, cognome){
	Socio::newID--;
}

Istruttore::~Istruttore(){
	cout<<"Distruggo Istruttore"<<endl;
}

void Istruttore::stampa(){
	cout<<"Istruttore "<< nome<<" "<< cognome<< endl;
}

void Istruttore::aggiungiAllievo(Socio* s){
	lista_allievi.push_back(s);

}
vector<Socio*> Istruttore::getAllievi(){
	return lista_allievi;
}


void Istruttore::stampaAllievi(){
	cout<<"Lista allievi di "<< nome << " : " <<endl;
	for(vector<Socio*>::iterator i=lista_allievi.begin(); i!=lista_allievi.end(); ++i)
	{
		(*i)->stampa();
	}

}
void Istruttore::aggiungiCorso(string nome_corso, TIPI_CORSO tipo){
	lista_corsi[nome_corso]= tipo;
}
void Istruttore::stampaCorsiDisponibili(){
	cout<<"Lista corsi di "<< nome << " : " <<endl;
	map<std::string, TIPI_CORSO>::iterator it = lista_corsi.begin();
	    while (it != lista_corsi.end())
	    {
	        cout << "Nome corso: "<<it->first << ", tipo: " << Utility::TipiCorsoToString(it->second)<< endl;
	        it++;
	    }
}


void Istruttore::setAttrezzatura(string sci, string attacchi, string bacchette, string casco){
	Sciatore::setAttrezzatura(sci, attacchi, bacchette, casco);
}

void Istruttore::setAttrezzatura(string snowboard, string attacchi, string casco){
	Snowboarder::setAttrezzatura(snowboard, attacchi, casco);
}


string Istruttore::getAttrezzatura(){
	return Sciatore::getAttrezzatura() + "\n"+ Snowboarder::getAttrezzatura();
}





