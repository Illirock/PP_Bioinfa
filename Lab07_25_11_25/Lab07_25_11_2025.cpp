#include <iostream>

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

string reverse_string(string sentance, int letter_location = 0)  {
	if (letter_location == sentance.length()) { return ""; }
	else {
		return reverse_string(sentance, letter_location+1) + sentance[letter_location];
	}
}

bool is_palindrome(string word, int lenght_checked)
{
	if (lenght_checked == word.length()) { return true; }
	else
	{
		if (word[lenght_checked] == word[word.length() - (1 + lenght_checked)])
		{
			return is_palindrome(word, lenght_checked + 1);
		}
		else { return false; }
	}
}

int max(int array[]) {
	int max;
	for (int item = 0; item < sizeof(array); item++) {
		cout << array[item] << endl;
		if (item == 0 || max < array[item]) {
			max = array[item];
		}
	}
	return max;
}

int max_recursive(int array[], int max, int lenght_checked = 0) {
	if (lenght_checked == sizeof(array)) { return max; }
	else {
		if (lenght_checked = 0 || array[lenght_checked] > max) { max = array[lenght_checked]; }
		return max_recursive(array, max, lenght_checked + 1);
	}
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

int main()
{
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
	// string sentance;
	// cout << "Enter Phrase" << endl;
	// cin >> sentance;
	// cout << "Reversed phrase: " << reverse_string(sentance);
	// Zadanie 4
	int Table[10] = { 0, 9, 8, 43, 56321, 56489, 231, 1, 67423, 3 };
	cout << "Max value in table is: " << max(Table) << endl;
	cout << "Max value in table by recursive function is: " << max_recursive(Table, INT_MIN) << endl;
	// Zadanie 5
	//string word;
	//cout << "" << endl;
	//cin >> word;
	//is_palindrome(word, 0) ? cout << "Your word is palidrome" << endl : cout << "Your word isn't palidrome" << endl;
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
	//Zadanie 10
}

