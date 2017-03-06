#include "cUlamek.h"

cUlamek::cUlamek():m_licznik(0),m_mianownik(1){
	//m_licznik = 0;
	//m_mianownik = 1;
}

cUlamek::cUlamek(int _l, int _m):m_licznik(_l),m_mianownik(_m){
	//m_licznik = 0;
	//m_mianownik = 1;
}

cUlamek::operator double()
{
	return (double)m_licznik/m_mianownik;
}
cUlamek cUlamek::operator +(const cUlamek& v) const{

}

cUlamek cUlamek::operator +(int v) const{
	cUlamek tmp;
	tmp.m_licznik = m_licznik + m_mianownik*v;
	tmp.m_mianownik = m_mianownik;
	tmp.skroc();
	return tmp;
}

cUlamek cUlamek::operator *(int v) const{//u.operator*(1)
	cUlamek tmp;
	tmp.m_licznik = v*m_licznik;
	tmp.m_mianownik = m_mianownik;
	return tmp;
}


void cUlamek::skroc() {
}

cUlamek operator *(int v, const cUlamek& u) {
	return u*v;
}

istream& operator>>(istream& strumien, cUlamek& v){
	cout<<"podaj licznik: ";
	strumien>>v.m_licznik;

	cout<<"podaj mianownik: ";
	strumien>>v.m_mianownik;
	return strumien;
}




cUlamek& cUlamek::operator=(const cUlamek& v) {
	this->m_licznik = v.m_licznik;
	this->m_mianownik = v.m_mianownik;
	return *this;
}



ostream& operator<<(ostream& strumien,const cUlamek& u){

}


