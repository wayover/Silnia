#include "Silnia.h"


silnia::silnia()
{

}


silnia::~silnia()
{

}



silnia::silnia(const silnia &t):
	liczba(t.liczba)
{}

const silnia & silnia::operator=(const silnia &t)
{
	if (this == &t)									//ochrona przed przypisaniem do samego siebie
	{
		return *this;
	}

	liczba = t.liczba;

	return *this;
}






void silnia::mnoz(const int &b)
{

	long long c;




	for (int i = 0; i <liczba.size(); i++)
	{
		liczba[i] = liczba[i] * b;
	}






	for (int i = 0; i <liczba.size() ; i++)
	{

		c = liczba[i];
		liczba[i] = c % 1000000;



		if (i == liczba.size() - 1)
		{


			if (c >= 1000000)
			{
				liczba.push_back(c / 1000000);
			}


		}

		else
		{
			liczba[i + 1] += c / 1000000;
		}


	}
}



std::string silnia::sil(const int &n)
{

	liczba.push_back(1);


	for (int i = 2; i <= n; i++)					//przekazanie liczb
	{
		mnoz(i);
	}


	std::string z = "";
	std::string str;


	for (int i = liczba.size() - 1; i >= 0; i--)	//zmiana liczby na stringa
	{
		std::ostringstream ss;
		ss << liczba[i];
		str = ss.str();


		if (i!=liczba.size()-1)                     //dodanie 0 na poczatek
            {
                while (str.size()<6)
                str = "0" + str;
            }




		z = z + str;
	}


	return z;
}
