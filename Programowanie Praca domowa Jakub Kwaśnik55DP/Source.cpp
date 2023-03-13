#include <iostream>
#include <cstring>
#include <math.h>
#include <stdio.h>
#include <chrono>

using namespace std;

int main()
{
	//zadanie 1.17
	
	double a, b, c;
	cout << "Podaj a, b i c: ";
	cin >> a >> b >> c;

	double delta = b * b - 4 * a * c;

	if (delta < 0) {
		cout << "Brak pierwiastkow rzeczywistych" << endl;
	}
	else {
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);

		if (x1 < 0 && x2 < 0) {
			cout << "Oba pierwiastki sa ujemne" << endl;
		}
		else {
			cout << "Nie oba pierwiastki sa ujemne" << endl;
		}
		

	return 0;
	}
}

/*{
	//zadanie 1.16 Jeœli a jest równe zero, program rozpatruje przypadki, gdy b jest równe zero lub ró¿ne od zera,
	//a nastêpnie oblicza jedno lub nieskoñczenie wiele rozwi¹zañ. W przeciwnym razie, 
	//jeœli delta jest wiêksza od zera, program oblicza dwa pierwiastki równania i sprawdza, czy oba s¹ dodatnie. Jeœli delta jest równa zero,
	// program oblicza jedno rozwi¹zanie i sprawdza, czy jest ono dodatnie. 
	//W przypadku ujemnej delty program informuje o braku rozwi¹zañ rzeczywistych.
	double a, b, c;
	cout << "Podaj a, b, c: ";
	cin >> a >> b >> c;

	double delta = b * b - 4 * a * c;

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Rownanie ma nieskonczenie wiele rozwiazan.";
			}
			else {
				cout << "Rownanie nie ma rozwiazan.";
			}
		}
		else {
			double x = -c / b;
			cout << "Rownanie ma jedno rozwiazanie: x = " << x;
		}
	}
	else {
		if (delta > 0) {
			double x1 = (-b - sqrt(delta)) / (2 * a);
			double x2 = (-b + sqrt(delta)) / (2 * a);
			if (x1 > 0 && x2 > 0) {
				cout << "Rownanie ma dwa rozwiazania dodatnie: x1 = " << x1 << ", x2 = " << x2;
			}
			else {
				cout << "Rownanie ma dwa rozwiazania, ale nie oba sa dodatnie.";
			}
		}
		else if (delta == 0) {
			double x = -b / (2 * a);
			if (x > 0) {
				cout << "Rownanie ma jedno rozwiazanie dodatnie: x = " << x;
			}
			else {
				cout << "Rownanie ma jedno rozwiazanie, ale nie jest ono dodatnie.";
			}
		}
		else {
			cout << "Rownanie nie ma rozwiazan rzeczywistych.";
		}
	}

	return 0;
}*/

/* {
	//zadanie 1.15
	double a, b, c, delta, x1, x2;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	delta = b * b - 4 * a * c;

	if (delta < 0)
	{
		cout << "Rownanie nie ma rozwiazan rzeczywistych";
	}
	else if (delta == 0)
	{
		x1 = -b / (2 * a);
		cout << "Rownanie ma jedno rozwiazanie: x = " << x1;
	}
	else
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "Rownanie ma dwa rozwiazania: x1 = " << x1 << " i x2 = " << x2;
	}

	return 0;
}*/

/* {
	//zadanie 1.14
	double a, b, c, delta;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	delta = b * b - 4 * a * c;

	if (delta > 0)
	{
		cout << "Rownanie ma dwa pierwiastki rzeczywiste rozne od siebie.";
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (delta == 0)
	{
		cout << "Rownanie ma jeden pierwiastek rzeczywisty o wielokrotnosci 2.";
		double x = -b / (2 * a);
		cout << "x = " << x;
	}
	else
	{
		cout << "Rownanie nie ma rozwiazan rzeczywistych.";
	}

	return 0;
}*/

/* {
	//Zadanie 1.13
	double a, b, x;
	cout << "Podaj a i b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "Rownanie ma nieskonczenie wiele rozwiazan.";
		}
		else {
			cout << "Rownanie nie ma rozwiazan.";
		}
	}
	else {
		x = -b / a;
		cout << "Rozwiazanie rownania to x = " << x;
	}
	return 0;

}*/

