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
	string sentance;
	cout << "Enter Phrase" << endl;
	cin >> sentance;
	cout << "Reversed phrase: " << reverse_string(sentance);
	// Zadanie 4
}

