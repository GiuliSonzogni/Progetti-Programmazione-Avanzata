/*
 * Istruttore.h
 *
 *  Created on: 19 apr 2022
 *      Author: giuli
 */

#ifndef ISTRUTTORE_H_
#define ISTRUTTORE_H_


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Sciatore.h"
#include "Snowboarder.h"

enum TIPI_CORSO{
	PRINCIPIANTE,
	INTERMEDIO,
	AVANZATO
};

class Istruttore: private Sciatore, Snowboarder{
private:
	vector<Socio*> lista_allievi;
	map<string, TIPI_CORSO> lista_corsi;
public:
	Istruttore(string nome, string cognome);
	virtual ~Istruttore();
	virtual void stampa();

	//gestione lista allievi
	void aggiungiAllievo(Socio* s);
	vector<Socio*> getAllievi();
	void stampaAllievi();

	//gestione lista corsi
	void aggiungiCorso(string nome_corso, TIPI_CORSO tipo);
	void stampaCorsiDisponibili();

	//overload
	void setAttrezzatura(string sci, string attacchi, string bacchette, string casco);
	void setAttrezzatura(string snowboard, string attacchi, string casco);

	string getAttrezzatura();


};


#endif /* ISTRUTTORE_H_ */