/* {
	//zadanie 1.12 wykorzystujemy if dla warunkow a,b i podstawowa wiedze z techbazy
	double a;
	double b;
	cout << "Podaj liczbe a i b: ";
		cin >> a >> b;
		if (a == 0 && b == 0) {
			cout << "Prosta y = 0 przechodzi przez wszystkie cwiartki ukladu wspolrzednych.";
		}
		else if (a == 0 && b != 0) {
			cout << "Prosta y = " << b << " jest rownolegla do osi OX i nie przechodzi przez zadna cwiartke ukladu wspolrzednych.";
		}
		else if (a > 0 && b > 0) {
			cout << "Prosta y = " << a << "x + " << b << " przechodzi przez I cwiartke ukladu wspolrzednych.";
		}
		else if (a < 0 && b > 0) {
			cout << "Prosta y = " << a << "x + " << b << " przechodzi przez II cwiartke ukladu wspolrzednych.";
		}
		else if (a < 0 && b < 0) {
			cout << "Prosta y = " << a << "x + " << b << " przechodzi przez III cwiartke ukladu wspolrzednych.";
		}
		else {
			cout << "Prosta y = " << a << "x + " << b << " przechodzi przez IV cwiartke ukladu wspolrzednych.";
		}

		return 0;
}*/

/* {
	//zadanie 1.11 taka sama sytuacja jak w poprzednim zadaniu.
	int liczba;
	cout << "Podaj liczbe odpowiadajaca miesiacowi: ";
	cin >> liczba;
	switch (liczba)
	{
	case 1:
		cout << "Styczen";
		break;
	case 2:
		cout << "Luty";
		break;
	case 3:
		cout << "Marzec";
		break;
	case 4:
		cout << "Kwiecien";
		break;
	case 5:
		cout << "Maj";
		break;
	case 6:
		cout << "Czerwiec";
		break;
	case 7:
		cout << "Lipiec";
		break;
	case 8:
		cout << "Sierpien";
		break;
	case 9:
		cout << "Wrzesien";
		break;
	case 10:
		cout << "Pazdziernik";
		break;
	case 11:
		cout << "Listopad";
		break;
	case 12:
		cout << "Grudzien";
		break;
	default:
		cout << "Podales zla cyfre. Nie ma takiego miesiaca";
		break;
	}
}*/

/* {
	//zadanie 1.10 Wykorzystam petle switch zeby kazdemu numerowi przypisac odpowiedni dzien tygodnia: dzia³a to jak if/else if
	int liczba;
	cout << "Podaj liczbe odpowiadajaca dniowi tygodnia: ";
	cin >> liczba;
	switch (liczba)
	{
	case 1:
		cout << "Poniedzialek";
		break;
	case 2:
		cout << "Wtorek";
		break;
	case 3:
		cout << "Sroda";
		break;
	case 4:
		cout << "Czwartek";
		break;
	case 5:
		cout << "Piatek";
		break;
	case 6:
		cout << "Sobota";
		break;
	case 7:
		cout << "Niedziela";
		break;
	default:
		cout << "Podales zla cyfre. Nie ma takiego dnia tygodnia";
		break;
	}
}*/

/* {
	//zadanie 1.9 trzeba uwzglêdniæ czy rok jest przestêpny i trzeba to wykonaæ jako 1 if poniewa¿ program inaczej nie weŸmie tego pod uwagê
	int day;
	int month;
	int year;

	cout << "Podaj dzien: ";
	cin >> day;
	cout << "Podaj miesiac: ";
	cin >> month;
	cout << "Podaj rok: ";
	cin >> year;

	if ((day == 29) && (month == 2))
	{
		if ((month == 2) && ((day == 29 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) || day < 29))
		{
			cout << "Podana data to " << day << "." << month << "." << year;
		}
		else
		{
			cout << "Podana data jest nieprawidlowa! ";
			return 0;
		}
	}
	
	else if ((day >= 1 && day <= 31) && (month >= 1 && month <= 12) && (year >= 1 && year <= 9999))
	{
		cout << "Podana data to " << day << "." << month << "." << year;
	}
	else
	{
		cout << "Podana data jest nieprawidlowa! ";
	}
	return 0;
}*/

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
