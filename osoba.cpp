#include "osoby.h"
#include <fstream>
/** \brief
 *
 *
 */
cOsoba::cOsoba():m_imie(""), m_nazwisko(""), m_wiek(0) //konstruktor domyslny z list a inicjalizacyjną
{
//	m_imie=""jan;
//	m_nazwisko="kowalski";
//	m_wiek=30;
}
cOsoba::cOsoba(const string& imie, const string& nazwisko):m_imie(imie),m_nazwisko(nazwisko), m_wiek(0){

}


void cOsoba::pobierz(){
	cout<<"podaj imie: ";
	cin>>m_imie;
	cout<<"podaj nazwisko: ";
	cin>>m_nazwisko;
	cout<<"podaj wiek";
	cin>>m_wiek;

	cout<<"wprowadziles: ";
	wyswietl();
}
void cOsoba::wyswietl(){

}
int cOsoba::wiek(){
	return m_wiek;
}


void cOsoba::ustawWszystko(const string& imie, const string& nazwisko,
		int wiek) {
	m_imie=imie;
	m_nazwisko=nazwisko;
	if(wiek>=0)
		m_wiek=wiek;
}

void cOsoba::ustawWiek(int wiek) {
}

string cOsoba::imieNazwisko() {
	return m_imie+" "+m_nazwisko;
}

string cOsoba::toString() {
	char tab[1000];
	sprintf(tab,"%s;%s;%d\n", m_imie.c_str(), m_nazwisko.c_str(), m_wiek);
	return tab;
}

void cOsoba::fromString(const string& tekst) {
}

void bazaOsob::dodajOsobe() {
	cOsoba o;
	o.pobierz();
	m_tablicaOsob.push_back(o);
}

bool bazaOsob::usunOsobe(const string& imie, const string& nazwisko) {
}

cOsoba bazaOsob::znajdzOsobe(const string& imie, const string& nazwisko) {
}

bazaOsob bazaOsob::listaWiekowa(int wiekMin, int wiekMax) {
}

void bazaOsob::wczytaj(const string& nazwaPliku) {
}

void bazaOsob::wyswietl() {
	for(auto& el:m_tablicaOsob)
	{
		el.wyswietl();
	}
}

void bazaOsob::zapisz(const string& nazwaPliku) {
	ofstream plik(nazwaPliku);
	for(auto& el:m_tablicaOsob)
	{
		plik<<el.toString();
	}
	plik.close();
}
