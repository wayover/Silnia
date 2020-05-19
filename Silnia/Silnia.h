//*****************************************************************************************************************************
//
// Klasa: silnia
//
// Opis klasy:
// Klasa która oblicza silnie
//
// Autor:
// Kamil Wisniewski
//
// Historia zmian:
// Jaka zmiana:							Data zmiany:
// stworzenie klasy						09/01/2019
// poprawki i dodanie komentarzy	    11/01/2019
// poprawienie metody	                17/01/2019
//
//******************************************************************************************************************************



#ifndef SILNIA_H_
#define SILNIA_H_

#include <vector>
#include <string>
#include <sstream>






class silnia
{
private:
	std::vector <long long> liczba;					//kontener przechowuj¹cy liczbe

public:

	silnia();										//konstrukor bezparametrowy
	~silnia();										//destruktor niewirtualny poniewa¿ brak dziedziczenia

	silnia(const silnia &);							//konstruktor koiujacy
	const silnia &operator=(const silnia &);		//operator przypisania

	std::string sil(const int &n);					//przekazanie liczb do metody mnoz i zwrócenie liczby w postaci stringa
	void mnoz(const int &b);								//mnozenie i dzielenie liczby


};

#endif
