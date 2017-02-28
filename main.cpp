/*
 * main.cpp
 *
 *  Created on: Feb 27, 2017
 *      Author: piotr
 */

#include "osoby.h"
#include <stdio.h>
int main()
{
	cOsoba o, o2("Piotr", "Kaczmarek");
//	o.ustawWszystko("Piotr","Kaczmarek", 37);
	bazaOsob baza;

	while(1)
	{
		//TODO: wyświetlić menu
		char wybor=getchar();
		switch(wybor)
		{
		case 'n': baza.dodajOsobe(); // dodaje nową osobę do bazy z danych wprowadzonych z klawiatury
			break;

		}
	}


}

