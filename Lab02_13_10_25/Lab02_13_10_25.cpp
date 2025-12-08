#include <iostream>
#include <stdio.h>
#include <random>
using namespace std;

int main()
{
	// Zadanie 1 
	/*
	cout << "[5,7]" << endl;
	for (int i = 5; i <= 7; i++) {
		cout << i << endl;
	}
	cout << "[5,7)" << endl;
	for (int i = 5; i < 7; i++) {
		cout << i << endl;
	}
	cout << "[0,10] co drugi" << endl;
	for (int i = 0; i <= 10; i=i+2) {
		cout << i << endl;
	}
	cout << "Od 10 do 0" << endl;
	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}
	*/
	// Zadanie 2
	/*
	int fahr, celsius; //zmienne typu int
	int start, limit, krok; //zmienne typu int

	start = 0; //przypisz 0 do start
	limit = 200; //przypisz 200 do limit
	krok = 20; //przypisz 20 do krok

	fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
	while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit
		celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius
		cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
		fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
	}
	*/
	// Zadanie 3
	/*
	int fahr, celsius; //zmienne typu int
	int start, limit, krok; //zmienne typu int

	start = 0; //przypisz 0 do start
	limit = 200; //przypisz 200 do limit
	krok = 20; //przypisz 20 do krok

	for (fahr = start; fahr <= limit; fahr = fahr + krok) {
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
	}
	*/
	// Zadanie 5
	/*
	float fahr, celsius;
	int limit, krok;

	limit = 200;
	krok = 20;

	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
	*/
	// Zadanie 6
	/*
	float fahr, celsius;
	int start, limit, krok;
	bool validAnswer = true;
	while (validAnswer)
	{
		start = 0;
		cout << "Podaj wartosc limit: " << endl;
		cin >> limit;
		cout << "Podaj wartosc krok: " << endl;
		cin >> krok;

		fahr = start;
		while (fahr <= limit) {
			celsius = 5 * (fahr - 32) / 9;
			cout << fahr << "\t" << celsius << endl;
			fahr = fahr + krok;
		}
		string answer;
		cout << "Czy chcesz kontynuowac? (tak/nie)" << endl;
		cin >> answer;
		if (answer == "nie" or answer == "NIE") {
			validAnswer = false;
		}
	}
	*/
	// Zadanie 7
	/*
	for (int i = 0; i < 10; i++) {
		float number;
		cout << "Podaj liczbe" << endl;
		cin >> number;
		if (number >= 0) {
			cout << "Liczba jest dodatnia: " << number << endl;
		}
	}
	*/
	// Zadanie 8
	/*
	for (int i = 0; i <= 100; i++) {
		if(i % 2 == 0) {
			cout << i << endl;
		}
	}
	*/
	// Zadanie 9
	/*
	bool validAnswer = true;
	int n;
	while (validAnswer)
	{
		cout << "Podaj liczbe ca�kowit�" << endl;
		cin >> n;
		if (0 <= n <= 100)
		{
			validAnswer = false;
		}
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				cout << "Liczba " << n << " jest podzielna przez " << i << endl;
			}
		}
	}
	*/
	// Zadanie 10
	/*
	int n;
	int count = 0;
	cout << "Podaj liczbe ca�kowit�" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
			cout << "Liczba " << n << " jest podzielna przez " << i << endl;
		}
	}
	cout << "Liczba dzielnik�w liczby " << n << " wynosi: " << count << endl;
	*/
	// Zadanie 11
	/*
	int a, b;
	cout << "Podaj dwie liczby ca�kowite" << endl;
	cin >> a >> b;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "Liczby podzielne przez 3 z przedzia�u [" << a << "," << b << "] to: " << endl;
	for(int i = a; i <= b; i++) {
		if (i % 3 == 0) {
			cout << i << endl;
		}
	}
	*/
	// Zadanie 12
	//int n;
	//float avg = 0.0;
	//cout << "Dla ilu liczb rzeczywistych chcesz wylicz� �redni�??" << endl;
	//cin >> n;
	//for (int i = 0; i < n; i++) {
	//	float number;
	//	cout << "Podaj " << i+1 << " liczbe rzeczywist�: " << endl;
	//	cin >> number;
	//	avg += number;
	//}
	//avg /= n;
	//cout << "�rednia z podanych liczb wynosi: " << avg << endl;
	//Zadanie 13
	//for (int i = 100; i >= 0; i--) {
	//	cout << i << endl;
	//}
	//Zadanie 14
	//int highest, num;
	//for(int i = 0; i < 3; i++) {
	//	cout << "Podaj " << i+1 << " liczbe ca�kowit�: " << endl;
	//	cin >> num;
	//	highest = (i == 0) ? num : (num > highest ? num : highest);
	//}
	//cout << "Najwi�ksza podana liczba to: " << highest << endl;
	//Zadanie 15
	//int n, m, result;
	//cout << "Podaj ile liczb chcesz wylosowa�: " << endl;
	//cin >> n;
	//cout << "Jaka ma by� g�rna granica losowanych liczb (dolna to 0): " << endl;
	//cin >> m;
	//cout << "=========================================================\nWylosowane liczby\n=========================================================" << endl;
	//for (int i = 0; i < n; i++) {
	//	result = rand() % (m + 1);
	//	cout << result << endl;
	//}
	//Zadanie 16
	int lucky, counter = 0;
	bool valid = true;
	while (valid) {
		cout << "Podaj swoj� szcz�liw� liczb� [1,10]: " << endl;
		cin >> lucky;
		((1 <= lucky) && (lucky <= 10)) ? valid = false : valid = true;
	}
	cout << "=========================================================" << endl;
	for (int i = 0; i < 10; i++) {
		int generator = rand() % 10 + 1;
		cout << generator << endl;
		generator == lucky ? counter++ : counter;
	}
	cout << "=========================================================" << endl;
	cout << "Twoja szcz�liwa liczba wylosowa�a si� " << counter << " razy." << endl;
}