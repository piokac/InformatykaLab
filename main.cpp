/*
 * main.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: piotr
 */
#include "cUlamek.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cUlamek u, u1(1,2), u3;

	cin>>u;// istream& operator>>(istream&, cUlamek&)
	u3 = 2*u+u1+1;//u1 = u ;// u3.operator=(u);

	cout<<"ulamek wynosi: "<< u <<" a wartosc dziesietna: "<<(double)u<< " a sinus: "<<sin(u)<<endl;
}


