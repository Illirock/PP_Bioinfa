#include <iostream>
#include <time.h>

using namespace std;

void christmas_tree(int layer, int total_layers) {
	if (layer > total_layers) { return ; }

	for (int i = 0; i < total_layers - layer; i++) { cout << " "; }
	for (int j = 0; j < (2 * layer - 1); j++) { cout << "*"; }
	cout << endl;
	return christmas_tree(layer + 1, total_layers);
}

int digit_sum(int n) {
	int result = 0;
	for (int i = 0; i <= n; i++) { result += i; }
	return result;
}
int digit_sum_recursive(int n)
{
	if (n == 0) { return 0; }
	else { return n + digit_sum_recursive(n - 1); }
}

string word;

string reverse_string(int letter_location = 0)  {
	if (letter_location == word.length()) { return ""; }
	else {
		return reverse_string(letter_location+1) + word[letter_location];
	}
}

bool is_palindrome(int lenght_checked)
{
	if (lenght_checked == word.length()) { return true; }
	else
	{
		if (word[lenght_checked] == word[word.length() - (1 + lenght_checked)])
		{
			return is_palindrome(lenght_checked + 1);
		}
		else { return false; }
	}
}

int maxValue(int array[], int size) {
	int max_val = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > max_val) {
			max_val = array[i];
		}
	}
	return max_val;
}
int maxValue_recursive(int array[], int size, int index = 0, int current_max = INT_MIN) {
	if (index == size) { return current_max; }
	if (array[index] > current_max) {
		current_max = array[index];
	}
	return maxValue_recursive(array, size, index + 1, current_max);
}


int Fibbonaci(int n)
{
	if (n <= 1) { return n; }
	return Fibbonaci(n - 1) + Fibbonaci(n - 2);
}

int Power(int base, int exponent)
{
	int result = 1;
	if (exponent == 0) { return result; }
	for (int i = 1; i <= exponent; i++) {
		result *= base;
	}
	return result;
}
int Power_recursive(int base, int exponent)
{
	if (exponent == 0) { return 1; }
	return base * Power(base, exponent - 1);
}


int Factorial_recurive(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * Factorial_recurive(n - 1);
}

int Natural_sum_recurive(int n)
{
	if (n == 0) { return n; }
	return n + Natural_sum_recurive(n - 1);
}

int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int GCD_recursive(int a, int b)
{
	if (b == 0) { return a; }
	return GCD_recursive(b, a % b);
}

int LCM(int a, int b) {
	return (a * b) / GCD(a, b);
}
int LCM_recursive(int a , int b) {
	int temp = a % b;
	if (temp == 0) { return a; }
	return a * LCM_recursive(b, temp) / temp;

}

double executionTime;
clock_t start, stop;

int main() {
	// Zadanie 1
	//int layers;
	//cout << "How many layers of Christmast Tree you want?" << endl;
	//cin >> layers;
	//christmas_tree(1,layers);
	// Zadanie 2
	//int number;
	//cout << "Enter Natural Number" << endl;
	//cin >> number;
	//cout << "Classic: " << digit_sum(5) << endl;
	//cout << "Recursive: " << digit_sum_recursive(5) << endl;
	// Zadanie 3
	// cout << "Enter word" << endl;
	// cin >> word;
	// cout << "Reversed word: " << reverse_string();
	// Zadanie 4
	// cout << "Enter word" << endl;
	// cin >> word;
	// is_palindrome(0) ? cout << "Your word is palidrome" << endl : cout << "Your word isn't palidrome" << endl;
	// Zadanie 5
	// int Table[10] = { 0, 9, 8, 43, 56321, 56489, 231, 1, 67423, 3 };
	// int tableSize = sizeof(Table) / sizeof(Table[0]);
	// cout << "Max value in table is: " << maxValue(Table, tableSize) << endl;
	// cout << "Max value in table by recursive function is: "<< maxValue(Table, tableSize) << endl;
	// Zadanie 6
	//cout << "Enter nth element of fibbonaci" << endl;
	//int answear;
	//cin >> answear;
	//cout << answear << " element of Fibbonaci sequence: " << Fibbonaci(answear-1) << endl;
	// Zadanie 7
	//cout << "Enter base and exponent for Power function" << endl;
	//int base, exponent;
	//cin >> base >> exponent;
	//cout << "Iteration Ver. " << Power(base, exponent) << "\nRecursive Ver. " << Power_recursive(base, exponent) << endl;
	// Zadanie 8
	//cout << "Enter nth Factorial " << endl;
	//int answear;
	//cin >> answear;
	//cout << "Result: " << Factorial_recurive(answear);
	// Zadanie 9
	//cout << "Enter nth natural number " << endl;
	//int answear;
	//cin >> answear;
	//cout << "Result: " << Natural_sum_recurive(answear);
	// Zadanie 10
	// int a, b;
	// cout << "Enter two numbers to find GCD" << endl;
	// cin >> a >> b;
	// cout << "Iterative GCD: " << GCD(a, b) << "\nRecursive GCD: " << GCD_recursive(a, b) << endl;
	// Zadanie 11
	// int a, b;
	// cout << "Enter two numbers to find LCM" << endl;
	// cin >> a >> b;
	// if (b > a) { swap(a, b); }
	// cout << "Iterative LCM: " << LCM(a, b) << "\nRecursive LCM: " << LCM_recursive(a, b) << endl;
	// Zadanie 12
	start = clock();
	digit_sum(4747);
	stop = clock();
	executionTime = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Iterative digit sum time: " << executionTime << " seconds" << endl;

	start = clock();
	digit_sum_recursive(4747);
	stop = clock();
	executionTime = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Recursive digit sum time: " << executionTime << " seconds" << endl;
}

