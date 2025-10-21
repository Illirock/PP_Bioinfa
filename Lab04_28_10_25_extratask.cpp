#include <iostream>

using namespace std;

int Min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
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
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

int Factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main()
{
	// Zadanie 1
	//int num1, num2;
	//cout << "Enter two integers: " << endl;
	//cin >> num1 >> num2;
	//cout << "Minimum: " << Min(num1, num2) << endl;
	//cout << "Maximum: " << Max(num1, num2) << endl;
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

}