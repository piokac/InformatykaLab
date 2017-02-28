/*
 * osoby.h
 *
 *  Created on: Feb 27, 2017
 *      Author: piotr
 */

#ifndef OSOBY_H_
#define OSOBY_H_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cOsoba{
private:
	//pola klasy
	string m_imie;
	string m_nazwisko;
	int m_wiek; //< wiek w latach
public:
	//metody klasy
	cOsoba(); //< konstruktor domyslny
	cOsoba(const string& imie, const string& nazwisko); //< konstruktor dwuargumentowy zawierający imię i nazwisko
	void pobierz(); //< metoda pobiera dane osoby od użytkownika
	void wyswietl(); //< metoda wyświetla dane osoby
	int wiek(); //< getter pola m_wiek
	void ustawWszystko(const string& imie, const string& nazwisko, int wiek); //< setter dla łącznego ustawiania wszystkich atrybutów klasy
	void ustawWiek(int wiek); //< setter dla wieku
	string imieNazwisko(); //< getter dla napisu zawierającego imie nazwisko
	string toString();//< generuje linię tekstu z polami odzielonymi średnikami
	void fromString(const string& tekst);//< wczytuje linię tekstu z polami oddzielonymi średnikami (taką jak generuje metoda toString) i przypisuje wartości
};


class bazaOsob
{
	//pola klasy
	vector<cOsoba> m_tablicaOsob;

public:
	//metody klasy
	void dodajOsobe();//< dodaje nową osobe do bazy
	void wyswietl();//< wyświetla dane oosby na konsoli
	bool usunOsobe(const string& imie, const string& nazwisko); //<usuwa osąbę na podstawie imienia i nazwiska
	cOsoba znajdzOsobe(const string& imie, const string& nazwisko); //< wyszujuje osobę w bazie po imieniu i nazwisku

	bazaOsob listaWiekowa(int wiekMin, int wiekMax); //< generuje listę osób w danym zakresie wiekowym
	void wczytaj(const string& nazwaPliku); //< wczytuje dane z pliku tekstowego typu csv
	void zapisz(const string& nazwaPliku); //< zapisuje dane do pliku tekstowego typu csv
};

#endif /* OSOBY_H_ */
