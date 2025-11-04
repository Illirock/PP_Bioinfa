#include <iostream>
#include <cmath>
#include <random>

using namespace std;

void Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void Max_Void(int a, int b)
{
	if (a > b)
		cout << a << endl;
	else
		cout << b << endl;
}

int AllDivisors(int n)
{
	cout << "All divisors of " << n << " are: ";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}

float Add(float a, float b) { return a + b; }
float Subtract(float a, float b) { return a - b; }
float Multiply(float a, float b) { return a * b; }
float Divide(float a, float b) { return a / b; }

int Power(int base, int exponent)
{
	if (exponent == 0)
		return 1;
	else
		return base * Power(base, exponent - 1);
}

int Factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

int PowerWithMath(int n) {
	return pow(2, n);
}

int Even(int n) {return n/2;}
int Odd(int n) {return  (n-1)/2;}

int LuckyNumber(int luckynumber) {
	int counter = 0;

	for (int i = 0; i < 10; i++) {
		int number = rand() % 10 + 1;
		cout << "Generated number: " << number << endl;
		if (number == luckynumber) {counter++;}
	}
	return counter;
}

int main()
{
	// Zadanie 1
	//int num1, num2;
	//cout << "Enter two integers: " << endl;
	//cin >> num1 >> num2;
	//cout << "Maximum: " << Max(num1, num2) << endl;
	//cout << "Maximum (void function): ";
	//Max_Void(num1, num2);
	// Zadanie 2
	//int number;
	//bool validation = true;
	//while (validation)
	//{
	//	cout << "Enter a positive integer: " << endl;
	//	cin >> number;
	//	if (number > 0)
	//	{
	//		AllDivisors(number);
	//		validation = false;
	//	}
	//	else
	//	{
	//		cout << "Invalid input. Please enter a positive integer." << endl;
	//	}
	//}
	// Zadanie 3
	//bool condition = true;
	//while (condition) {
	//	float a, b;
	//	char operation;
	//	cout << "Podaj dwie liczby rzeczywiste: " << endl;
	//	cin >> a >> b;
	//	cout << "Podaj znak operacji (+, -, *, /): " << endl;
	//	cin >> operation;

	//	switch (operation) {
	//	case '+':
	//		cout << "Wynik dodawania: " << Add(a, b) << endl;
	//		break;
	//	case '-':
	//		cout << "Wynik odejmowania: " << Subtract(a, b) << endl;
	//		break;
	//	case '*':
	//		cout << "Wynik mnożenia: " << Multiply(a, b) << endl;
	//		break;
	//	case '/':
	//		if (b != 0) {
	//			cout << "Wynik dzielenia: " << Divide(a, b) << endl;
	//		}
	//		else {
	//			cout << "Nie można dzielić przez 0" << endl;
	//		}
	//		break;
	//	default:
	//		cout << "Błąd: Nieznana operacja!" << endl;
	//		break;
	//	}
	
	//	cout << "Czy chcesz kontynuować? (t/n): " << endl;
	//	char answer;
	//	cin >> answer;
	//	if (tolower(answer) == 'n') {
	//		condition = false;
	//	}
	//}
	// Zadanie 4
	//int base, exponent;
	//cout << "Enter base and exponent: " << endl;
	//cin >> base >> exponent;
	//cout << base << " raised to the power of " << exponent << " is " << Power(base, exponent) << endl;
	// Zadanie 5
	//int n;
	//bool valid = true;
	//while(valid)
	//{
	//	cout << "Enter a non-negative integer: " << endl;
	//	cin >> n;
	//	if (n >= 0)
	//	{
	//		cout << "Factorial of " << n << " is " << Factorial(n) << endl;
	//		valid = false;
	//	}
	//	else
	//	{
	//		cout << "Invalid input. Please enter a non-negative integer." << endl;
	//	}
	//}
	// Zadanie 6
	// int n;
	// cout << "Enter an integer n to calculate 2^n: " << endl;
	// cin >> n;
	// cout << "2^" << n << " using recursion is: " << Power(2, n) << endl;
	// cout << "2^" << n << " using math library is: " << PowerWithMath(n) << endl;
	// Zadanie 7
	int luckynumber;
	cout << "Enter your lucky number (1-10): " << endl;
	cin >> luckynumber;
	int howmanytimes = LuckyNumber(luckynumber);
	cout << "Your lucky number " << luckynumber << " appeared " <<  howmanytimes<< " times." << endl;
	// Zadanie 8
	// for (int i = 0; i < 100; i++) {
	// 	if (i%2 == 0) {
	// 		cout << Even(i) << endl;
	// 	}
	// 	else {
	// 		cout << Odd(i) << endl;
	// 	}
	// }
	return 0;
}