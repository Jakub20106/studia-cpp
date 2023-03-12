#include <iostream>
#include <cstring>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
	//Zadania 1.9
	int data;
	cout << "Podaj dzisiejsza date w formacie dd mm rrrr";
	cin >> data;

}
/* {
	//Zadanie 1.8 % - reszta z dzielenia, przestêpnoœæ roku mo¿na sprawdziæ dziel¹c przez 400 i 100 oraz 4. != to boolowskie false. Wykorzystuje to tu poniewa¿ zasada przestêpczego roku mówi ¿e rok jest przestêpny gdy podzielimy go przez 4 i nie jest podzielny przez 100.
	int rok;
	cout << "Podaj rok: ";
	cin >> rok;
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
	{
		cout << "Rok jest przestepny!";
	}
	else
	{
		cout << "Rok nie jest przestepny!";
	}
}*/

/* {
	//zadanie 1.6
	// && - and, || - or
	double a;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a == static_cast<int>(a) && static_cast<int>(a) % 2 == 0)
	{
		int suma = 0;
		int liczba = static_cast<int>(a);

		while (liczba != 0) {
			suma += liczba % 10;
			liczba /= 10;
		}

		cout << "Liczba " << a << " jest calkowita. Liczba jest podzielna przez 2!" ".\n";
	}
	else {
		cout << "Liczba " << a << " nie jest calkowita!" << ".\n";
	}
	return 0;
}*/

/* {
	//zadanie 1.5
	double a;
	int suma = 0;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a == static_cast<int>(a)) {
		int suma = 0;
		int liczba = static_cast<int>(a);

		while (liczba != 0) {
			suma += liczba % 10;
			liczba /= 10;
		}

		cout << "Liczba " << a << " jest calkowita. Suma jej cyfr to " << suma << ".\n";
	}
	else {
		cout << "Liczba " << a << " nie jest calkowita!".\n";
	}
	return 0;
}*/

/* {
	//zadanie 1.4
	double a;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a == (int)a)
	{
		cout << "Liczba nie jest calkowita!";
	}
	else
	{
		cout << "Liczba jest calkowita!";
	}
	return 0;
}*/

/* {
	//zadanie 1.3
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;

	if ((a > 0 && a < 11) || (a > 17 && a < 21))
	{
		cout << "Liczba jest wieksza od 0 ale jest mniejsza niz 11 lub jest wieksza od 17 ale mniejsza niz 21!" << endl;
	}
	else if (a == 11)
	{
		cout << "Liczba jest rowna 11 i jest wieksza od 0, 17 oraz 21!" << endl;
	}
	else if (a == 0)
	{
		cout << "Liczba jest rowna zero i jest mniejsza niz 11, 17 i 21!" << endl;
	}
	else if (a < 0)
	{
		cout << "Liczba jest mniejsza niz 0, 11, 17 i 21!" << endl;
	}
	else if (a > 21)
	{
		cout << "Liczba jest wieksza niz 0, 11, 17 i 21!" << endl;
	}
	else if (a == 17)
	{
		cout << "Liczba jest rowna 17 i jest wieksza od 0 i 11, ale mniejsza niz 21!" << endl;
	}
	else if (a == 21)
	{
		cout << "Liczba jest rowna 21 i jest wieksza od 0, 11 oraz 17!" << endl;
	}
	else if (a > 11 && a < 17)
	{
		cout << "Liczba jest wieksza od 0 i 11 ale mniejsza niz 17 i 21!" << endl;
	}
	return 0;
}*/

/* {
	// Zadanie 1.2
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;

	if (a > 0 && a < 11)
	{
		cout << "Liczba jest wieksza od 0 ale jest mniejsza niz 11!";
	}
	else if (a > 0 && a == 11)
	{
		cout << "Liczba jest wieksza od 0 i jest rowna 11!";
	}
	else if (a == 0 && a < 11)
	{
		cout << "Liczba jest równa zero oraz jest mniejsza niz 11!";
	}
	else if (a < 0 && a < 11) 
	{
		cout << "Liczba jest mniejsza niz 0 oraz 11!";
	}
	else if (a > 0 && a > 11)
	{
		cout << "Liczba jest wieksza niz 0 oraz 11!";
	}
	return 0;
}*/

/* {
	//Zadanie 1.1
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a > 0)
	{
		cout << "Liczba jest wieksza od 0! ";
	}
	else if (a == 0) {
		cout << "Liczba jest rowna 0! ";
	}
	else if (a < 0) {
		cout << "Liczba jest mniejsza niz 0!";
	}
	return 0;
}*/
