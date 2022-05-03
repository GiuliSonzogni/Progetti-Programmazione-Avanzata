//============================================================================
// Name        : SciClub.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include "Socio.h"
#include "Persona.h"
#include "Sciatore.h"
#include "Istruttore.h"
#include "Snowboarder.h"
#include "Impiegato.h"
#include <memory>
using namespace std;


int main() {

	//TODO USA SMART POINTER

	Sciatore* s1 = new Sciatore("Giulia", "Sonzogni");
	s1->setAttrezzatura("model1", "model1", "model1", "model1");
	//s1->stampa(); //override corretto

	Snowboarder* s2 = new Snowboarder("Martina", "Sonzogni");
	s2->setAttrezzatura("model2", "model2", "model2");
	//s2->stampa();


	unique_ptr<Istruttore> i1 (new Istruttore("Massimo", "Cremaschi"));
	//i1->stampa();

	i1->aggiungiAllievo(s1);
	i1->aggiungiAllievo(s2);

	//i1->stampaAllievi();

	i1->setAttrezzatura("model1", "model1", "model1", "model1");
	i1->setAttrezzatura("model2", "model2", "model2");
	//cout<<i1->getAttrezzatura();

	i1->aggiungiCorso("001", PRINCIPIANTE);
	i1->aggiungiCorso("002", AVANZATO);
	i1->aggiungiCorso("003", INTERMEDIO);
	//i1->stampaCorsiDisponibili();

	unique_ptr<Impiegato> im1 (new Impiegato("Maria", "Rossi"));
	unique_ptr<Impiegato> im2 ( new Impiegato("Massimo", "Verdi"));



	cout<<"Elenco soci:"<<endl;
	s1->stampa();
	s2->stampa();
	cout<<s2->getAttrezzatura()<<endl;

	cout<<"Elenco istruttori"<<endl;
	i1->stampa();

	cout<<endl;
	i1->stampaAllievi();
	cout<<endl;
	i1->stampaCorsiDisponibili();
	cout<<endl<<i1->getAttrezzatura();

	cout<<endl<<"Elenco impiegati sciClub"<<endl;
	im1->stampa();
	im2->stampa();

	cout<<endl<<endl<<"Distruttori"<<endl;
	delete s1;
	delete s2;

	return 0;
}
