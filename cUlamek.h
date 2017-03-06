/*
 * cUlamek.h
 *
 *  Created on: Jan 24, 2017
 *      Author: piotr
 */

#ifndef CULAMEK_H_
#define CULAMEK_H_
#include <iostream>
using namespace std;

class cUlamek {
int m_licznik;
int m_mianownik;

public:

	cUlamek();
	cUlamek(int _l, int _m);

	cUlamek operator+(const cUlamek& v) const;
	cUlamek operator+(int v) const;
	cUlamek operator*(int v) const;
	cUlamek operator=(const cUlamek& v);

	friend istream& operator>>(istream& strumien, cUlamek& v);
	friend ostream& operator<<(ostream& strumien, const cUlamek& v);
	operator double();

private:
	void skroc();
};

cUlamek operator*(int v, const cUlamek& u);





#endif /* CULAMEK_H_ */
